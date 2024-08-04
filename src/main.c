// #include <stdio.h>
// #include <string.h>

#include "s21_decimal.h"

// #define MAX_DIGITS 32

int main() {
  // Двоичное число в виде строки
  s21_decimal value1 = s21_init_int(120001, 4);
  s21_decimal value2 = s21_init_int(-12, 0);
  s21_decimal result;

  s21_pretty_print_bits(value1);
  s21_pretty_print_bits(value2);

  s21_sub(value2, value1, &result);

  s21_pretty_print_bits(result);

  // s21_decimal value2 = s21_init(0xFFFFFFFF, 0xFFFFFFFF, 0x000FFFFF, 16, 0);
  // s21_decimal value1 = s21_init_int(10000, 3);
  // s21_decimal value2 = s21_init_int(5, 0);

  // s21_pretty_print_bits(value1);
  // s21_pretty_print_bits(value2);
  // s21_add(value1, value2, &result);

  return 0;
}
