#include "s21_decimal.h"

int main() {
  s21_decimal* a = s21_create_decimal();
  s21_decimal* b = s21_create_decimal();
  s21_decimal* c = s21_create_decimal();

  s21_set_sign(a, 1);
  s21_set_sign(b, 1);
  s21_set_sign(c, 1);

  s21_set_bit(a, 61);
  s21_set_bit(b, 61);

  s21_base_add(a, b, c);

  s21_free_decimal(a);
  s21_free_decimal(b);
  s21_free_decimal(c);

  return 0;
}
