#include "../s21_decimal.h"

int s21_length(s21_decimal value) {
  int length = 0;
  int i = 0;
  for (i = 95; i >= 0; i--)
    if (s21_get_bit(value, i)) break;

  return i + 1;
}