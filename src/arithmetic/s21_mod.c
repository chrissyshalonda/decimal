#include "../s21_decimal.h"
#include "s21_arithmetic.h"

int s21_mod(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  ERRORS code = OK;

  if (!result) {
    code = UNEXEPTED_ERROR;
  } else if (s21_is_equal(value_2, s21_clear_decimal())) {
    code = ZERO_DIVISION;
  } else {
    *result = s21_clear_decimal();
    int sign1 = s21_get_sign(value_1);
    int sign2 = s21_get_sign(value_2);

    int scale_1 = s21_get_scale(value_1);
    int scale_2 = s21_get_scale(value_2);

    int final_scale = scale_1 > scale_2 ? scale_1 : scale_2;

    s21_big_decimal big_value_1;
    s21_big_decimal big_value_2;
    s21_big_decimal remainder = s21_create_big_decimal(s21_clear_decimal());

    s21_scale_rounding(&value_1, &value_2, scale_1, scale_2, &big_value_1,
                       &big_value_2);
    s21_big_binary_division(big_value_1, big_value_2, &remainder);

    s21_set_scale(&remainder.decimal[0], final_scale);

    *result = remainder.decimal[0];
    s21_set_sign(result, sign1);
  }

  return code;
}