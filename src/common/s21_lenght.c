#include "../s21_decimal.h"

int s21_length(s21_decimal value) {
  int sign = s21_get_sign(value);
  int length = 0;
  int i = 0;
  for (i = 95; i >= 0; i--)
    if (s21_get_bit(value, i) ^ sign) break;

  return i + 1;
}

//-----------------------------------BIG
// DECIMAL------------------------------------

int s21_big_length(s21_big_decimal value) {
  int sign = s21_big_get_sign(value);
  int length = 0;
  int i = 0;
  for (i = 223; i >= 0; i--)
    if (s21_big_get_bit(value, i) ^ sign) break;

  return i + 1;
}