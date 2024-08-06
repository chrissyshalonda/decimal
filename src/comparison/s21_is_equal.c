#include "../s21_decimal.h"

int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  s21_big_decimal value_big_1, value_big_2;
  s21_from_decimal_to_big(value_1, &value_big_1);
  s21_from_decimal_to_big(value_2, &value_big_2);
  s21_big_normalize(&value_big_1, &value_big_2);

  bool is_equal = true;
  for (int i = 0; i < 8; i++) {
    if (value_big_1.bits[i] != value_big_2.bits[i]) {
      is_equal = false;
      break;
    }
  }
  return is_equal;
}
//-----------------------------------BIG_DECIMALS-------------------------------------------

int s21_big_is_equal(s21_big_decimal value_1, s21_big_decimal value_2) {
  s21_big_normalize(&value_1, &value_2);
  bool is_equal = true;
  for (int i = 0; i < 224; i++) {
    if (value_1.bits[i] != value_2.bits[i]) {
      is_equal = false;
      break;
    }
  }
  return is_equal;
}