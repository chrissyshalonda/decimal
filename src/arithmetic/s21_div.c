#include "../s21_decimal.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  // TODO: s21_div
  return 0;
}

int s21_base_div(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal *result) {
  s21_decimal temp = s21_init_int(0, 0);
  int len1 = s21_length(value_1);
  int len2 = s21_length(value_2);
  int diff = len1 - len2;

  return 0;
}

int s21_inverse(s21_decimal value, s21_decimal *result) { return 0; }