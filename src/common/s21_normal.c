#include "../s21_decimal.h"

int s21_normalize(s21_decimal *value_1, s21_decimal *value_2) {
  s21_decimal *temp = s21_create_decimal();
  s21_from_int_to_decimal(10, temp);
  int diff = s21_get_scale(*value_1) - s21_get_scale(*value_2);

  if (diff > 0) {
    for (int i = 0; i < diff; i++) s21_base_mul(*value_2, *temp, value_2);
    s21_set_scale(value_2, s21_get_scale(*value_1));
  } else {
    for (int i = 0; i < -diff; i++) s21_base_mul(*value_1, *temp, value_1);
    s21_set_scale(value_1, s21_get_scale(*value_2));
  }
  s21_free_decimal(temp);
  return 0;
}