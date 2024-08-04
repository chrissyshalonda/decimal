#include "../s21_decimal.h"

int s21_is_greater(s21_decimal value_1, s21_decimal value_2) {
  s21_big_decimal value_big_1, value_big_2;
  s21_from_decimal_to_big(value_1, &value_big_1);
  s21_from_decimal_to_big(value_2, &value_big_2);
  s21_big_normalize(&value_big_1, &value_big_2);

  int is_greater =
      s21_big_get_sign(value_big_1) - s21_big_get_sign(value_big_2);
  bool result = true;
  if (is_greater == 0) {
    for (int i = 223; i >= 0; i--) {
      // printf("i: %d ", i);
      // printf("value_big_1: %d ", s21_big_get_bit(value_big_1, i));
      // printf("value_big_2: %d ", s21_big_get_bit(value_big_2, i));
      // printf(s21_big_get_bit(value_big_2, i) > s21_big_get_bit(value_big_1,
      // i)
      //            ? "true \n"
      //            : "false \n");

      if (s21_big_get_bit(value_big_2, i) > s21_big_get_bit(value_big_1, i)) {
        result = false;
        break;
      }
    }
    // if (s21_big_get_sign(value_big_1)) result != result;

  } else if (is_greater == 1) {
    result = false;
  } else {
    result = true;
  }
  return result && s21_is_not_equal(value_1, value_2);
}