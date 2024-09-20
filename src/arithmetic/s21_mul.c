#include "../s21_decimal.h"
#include "s21_arithmetic.h"

int s21_max_not_null_bit(s21_decimal value) {
  int result = -1;
  for (int i = 127; i >= 0; i--) {
    if (s21_get_bit(value, i)) {
      result = i;
      break;
    }
  }
  return result;
}

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  ERRORS code = OK;

  if (!result) {
    code = UNEXEPTED_ERROR;
  } else {
    *result = s21_clear_decimal(*result);

    int sign1 = s21_get_sign(value_1);
    int sign2 = s21_get_sign(value_2);

    if (sign1 == POSITIVE_SIGN && sign2 == POSITIVE_SIGN) {
      code = s21_mul_helper(value_1, value_2, result);
    } else if (sign1 == POSITIVE_SIGN && sign2 == NEGATIVE_SIGN) {
      s21_set_sign(&value_2, 0);
      code = s21_mul_helper(value_1, value_2, result);
      s21_negate(*result, result);
    } else if (sign1 == NEGATIVE_SIGN && sign2 == POSITIVE_SIGN) {
      s21_set_sign(&value_1, 0);
      code = s21_mul_helper(value_1, value_2, result);
      s21_negate(*result, result);
    } else if (sign1 == NEGATIVE_SIGN && sign2 == NEGATIVE_SIGN) {
      s21_set_sign(&value_1, 0);
      s21_set_sign(&value_2, 0);
      code = s21_mul_helper(value_1, value_2, result);
    }

    if (code == TOO_SMALL && s21_get_sign(*result)) {
      code = TOO_SMALL;
    }
  }

  return code;
}

int s21_mul_helper(s21_decimal value_1, s21_decimal value_2,
                   s21_decimal *result) {
  int code = OK;

  int scale_1 = s21_get_scale(value_1);
  int scale_2 = s21_get_scale(value_2);

  value_1.bits[3] = value_2.bits[3] = 0;
  s21_big_decimal big_result = s21_mul_processing(value_1, value_2);

  int needed_shift = s21_shift_for_correct_decimal(big_result);
  int final_scale = scale_1 + scale_2 - needed_shift;

  if (final_scale < 0) {
    code = TOO_BIG;
  } else {
    while (needed_shift > 28) {
      s21_big_binary_division(big_result,
                              s21_create_big_decimal(scale_table[1]), NULL);
      needed_shift--;
    }

    if (final_scale > 28) {
      s21_big_decimal temp = big_result;
      int temp_scale = final_scale;

      while (temp_scale > 28) {
        temp = s21_big_binary_division(
            temp, s21_create_big_decimal(scale_table[1]), NULL);
        temp_scale--;
      }
      needed_shift = final_scale - temp_scale + needed_shift;
      final_scale = temp_scale;
    }

    s21_big_decimal remainder = s21_create_big_decimal(s21_clear_decimal());
    s21_big_decimal ten_scale =
        s21_create_big_decimal(scale_table[needed_shift]);

    big_result = s21_big_binary_division(big_result, ten_scale, &remainder);

    big_result.decimal[0] =
        s21_round_banking(big_result.decimal[0], remainder.decimal[0]);
    s21_set_scale(&big_result.decimal[0], final_scale);

    if (!s21_equal_zero(big_result.decimal[1]) ||
        !s21_not_correct(big_result.decimal[0])) {
      code = TOO_BIG;
    } else {
      *result = big_result.decimal[0];
    }
  }
}

s21_big_decimal s21_mul_processing(s21_decimal value_1, s21_decimal value_2) {
  s21_big_decimal result = s21_create_big_decimal(s21_clear_decimal());
  s21_big_decimal tmp = s21_create_big_decimal(value_1);

  int max_bit = s21_max_not_null_bit(value_2);

  for (int i = 0; i <= max_bit; i++) {
    if (s21_get_bit(value_2, i)) {
      result = s21_big_binary_addition(result, tmp);
    }
    tmp = s21_big_binary_shift_left(tmp);
  }

  return result;
}