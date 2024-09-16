#include "s21_arithmetic.h"

int s21_max_not_null_bit(s21_decimal value){
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
      //s21_mul_processing(value_1, value_2, result);
    } else if (sign1 == POSITIVE_SIGN && sign2 == NEGATIVE_SIGN) {
    } else if (sign1 == NEGATIVE_SIGN && sign2 == POSITIVE_SIGN) {
    } else if (sign1 == NEGATIVE_SIGN && sign2 == NEGATIVE_SIGN) {
    }
  }

  return code;
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
