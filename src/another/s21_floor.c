#include "../s21_decimal.h"

int s21_floor(s21_decimal value, s21_decimal *result) {
  int code = s21_truncate(value, result);
  return code;
}