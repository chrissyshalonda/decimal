#include "../s21_decimal.h"

s21_decimal s21_binary_shift_left(s21_decimal value) {
  s21_decimal result = s21_clear_decimal();

  int first = s21_get_bit(value, 31);
  unsigned int result_first = value.bits[0];
  result_first = result_first << 1;
  result.bits[0] = result_first;

  int second = s21_get_bit(value, 63);
  unsigned int result_second = value.bits[1];
  result_second = result_second << 1;
  result.bits[1] = result_second;

  int third = s21_get_bit(value, 95);
  unsigned int result_third = value.bits[2];
  result_third = result_third << 1;
  result.bits[2] = result_third;

  unsigned int result_four = value.bits[3];
  result_four = result_four << 1;
  result.bits[3] = result_four;

  if (first) s21_set_bit(&result, 32);
  if (second) s21_set_bit(&result, 64);
  if (third) s21_set_bit(&result, 96);

  return result;
}

s21_decimal s21_binary_shift_right(s21_decimal value) {
  s21_decimal result = s21_clear_decimal();

  int four = s21_get_bit(value, 96);
  unsigned int result_four = value.bits[3];
  result_four = result_four >> 1;
  result.bits[3] = result_four;

  int third = s21_get_bit(value, 64);
  unsigned int result_third = value.bits[2];
  result_third = result_third >> 1;
  result.bits[2] = result_third;

  int second = s21_get_bit(value, 32);
  unsigned int result_second = value.bits[1];
  result_second = result_second >> 1;
  result.bits[1] = result_second;

  unsigned int result_first = value.bits[0];
  result_first = result_first >> 1;
  result.bits[0] = result_first;

  if (four) s21_set_bit(&result, 95);
  if (third) s21_set_bit(&result, 63);
  if (second) s21_set_bit(&result, 31);

  return result;
}

s21_big_decimal s21_big_binary_shift_left(s21_big_decimal decimal) {
  s21_big_decimal result = decimal;
  int last = s21_get_bit(result.decimal[0], 127);

  result.decimal[0] = s21_binary_shift_left(result.decimal[0]);
  result.decimal[1] = s21_binary_shift_left(result.decimal[1]);

  if (last) {
    s21_set_bit(&result.decimal[1], 0);
  }

  return result;
}

s21_big_decimal s21_big_binary_shift_right(s21_big_decimal decimal) {
  s21_big_decimal result = decimal;
  int last = s21_get_bit(result.decimal[1], 0);

  result.decimal[0] = s21_binary_shift_right(result.decimal[0]);
  result.decimal[1] = s21_binary_shift_right(result.decimal[1]);

  if (last) {
    s21_set_bit(&result.decimal[0], 127);
  }

  return result;
}