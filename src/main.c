// #include <stdio.h>
// #include <string.h>

#include "s21_decimal.h"

// #define MAX_DIGITS 32

int main() {
  s21_decimal value1 = s21_init_int(1778, 0);
  s21_decimal value2 = s21_init_int(10000, 0);
  s21_decimal result;

  s21_pretty_print_bits(value1);
  s21_pretty_print_bits(value2);

  // s21_sub(value1, value2, &result);
  s21_base_div(value1, value2, &result);

  s21_pretty_print_bits(result);

  return 0;
}

// s21_decimal value1 = s21_init_int(120000, 4);
// s21_decimal value2 = s21_init_int(12000, 3);

// value1 = s21_init_int(24, 0);
// value2 = s21_init_int(18, 0);
// printf("greater: %d\n", s21_is_greater(value1, value2));