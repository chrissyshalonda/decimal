#include "../s21_decimal.h"

void s21_copy_decimal(s21_decimal src, s21_decimal* dst) {
  for (int i = 0; i < 4; i++) {
    dst->bits[i] = src.bits[i];
  }
}

//----------------------------------BIG_DECIMAL-----------------------------------

void s21_big_copy_decimal(s21_big_decimal src, s21_big_decimal* dst) {
  for (int i = 0; i < 7; i++) {
    dst->bits[i] = src.bits[i];
  }
}