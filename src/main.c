#include "s21_decimal.h"

int main() {
  s21_decimal* a = s21_create_decimal();

  s21_set_sign(a, 1);
  s21_set_scale(a, 00);

  a->bits[0] = 5;
  s21_base_mul(*a, *a, a);
  s21_pretty_print_bits(*a);
  s21_free_decimal(a);

  return 0;
}
