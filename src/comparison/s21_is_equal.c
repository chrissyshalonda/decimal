#include "../s21_decimal.h"
#include "s21_comparison.h"

int s21_is_equal(s21_decimal value_1, s21_decimal value_2) {
  int code = 1;

  s21_decimal tmp_1 = s21_remove_zeros(value_1);
  s21_decimal tmp_2 = s21_remove_zeros(value_2);

  if (tmp_1.bits[0] == 0 && tmp_1.bits[1] == 0 && tmp_1.bits[2] == 0 &&
      tmp_2.bits[0] == 0 && tmp_2.bits[1] == 0 && tmp_2.bits[2] == 0) {
    code = 1;
  } else {
    code = (tmp_1.bits[0] == tmp_2.bits[0] && tmp_1.bits[1] == tmp_2.bits[1] &&
            tmp_1.bits[2] == tmp_2.bits[2] && tmp_1.bits[3] == tmp_2.bits[3]);
  }

  return code;
}

int s21_binary_compare(s21_decimal value_1, s21_decimal value_2) {
  int result = 0;

  for (int i = 127; i >= 0; i--) {
    int b1 = s21_get_bit(value_1, i);
    int b2 = s21_get_bit(value_2, i);

    if (b1 == 0 && b2 != 0) {
      result = -1;
    }

    if (b1 != 0 && b2 == 0) {
      result = 1;
    }

    if (result != 0) {
      break;
    }
  }

  return result;
}

int s21_big_binary_compare(s21_big_decimal value_1, s21_big_decimal value_2) {
  int compare = s21_binary_compare(value_1.decimal[1], value_2.decimal[1]);

  if (compare == 0) {
    compare = s21_binary_compare(value_1.decimal[0], value_2.decimal[0]);
  }

  return compare;
}