#include "s21_decimal.h"

int main() {
  s21_decimal *a = s21_create_decimal();
  s21_decimal *b = s21_create_decimal();
  s21_decimal *result = s21_create_decimal();
  // s21_from_int_to_decimal(10, a);

  a->bits[0] = 1;
  s21_left_shift_decimal(*a, a, 94);
  s21_negate(*a, a);
  s21_from_int_to_decimal(10, b);

  s21_set_scale(b, 1);
  s21_set_scale(a, 1);
  int error = s21_add(*a, *a, result);
  printf("error: %d\n", error);
  printf("result:\n");
  s21_pretty_print_bits(*result);

  s21_free_decimal(a);
  s21_free_decimal(b);
  s21_free_decimal(result);

  return 0;
}
