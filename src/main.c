#include "s21_decimal.h"

int main() {
  s21_decimal* value = s21_create_decimal();
  s21_set_sign(value, 1);
  s21_set_scale(value, 28);

  s21_set_bit(value, 30);
  s21_pretty_print_bits(*value);
  s21_left_shift_decimal(value, 165);

  s21_pretty_print_bits(*value);
  s21_free_decimal(value);

  return 0;
}
