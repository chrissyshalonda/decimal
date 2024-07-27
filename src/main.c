#include "s21_decimal.h"

int main() {
  s21_decimal* a = s21_create_decimal();
  s21_decimal* b = s21_create_decimal();
  s21_decimal* result = s21_create_decimal();

  s21_from_int_to_decimal(45, a);
  s21_from_int_to_decimal(153, b);
  s21_set_scale(a, 1);
  s21_set_scale(b, 2);
  s21_negate(*a, a);
  printf("a: %d\n", a->bits[0]);
  printf("b: %d\n", b->bits[0]);
  printf("a scale: %d\n", s21_get_scale(*a));
  printf("b scale: %d\n", s21_get_scale(*b));

  s21_base_mul(*a, *b, result);
  printf("result: %d\n", result->bits[0]);
  printf("result scale: %d\n", s21_get_scale(*result));

  s21_free_decimal(a);
  s21_free_decimal(b);
  s21_free_decimal(result);

  return 0;
}
