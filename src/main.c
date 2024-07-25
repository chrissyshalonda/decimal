#include "s21_decimal.h"

int main() {
  s21_decimal* a = s21_create_decimal();
  s21_decimal* b = s21_create_decimal();
  s21_decimal* result = s21_create_decimal();

  s21_set_sign(a, 0);
  s21_set_scale(a, 0);

  s21_set_sign(b, 0);
  s21_set_scale(b, 0);

  a->bits[0] = 5;
  b->bits[0] = 5;

  s21_pretty_print_bits(*a);
  s21_pretty_print_bits(*b);

  s21_base_mul(*a, *b, result);

  s21_pretty_print_bits(*result);

  // s21_negate(*a, a);
  // s21_from_decimal_to_big(*a, b);
  // s21_pretty_print_bits(*a);
  // s21_big_pretty_print_bits(*b);

  s21_free_decimal(a);
  s21_big_free_decimal(b);

  return 0;
}
