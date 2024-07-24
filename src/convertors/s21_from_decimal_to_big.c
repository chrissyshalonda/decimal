#include "../s21_decimal.h"

void s21_from_decimal_to_big(s21_decimal src, s21_big_decimal *dst) {
  s21_set_sign(dst, s21_get_sign(src));
  s21_big_set_scale(dst, s21_get_scale(src));
  for (int i = 0; i < 96; i++)
    s21_get_bit(src, i) ? s21_big_set_bit(dst, i) : s21_big_reset_bit(dst, i);
  if (!s21_big_get_sign(*dst))
    for (int i = 96; i < 224; i++) s21_big_set_bit(dst, i);
}