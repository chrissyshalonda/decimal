#include "arithmetic/s21_arithmetic.h"
#include "s21_decimal.h"

int main() {
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};

  s21_decimal result = s21_clear_decimal();
  s21_decimal remainder = s21_clear_decimal();
  
  int m = s21_add(decimal1, decimal2, &result);
  //s21_pretty_print_bits(result, 3);
}