#include "../s21_decimal.h"

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  // TODO: s21_mul
  return 0;
}

int s21_base_mul(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal *result) {
  bool is_negative = s21_get_sign(value_1) ^ s21_get_sign(value_2);
  if (s21_get_sign(value_1)) s21_negate(value_1, &value_1);
  if (s21_get_sign(value_2)) s21_negate(value_2, &value_2);

  s21_decimal *shift_temp = s21_create_decimal();
  s21_decimal *temp = s21_create_decimal();

  for (int i = 0; i < 96; i++) {
    if (s21_get_bit(value_2, i)) {
      s21_clear_decimal(result);
      s21_left_shift_decimal(value_1, shift_temp, i);
      s21_base_add(*shift_temp, *temp, result);
      s21_copy_decimal(*result, temp);
    }
  }

  if (is_negative) s21_negate(*result, result);
  s21_free_decimal(shift_temp);
  s21_free_decimal(temp);

  return 0;
}