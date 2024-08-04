// #include <stdio.h>
// #include <string.h>

#include "s21_decimal.h"

// #define MAX_DIGITS 32

int main() {
  // Двоичное число в виде строки
  s21_decimal value1 = s21_init_int(-120001, 4);
  s21_decimal value2 = s21_init_int(-12, 0);
  s21_decimal result;
  s21_pretty_print_bits(value1);
  s21_pretty_print_bits(value2);

  bool equal = s21_is_equal(value1, value2);
  printf("equal: %d\n", equal);
  bool not_equal = s21_is_not_equal(value1, value2);
  printf("not_equal: %d\n", not_equal);
  bool greater = s21_is_greater(value1, value2);
  printf("greater: %d\n", greater);
  bool greater_or_equal = s21_is_greater_or_equal(value1, value2);
  printf("greater_or_equal: %d\n", greater_or_equal);
  bool less = s21_is_less(value1, value2);
  printf("less: %d\n", less);
  bool less_or_equal = s21_is_less_or_equal(value1, value2);
  printf("less_or_equal: %d\n", less_or_equal);

  // s21_add(value1, value2, &result);

  // s21_pretty_print_bits(result);

  // s21_decimal value2 = s21_init(0xFFFFFFFF, 0xFFFFFFFF, 0x000FFFFF, 16, 0);
  // s21_decimal value1 = s21_init_int(10000, 3);
  // s21_decimal value2 = s21_init_int(5, 0);

  // s21_pretty_print_bits(value1);
  // s21_pretty_print_bits(value2);
  // s21_add(value1, value2, &result);

  return 0;
}
