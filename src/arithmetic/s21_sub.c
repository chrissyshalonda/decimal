#include "s21_arithmetic.h"

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  ERRORS code = OK;

  if (!result) {
    code = UNEXEPTED_ERROR;
  } else {
    int sign1 = s21_get_sign(value_1);
    int sign2 = s21_get_sign(value_2);

    if (sign1 == POSITIVE_SIGN && sign2 == POSITIVE_SIGN) {
      s21_sub_processing(value_1, value_2, result);
    } else if (sign1 == POSITIVE_SIGN && sign2 == NEGATIVE_SIGN) {
    } else if (sign1 == NEGATIVE_SIGN && sign2 == POSITIVE_SIGN) {
    } else if (sign1 == NEGATIVE_SIGN && sign2 == NEGATIVE_SIGN) {
      s21_sub_processing(value_1, value_2, result);
      s21_set_sign(result, 1);
    }
  }
  return code;
}

int s21_sub_processing(s21_decimal value_1, s21_decimal value_2,
                       s21_decimal *result) {
  int sign1 = s21_get_sign(value_1);
  int sign2 = s21_get_sign(value_2);

  int scale_1 = s21_get_scale(value_1);
  int scale_2 = s21_get_scale(value_2);
  value_1.bits[3] = value_2.bits[3] = 0;

 // s21_scale_rounding(&value_1, &value_2, scale_1, scale_2);
  *result = s21_binary_subtraction(value_1, value_2);

  return 0;
}

s21_decimal s21_binary_subtraction(s21_decimal value_1, s21_decimal value_2) {
  s21_decimal result = s21_clear_decimal();
  value_2 = s21_binary_not(value_2);
  value_2 = s21_binary_addition(value_2, s21_get_one());
  result = s21_binary_addition(value_1, value_2);
  return result;
}

s21_big_decimal s21_big_binary_subtraction(s21_big_decimal value_1, s21_big_decimal value_2) {
  s21_big_decimal result;

  value_2.decimal[0] = s21_binary_not(value_2.decimal[0]);
  value_2.decimal[1] = s21_binary_not(value_2.decimal[1]);

  s21_big_decimal one = s21_create_big_decimal(s21_get_one());

  value_2 = s21_big_binary_addition(value_2, one);
  result = s21_big_binary_addition(value_1, value_2);

  return result;
}

s21_decimal s21_binary_not(s21_decimal value) {
  s21_decimal result = s21_clear_decimal();
  result.bits[0] = ~value.bits[0];
  result.bits[1] = ~value.bits[1];
  result.bits[2] = ~value.bits[2];
  result.bits[3] = ~value.bits[3];
  return result;
}

s21_decimal s21_get_one() {
  s21_decimal result = s21_clear_decimal();
  result.bits[0] = 1;
  return result;
}