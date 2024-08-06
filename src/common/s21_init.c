#include "../s21_decimal.h"

s21_decimal s21_init_int(int value, int scale) {
  s21_decimal result;
  result.bits[0] = value;
  result.bits[1] = value < 0 ? 0xFFFFFFFF : 0;
  result.bits[2] = value < 0 ? 0xFFFFFFFF : 0;
  result.bits[3] = 0;
  s21_set_scale(&result, scale);
  s21_set_sign(&result, value < 0);
  return result;
}

s21_decimal s21_init(int value1, int value2, int value3, int scale, int sign) {
  s21_decimal result;
  result.bits[0] = value1;
  result.bits[1] = value2;
  result.bits[2] = value3;
  result.bits[3] = 0;
  s21_set_scale(&result, scale);
  s21_set_sign(&result, sign);
  return result;
}

//------------------------------------------------------------------------------

s21_big_decimal s21_big_init_int(int value, int scale) {
  s21_big_decimal result;
  result.bits[0] = value;
  result.bits[1] = value < 0 ? 0xFFFFFFFF : 0;
  result.bits[2] = value < 0 ? 0xFFFFFFFF : 0;
  result.bits[3] = value < 0 ? 0xFFFFFFFF : 0;
  result.bits[4] = value < 0 ? 0xFFFFFFFF : 0;
  result.bits[5] = value < 0 ? 0xFFFFFFFF : 0;
  result.bits[6] = value < 0 ? 0xFFFFFFFF : 0;
  result.bits[7] = 0;

  s21_big_set_scale(&result, scale);
  s21_big_set_sign(&result, value < 0);
  return result;
}