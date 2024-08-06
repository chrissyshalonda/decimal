#include "../s21_decimal.h"

int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
  s21_big_decimal value_big_1, value_big_2;
  s21_from_decimal_to_big(value_1, &value_big_1);
  s21_from_decimal_to_big(value_2, &value_big_2);
  return s21_big_is_greater(value_big_1, value_big_2);
}

//-----------------------------------BIG_DECIMALS-------------------------------------------

int s21_big_is_greater(s21_big_decimal value_big_1,
                       s21_big_decimal value_big_2) {
  s21_big_normalize(&value_big_1, &value_big_2);

  int sign_1 = s21_big_get_sign(value_big_1);
  int sign_2 = s21_big_get_sign(value_big_2);

  int diff_sign = sign_1 - sign_2;

  bool result = true;
  if (diff_sign == 0) {
    if (sign_1 == 1) {
      s21_big_negate(value_big_1, &value_big_1);
      s21_big_negate(value_big_2, &value_big_2);
    }

    for (int i = 6; i >= 0; i--) {
      if (value_big_2.bits[i] > value_big_1.bits[i]) {
        result = false;
        break;
      }
    }

    if (sign_1 == 1) {
      result = !result;
    }
  } else if (diff_sign == 1) {
    result = false;
  } else {
    result = true;
  }
  return result && s21_big_is_not_equal(value_big_1, value_big_2);
}