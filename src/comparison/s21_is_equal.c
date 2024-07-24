#include "../s21_decimal.h"

int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  bool is_equal = true;
  for (int i = 0; i < 4; i++) {
    if (value_1.bits[i] != value_2.bits[i]) {
      is_equal = false;
      break;
    }
  }
  return is_equal;
}
