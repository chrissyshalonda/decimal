#include "../s21_decimal.h"

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  s21_negate(value_2, &value_2);
  return s21_add(value_1, value_2, result);
}

int s21_base_sub(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  s21_decimal* temp = s21_create_decimal();
  s21_negate(value_2, temp);
  s21_base_add(value_1, *temp, result);
  s21_free_decimal(temp);
  return 0;
}

//-----------------------------------BIG_DECIMALS-------------------------------------------

int s21_big_sub(s21_big_decimal value_1, s21_big_decimal value_2,
                s21_big_decimal* result) {
  s21_big_negate(value_2, &value_2);

  return s21_big_add(value_1, value_2, result);
  ;
}

int s21_big_base_sub(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal* result) {
  s21_big_decimal* temp = s21_big_create_decimal();
  s21_big_negate(value_2, temp);
  s21_big_base_add(value_1, *temp, result);
  s21_big_free_decimal(temp);
  return 0;
}
