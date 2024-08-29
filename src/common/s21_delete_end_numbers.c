#include "../s21_decimal.h"

void s21_delete_end_numbers(s21_decimal *value) {
  int i = 0;
  while (value->bits[i] == 0) {
    i++;
  }
  for (int j = i; j < 4; j++) {
    value->bits[j] = 0;
  }
}