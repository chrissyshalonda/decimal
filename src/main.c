#include "s21_decimal.h"

int main() {
  s21_decimal* a = s21_create_decimal();
  s21_decimal* b = s21_create_decimal();
  s21_decimal* c = s21_create_decimal();

  a->bits[0] = 3;
  b->bits[0] = 10;

  s21_print_bits(*a);
  printf("\n");
  s21_print_bits(*b);
  printf("\n");
  s21_base_mul(*a, *b, c);

  s21_print_bits(*c);
  printf("\n");

  s21_free_decimal(a);
  s21_free_decimal(b);
  s21_free_decimal(c);

  return 0;
}
