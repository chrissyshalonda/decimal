#include "../s21_decimal.h"

void s21_remove_end_zero(s21_decimal *value) {
  int i = 0;
  while (s21_get_bit(*value, i) == 0) i++;
  s21_set_scale(value, s21_get_scale(*value) - i);
}