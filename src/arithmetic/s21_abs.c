#include "../s21_decimal.h"

int s21_abs(s21_decimal value, s21_decimal *result) {
  int sign = s21_get_sign(value);
  if (sign == 1) {
    s21_negate(value, result);
  } else {
    s21_copy_decimal(value, result);
  }
  return 0;
}

//-----------------------------------BIG_DECIMALS-------------------------------------------

int s21_big_abs(s21_big_decimal value, s21_big_decimal *result) {
  int sign = s21_big_get_sign(value);
  if (sign == 1) {
    s21_big_negate(value, result);
  } else {
    s21_big_copy_decimal(value, result);
  }
  return 0;
}