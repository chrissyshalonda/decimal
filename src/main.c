#include "s21_decimal.h"

int main() {
  s21_decimal* a = s21_create_decimal();
  s21_big_decimal* b = s21_big_create_decimal();

  s21_set_sign(a, 1);
  s21_set_scale(a, 10);

  a->bits[0] = 180000;
  s21_negate(*a, a);
  s21_from_decimal_to_big(*a, b);
  s21_pretty_print_bits(*a);
  s21_big_pretty_print_bits(*b);

  s21_free_decimal(a);
  s21_big_free_decimal(b);

  return 0;
}
