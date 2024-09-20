#include "arithmetic/s21_arithmetic.h"
#include "s21_decimal.h"

int main() {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};

  s21_decimal result = s21_clear_decimal();
  s21_decimal remainder = s21_clear_decimal();

  s21_set_scale(&decimal1, 10);
}