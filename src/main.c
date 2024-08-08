#include "s21_decimal.h"
#include "arithmetic/s21_arithmetic.h"
int main() {
  s21_decimal value = {0, 0, 0, 0};
  s21_decimal first = {2, 0, 0, 0};  
  s21_decimal second ={1, 0, 0, 0};


  value = s21_binary_subtraction(first, second);

  s21_pretty_print_bits(value);
  return 0;
}



