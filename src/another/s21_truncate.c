#include "../arithmetic/s21_arithmetic.h"
#include "../s21_decimal.h"

int s21_truncate(s21_decimal value, s21_decimal *result) {
  int code = 0;

  if (result == NULL) {
    code = 1;
  } else {
    int scale = s21_get_scale(value);
    int sign = s21_get_sign(value);
    value.bits[3] = 0;

    value = s21_binary_division(value, scale_table[scale], NULL);
    *result = value;
    s21_set_sign(result, sign);
  }

  return code;
}