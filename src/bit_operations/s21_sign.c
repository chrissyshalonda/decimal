#include "../s21_decimal.h"

void s21_set_sign(s21_decimal *value, int sign) {
  if (sign)
    s21_set_bit(value, 127);
  else
    s21_reset_bit(value, 127);
}

int s21_get_sign(s21_decimal value) { return s21_get_bit(value, 127); }

//-----------------------------------BIG_DECIMALS-------------------------------------------

void s21_big_set_sign(s21_big_decimal *value, int sign) {
  if (sign)
    s21_big_set_bit(value, 255);
  else
    s21_big_reset_bit(value, 255);
}

int s21_big_get_sign(s21_big_decimal value) {
  return s21_big_get_bit(value, 255);
}