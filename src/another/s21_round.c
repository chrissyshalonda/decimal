#include "../s21_decimal.h"

int s21_round(s21_decimal value, s21_decimal *result) {
  int code = s21_truncate(value, result);
  if (!code) {
    //*result = s21_binary_addition(*result, s21_get_one());
  }

  return code;
}