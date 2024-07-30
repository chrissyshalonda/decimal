#include <stdio.h>
#include <string.h>

#include "s21_decimal.h"

#define MAX_DIGITS 32

int main() {
  // Двоичное число в виде строки
  s21_decimal value = s21_init("4294967296");
  s21_pretty_print_bits(value);
  return 0;
}
