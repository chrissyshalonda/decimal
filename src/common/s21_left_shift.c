#include "../s21_decimal.h"

void s21_left_shift_decimal(s21_decimal src, s21_decimal *dst, int shift) {
  s21_copy_decimal(src, dst);

  while (shift > 31) {
    s21_left_shift_decimal(*dst, dst, 31);
    shift -= 31;
  }

  for (int i = 2; i >= 0; i--) {
    unsigned int current = dst->bits[i] << shift;
    if (i > 0) {
      current |= dst->bits[i - 1] >> (32 - shift);
    }
    dst->bits[i] = current;
  }
}

//----------------------------------BIG_DECIMAL-----------------------------------

void s21_big_left_shift_decimal(s21_big_decimal src, s21_big_decimal *dst,
                                int shift) {
  s21_big_copy_decimal(src, dst);

  while (shift > 31) {
    s21_big_left_shift_decimal(*dst, dst, 31);
    shift -= 31;
  }

  for (int i = 6; i >= 0; i--) {
    unsigned int current = dst->bits[i] << shift;
    if (i > 0) {
      current |= dst->bits[i - 1] >> (32 - shift);
    }
    dst->bits[i] = current;
  }
}