#include "../s21_decimal.h"
#include "s21_comparison.h"

int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
  int code = 0;

  int sign1 = s21_get_sign(value_1);
  int sign2 = s21_get_sign(value_2);

  if (sign1 == POSITIVE_SIGN && sign2 == NEGATIVE_SIGN) {
    code = 1;
  } else if (sign1 == NEGATIVE_SIGN && sign2 == POSITIVE_SIGN) {
    code = 0;
  } else if (sign1 == NEGATIVE_SIGN && sign2 == NEGATIVE_SIGN) {
    s21_set_sign(&value_1, 0);
    s21_set_sign(&value_2, 0);
    code = s21_is_greater_handle(value_2, value_1);
  } else if (sign1 == POSITIVE_SIGN && sign2 == POSITIVE_SIGN) {
    code = s21_is_greater_handle(value_1, value_2);
  }

  return code;
}

int s21_is_greater_handle(s21_decimal value_1, s21_decimal value_2) {
  int code = 0;

  s21_big_decimal tmp_1;
  s21_big_decimal tmp_2;

  s21_scale_rounding(&value_1, &value_2, s21_get_scale(value_1),
                     s21_get_scale(value_2), &tmp_1, &tmp_2);
  code = s21_big_binary_compare(tmp_1, tmp_2);

  if (code == 1) {
    code = 1;
  } else {
    code = 0;
  }

  return code;
}