#include "../arithmetic/s21_arithmetic.h"
#include "../comparison/s21_comparison.h"
#include "../s21_decimal.h"

s21_decimal s21_round_banking(s21_decimal value, s21_decimal part) {
  s21_decimal onehalf = {{0x5, 0x0, 0x0, 0x10000}};
  s21_decimal one = {1, 0, 0, 0};
  s21_decimal result = s21_clear_decimal();

  if (s21_is_equal(part, onehalf)) {
    if (s21_get_bit(value, 0) == 0) {
      result = value;
    } else {
      result = s21_binary_addition(value, onehalf);
    }
  } else if (s21_is_greater(part, onehalf)) {
    result = s21_binary_addition(value, one);
  } else {
    result = value;
  }

  return result;
}