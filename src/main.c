// #include <stdio.h>
// #include <string.h>

#include "s21_decimal.h"

// #define MAX_DIGITS 32

int main() {
  // // Двоичное число в виде строки
  // s21_big_decimal value_big_1 = s21_big_init_int(12, 0);
  // s21_big_decimal value_big_2 = s21_big_init_int(12000, 3);

  // s21_big_pretty_print_bits(value_big_1);
  // s21_big_pretty_print_bits(value_big_2);

  // bool big_equal = s21_big_is_equal(value_big_1, value_big_2);
  // printf("equal: %d\n", big_equal);

  // bool big_not_equal = s21_big_is_not_equal(value_big_1, value_big_2);
  // printf("not_equal: %d\n", big_not_equal);
  // bool big_less = s21_big_is_less(value_big_1, value_big_2);
  // printf("less: %d\n", big_less);

  // bool big_less_or_equal = s21_big_is_less_or_equal(value_big_1,
  // value_big_2); printf("less_or_equal: %d\n", big_less_or_equal);

  // bool big_greater = s21_big_is_greater(value_big_1, value_big_2);
  // printf("greater: %d\n", big_greater);

  // bool big_greater_or_equal =
  //     s21_big_is_greater_or_equal(value_big_1, value_big_2);
  // printf("greater_or_equal: %d\n", big_greater_or_equal);

  s21_decimal value2 = s21_init_int(-120000, 4);
  s21_decimal value1 = s21_init_int(-12001, 3);

  value1 = s21_init_int(120000, 4);
  value2 = s21_init_int(12001, 3);

  s21_pretty_print_bits(value1);
  s21_pretty_print_bits(value2);

  // bool equal = s21_is_equal(value1, value2);
  // printf("equal: %d\n", equal);

  // bool not_equal = s21_is_not_equal(value1, value2);
  // printf("not_equal: %d\n", not_equal);
  bool less = s21_is_less(value1, value2);
  printf("less: %d\n", less);

  // bool less_or_equal = s21_is_less_or_equal(value1, value2);
  // printf("less_or_equal: %d\n", less_or_equal);

  bool greater = s21_is_greater(value1, value2);
  printf("greater: %d\n", greater);

  // bool greater_or_equal = s21_is_greater_or_equal(value1, value2);
  // printf("greater_or_equal: %d\n", greater_or_equal);
  return 0;
}
