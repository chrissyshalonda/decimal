#include "../s21_decimal.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  s21_copy_decimal(value, result);
  s21_decimal *one = s21_create_decimal();
  s21_set_bit(one, 0);
  for (int i = 0; i < 96; i++) s21_inverse_bit(result, i);
  s21_base_add(*result, *one, result);
  s21_set_sign(result, !s21_get_sign(value));
  s21_free_decimal(one);
  return 0;
}

//-----------------------------------BIG_DECIMALS-------------------------------------------

int s21_big_negate(s21_big_decimal value, s21_big_decimal *result) {
  s21_big_copy_decimal(value, result);
  s21_big_decimal *one = s21_big_create_decimal();
  s21_set_bit(one, 0);
  for (int i = 0; i < 224; i++) s21_big_inverse_bit(result, i);
  s21_big_base_add(result, one, result);
  s21_big_free_decimal(one);
  return 0;
}