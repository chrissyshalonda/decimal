#include "../s21_decimal.h"

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  // TODO: s21_mul
  return 0;
}

int s21_base_mul(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal *result) {
  s21_decimal *temp = s21_create_decimal();

  for (int i = 0; i < 96; i++) {
    if (s21_get_bit(value_2, i)) {
      s21_clear_decimal(result);
      s21_left_shift_decimal(value_2, temp, i);
      s21_base_add(temp, &value_1, result);
      s21_copy_decimal(*result, &value_1);
    }
  }
  s21_free_decimal(temp);

  return 0;
}