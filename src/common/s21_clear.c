#include "../s21_decimal.h"

void s21_clear_decimal(s21_decimal* value) {
  value->bits[0] = 0;
  value->bits[1] = 0;
  value->bits[2] = 0;
  value->bits[3] = 0;
}

s21_big_decimal s21_big_clear_decimal(s21_big_decimal value) {
  value->bits[0] = 0;
  value->bits[1] = 0;
  value->bits[2] = 0;
  value->bits[3] = 0;
  value->bits[4] = 0;
  value->bits[5] = 0;
  value->bits[6] = 0;
  value->bits[7] = 0;
}