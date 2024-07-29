#include "../s21_decimal.h"

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  dst->bits[0] = src;
  s21_set_scale(dst, 0);
  s21_set_sign(dst, src >= 0 ? 0 : 1);
  return 0;
}

//-----------------------------------BIG_DECIMALS-------------------------------------------

int s21_from_int_to_big_decimal(int src, s21_big_decimal *dst) {
  dst->bits[0] = src;
  s21_big_set_scale(dst, 0);
  s21_big_set_sign(dst, src >= 0 ? 0 : 1);
  return 0;
}