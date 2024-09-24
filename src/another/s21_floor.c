#include "../comparison/s21_comparison.h"
#include "../s21_decimal.h"

int s21_floor(s21_decimal value, s21_decimal *result) {
  int code = s21_truncate(value, result);
  value = s21_remove_zeros(value);

  if (s21_get_sign(value) && s21_get_scale(value) != 0) {
    s21_sub(*result, scale_table[0], result);
  }

  return code;
}