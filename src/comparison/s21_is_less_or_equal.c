#include "../s21_decimal.h"
#include "s21_comparison.h"

int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2) {
  return (s21_is_greater(value_2, value_1) || s21_is_equal(value_1, value_2));
}