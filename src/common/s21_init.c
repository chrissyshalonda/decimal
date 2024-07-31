#include "../s21_decimal.h"

s21_decimal s21_init_int(int value, int scale) {
  s21_decimal result;
  result.bits[0] = value;
  result.bits[1] = value < 0 ? 0xFFFFFFFF : 0;
  result.bits[2] = value < 0 ? 0xFFFFFFFF : 0;

  s21_set_scale(&result, scale);
  s21_set_sign(&result, value < 0);
  return result;
}

s21_decimal s21_init(int value1, int value2, int value3, int scale, int sign) {
  s21_decimal result;
  result.bits[0] = value1;
  result.bits[1] = value2;
  result.bits[2] = value3;

  s21_set_scale(&result, scale);
  s21_set_sign(&result, sign);
  return result;
}