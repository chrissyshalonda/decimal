#include "../s21_decimal.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  // TODO: s21_div
  return 0;
}

int s21_base_div(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal *result) {
  s21_decimal *zero = s21_create_decimal();
  if (s21_is_equal(value_2, *zero)) {
    s21_free_decimal(zero);
    return DIVIDE_BY_ZERO;
  }
  bool is_negative = s21_get_sign(value_1) ^ s21_get_sign(value_2);
  if (s21_get_sign(value_1)) s21_negate(value_1, &value_1);
  if (s21_get_sign(value_2)) s21_negate(value_2, &value_2);

  if (is_negative) s21_negate(*result, result);
  s21_free_decimal(zero);
  return 0;
}