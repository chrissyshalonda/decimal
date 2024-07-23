#include "../s21_decimal.h"

void s21_left_shift_decimal(s21_decimal* value, int shift) {
  int result = 0;

  while (shift > 31) {
    s21_left_shift_decimal(value, 31);
    shift -= 31;
  }

  for (int i = 2; i >= 0; i--) {
    unsigned int current = value->bits[i] << shift;
    if (i > 0) {
      current |= value->bits[i - 1] >> (32 - shift);
    }
    value->bits[i] = current;
  }
}

//----------------------------------BIG_DECIMAL-----------------------------------

void s21_big_left_shift_decimal(s21_big_decimal* value, int shift) {
  int result = 0;

  while (shift > 31) {
    s21_big_left_shift_decimal(value, 31);
    shift -= 31;
  }

  for (int i = 6; i >= 0; i--) {
    unsigned int current = value->bits[i] << shift;
    if (i > 0) {
      current |= value->bits[i - 1] >> (32 - shift);
    }
    value->bits[i] = current;
  }
}