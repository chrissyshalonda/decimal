#include "../s21_decimal.h"
#include "s21_arithmetic.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int code = OK;

  if (!result) {
    code = UNEXEPTED_ERROR;
  } else {
    int sign1 = s21_get_sign(value_1);
    int sign2 = s21_get_sign(value_2);

    if (sign1 == POSITIVE_SIGN && sign2 == POSITIVE_SIGN) {
      code = s21_add_processing(value_1, value_2, result);
    } else if (sign1 == POSITIVE_SIGN && sign2 == NEGATIVE_SIGN) {
      s21_set_sign(&value_2, 0);
      code = s21_sub(value_1, value_2, result);
    } else if (sign1 == NEGATIVE_SIGN && sign2 == POSITIVE_SIGN) {
      s21_set_sign(&value_1, 0);
      code = s21_sub(value_1, value_2, result);
      s21_negate(*result, result);
    } else if (sign1 == NEGATIVE_SIGN && sign2 == NEGATIVE_SIGN) {
      s21_set_sign(&value_1, 0);
      s21_set_sign(&value_2, 0);
      code = s21_add_processing(value_1, value_2, result);
      s21_negate(*result, result);
    }

    if (s21_get_sign(*result) == 1 && code == 1) {
      code = TOO_SMALL;
    }
  }
  return code;
}

int s21_add_processing(s21_decimal value_1, s21_decimal value_2,
                       s21_decimal *result) {
  int code = OK;

  s21_big_decimal big_value_1;
  s21_big_decimal big_value_2;

  int scale_1 = s21_get_scale(value_1);
  int scale_2 = s21_get_scale(value_2);

  int max_scale = scale_1 > scale_2 ? scale_1 : scale_2;

  s21_scale_rounding(&value_1, &value_2, scale_1, scale_2, &big_value_1,
                     &big_value_2);
  s21_big_decimal big_result =
      s21_big_binary_addition(big_value_1, big_value_2);
  int needed_shift = s21_shift_for_correct_decimal(big_result);
  int final_scale = max_scale - needed_shift;

  if (final_scale < 0) {
    code = TOO_BIG;
  } else {
    s21_big_decimal remainder = s21_create_big_decimal(s21_clear_decimal());
    s21_big_decimal ten_scale =
        s21_create_big_decimal(scale_table[needed_shift]);

    big_result = s21_big_binary_division(big_result, ten_scale, &remainder);
    s21_set_scale(&remainder.decimal[0], needed_shift);

    big_result.decimal[0] =
        s21_round_banking(big_result.decimal[0], remainder.decimal[0]);
    s21_set_scale(&big_result.decimal[0], final_scale);

    if (!s21_equal_zero(big_result.decimal[1]) ||
        !s21_not_correct(big_result.decimal[0])) {
      code = TOO_BIG;
    }
    *result = big_result.decimal[0];
  }

  return code;
}

int s21_equal_zero(s21_decimal value) {
  return (value.bits[0] == 0 && value.bits[1] == 0 && value.bits[2] == 0 &&
          value.bits[3] == 0);
}

s21_decimal s21_binary_and(s21_decimal result, s21_decimal tmp) {
  s21_decimal output = s21_clear_decimal();
  for (int i = 0; i < 4; i++) {
    output.bits[i] = result.bits[i] & tmp.bits[i];
  }
  return output;
}

s21_decimal s21_binary_xor(s21_decimal result, s21_decimal tmp) {
  s21_decimal output = s21_clear_decimal();
  for (int i = 0; i < 4; i++) {
    output.bits[i] = result.bits[i] ^ tmp.bits[i];
  }
  return output;
}

s21_decimal s21_binary_addition(s21_decimal value_1, s21_decimal value_2) {
  s21_decimal result = value_1;
  s21_decimal tmp = value_2;

  while (!(s21_equal_zero(tmp))) {
    s21_decimal overflow = s21_binary_and(result, tmp);
    overflow = s21_binary_shift_left(overflow);
    result = s21_binary_xor(result, tmp);
    tmp = overflow;
  }

  return result;
}

s21_big_decimal s21_big_binary_addition(s21_big_decimal value_1,
                                        s21_big_decimal value_2) {
  s21_big_decimal result = value_1;
  s21_big_decimal tmp = value_2;

  while (!(s21_equal_zero(tmp.decimal[0])) ||
         !(s21_equal_zero(tmp.decimal[1]))) {
    s21_big_decimal overflow;
    overflow.decimal[0] = s21_binary_and(result.decimal[0], tmp.decimal[0]);
    overflow.decimal[1] = s21_binary_and(result.decimal[1], tmp.decimal[1]);

    overflow = s21_big_binary_shift_left(overflow);

    result.decimal[0] = s21_binary_xor(result.decimal[0], tmp.decimal[0]);
    result.decimal[1] = s21_binary_xor(result.decimal[1], tmp.decimal[1]);

    tmp = overflow;
  }

  return result;
}

int s21_shift_for_correct_decimal(s21_big_decimal value) {
  int count = 0;

  if (!(s21_equal_zero(value.decimal[0]) && s21_equal_zero(value.decimal[1]))) {
    s21_decimal big = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    s21_big_decimal max = s21_create_big_decimal(big);
    s21_big_decimal quotient = s21_big_binary_division(value, max, NULL);

    while (1) {
      int compare = s21_binary_compare(quotient.decimal[0], scale_table[count]);
      if (compare == -1 || compare == 0) {
        break;
      }
      count++;
    }

    s21_big_decimal tmp = s21_big_binary_division(
        value, s21_create_big_decimal(scale_table[count]), NULL);
    if (!s21_equal_zero(tmp.decimal[1]) || tmp.decimal[0].bits[3] != 0) {
      count++;
    }
  }

  return count;
}