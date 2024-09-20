#include "../s21_decimal.h"
#include "s21_arithmetic.h"

s21_decimal s21_get_ten_value(int scale_value) {
  return scale_table[scale_value];
}

void s21_scale_rounding(s21_decimal *value_1, s21_decimal *value_2, int scale_1,
                        int scale_2, s21_big_decimal *big_value_1,
                        s21_big_decimal *big_value_2) {
  s21_decimal tmp_1 = *value_1;
  s21_decimal tmp_2 = *value_2;

  tmp_1.bits[3] = 0;
  tmp_2.bits[3] = 0;

  if (scale_1 > scale_2) {
    *big_value_1 = s21_create_big_decimal(tmp_1);
    *big_value_2 =
        s21_mul_processing(tmp_2, s21_get_ten_value(scale_1 - scale_2));
  } else if (scale_1 < scale_2) {
    *big_value_2 = s21_create_big_decimal(tmp_2);
    *big_value_1 =
        s21_mul_processing(tmp_1, s21_get_ten_value(scale_2 - scale_1));
  } else {
    *big_value_1 = s21_create_big_decimal(tmp_1);
    *big_value_2 = s21_create_big_decimal(tmp_2);
  }
}

int get_abs(int value_1, int value_2) {
  int result;
  if (value_1 >= value_2) {
    result = value_1 - value_2;
  } else {
    result = value_2 - value_1;
  }
  return result;
}

int s21_not_correct(s21_decimal value) {
  int code = 1;

  int first = 0;
  for (int i = 96; i < 112; i++) first += s21_get_bit(value, i);

  int second = 0;
  for (int i = 120; i < 127; i++) second += s21_get_bit(value, i);

  if (first != 0 || second != 0) {
    code = 0;
  } else {
    int scale = s21_get_scale(value);
    if (scale < 0 || scale > 28) {
      code = 0;
    }
  }

  return code;
}