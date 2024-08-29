// #include <stdio.h>
// #include <string.h>

#include "s21_decimal.h"

// #define MAX_DIGITS 32

int main() {
  s21_decimal value1 = s21_init_int(-1778, 3);
  s21_decimal value2 = s21_init_int(10000, 0);
  s21_decimal result = s21_init_int(0, 0);

  s21_pretty_print_bits(value1);
  s21_pretty_print_bits(value2);

  // s21_sub(value1, value2, &result);
  // s21_base_div(value1, value2, &result);

  s21_pretty_print_bits(result);
  return 0;
}

// s21_big_decimal value = {{0xD4A51000, 0x000000E8, 0x00000000, 0x00000000,
//                           0x00000000, 0x00000000, 0x00000000, 0x00000000}};
// s21_big_decimal ten = s21_big_init_int(1000000, 0);
// s21_big_decimal result = s21_big_init_int(0, 0);

// s21_big_pretty_print_bits(ten);
// s21_big_pretty_print_bits(value);

// s21_big_base_mul(ten, value, &result);
// s21_big_pretty_print_bits(result);
// s21_big_copy_decimal(value, &result);
// for (int i = 0; i < 30; i++) {
//   s21_big_base_mul(value, ten, &result);
//   s21_big_copy_decimal(result, &value);
//   s21_big_pretty_print_bits(value);
//   s21_big_clear_decimal(&result);
// }

// 000000000000
// int main() {
//   s21_big_decimal value1 = s21_big_init_int(1000000000, 0);
//   s21_big_pretty_print_bits(value1);
//   s21_big_decimal x = {{0xDEA00000, 0x35C9ADC5, 0x00000036, 0x00000000,
//                         0x00000000, 0x00000000, 0x00000000, 0x00000000}};
//   s21_big_decimal result = s21_big_init_int(0, 0);
//   s21_big_pretty_print_bits(x);

//   s21_big_base_mul(value1, x, &result);
//   printf(
//       "[%d] = {{0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X, "
//       "0x%08X}}\n",
//       1, result.bits[0], result.bits[1], result.bits[2], result.bits[3],
//       result.bits[4], result.bits[5], result.bits[6], result.bits[7]);

//   s21_big_pretty_print_bits(result);
//   return 0;
// }

// s21_decimal value1 = s21_init_int(120000, 4);
// s21_decimal value2 = s21_init_int(12000, 3);

// value1 = s21_init_int(24, 0);
// value2 = s21_init_int(18, 0);
// printf("greater: %d\n", s21_is_greater(value1, value2));

// s21_decimal value1 = s21_init_int(1778, 0);
//   s21_decimal value2 = s21_init_int(10000, 0);
//   s21_decimal result;

//   s21_pretty_print_bits(value1);
//   s21_pretty_print_bits(value2);

//   // s21_sub(value1, value2, &result);
//   s21_base_div(value1, value2, &result);

//   s21_pretty_print_bits(result);

// int main() {
//   s21_big_decimal value1 = s21_big_init_int(1, 0);
//   s21_big_pretty_print_bits(value1);
//   s21_big_decimal ten = s21_big_init_int(10, 0);
//   s21_big_pretty_print_bits(ten);
//   for (int i = 0; i < 30; i++) {
//     s21_big_base_mul(value1, ten, &value1);
//     // s21_big_base_mul(value1, ten, &value1);
//     printf(
//         "[%d] = {{0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X, 0x%08X, "
//         "0x%08X}}\n",
//         i + 1, value1.bits[0], value1.bits[1], value1.bits[2],
//         value1.bits[3], value1.bits[4], value1.bits[5], value1.bits[6],
//         value1.bits[7]);
//     s21_big_pretty_print_bits(value1);
//   }

//   return 0;
// }

// int main() {
//   s21_decimal value1 = s21_init_int(1, 0);
//   s21_pretty_print_bits(value1);
//   s21_decimal ten = s21_init_int(10, 0);
//   s21_pretty_print_bits(ten);
//   for (int i = 0; i < 30; i++) {
//     s21_base_mul(value1, ten, &value1);
//     // s21_base_mul(value1, ten, &value1);
//     printf("[%d] = {{0x%08X, 0x%08X, 0x%08X, 0x%08X}}\n", i + 1,
//     value1.bits[0],
//            value1.bits[1], value1.bits[2], value1.bits[3]);
//     s21_pretty_print_bits(value1);
//   }

//   return 0;
// }