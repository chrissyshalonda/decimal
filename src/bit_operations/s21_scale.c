#include "../s21_decimal.h"

int s21_get_scale(s21_decimal value) {
  s21_decimal result = value;
  s21_set_sign(&result, 0);

  return result.bits[3] >> 16;
}

int s21_set_scale(s21_decimal *value, int scale) {
  bool result = scale >= 0 && scale <= 28;
  if (result) {
    int sign = s21_get_bit(*value, 127);
    value->bits[3] = scale;
    value->bits[3] = value->bits[3] << 16;
    s21_set_sign(value, sign);
  }
  return !result;
}

//-----------------------------------BIG_DECIMALS-------------------------------------------

int s21_big_get_scale(s21_big_decimal value) {
  s21_big_decimal result = value;
  s21_big_set_sign(&result, 0);

  return result.bits[7] >> 16;
}

int s21_big_set_scale(s21_big_decimal *value, int scale) {
  bool result = scale >= 0 && scale <= 68;
  if (result) {
    int sign = s21_big_get_sign(*value);
    value->bits[7] = scale;
    value->bits[7] = value->bits[7] << 16;
    s21_big_set_sign(value, sign);
  }
  return !result;
}
