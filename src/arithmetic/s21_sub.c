#include "../s21_decimal.h"

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  // TODO: s21_sub
  return 0;
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
  // TODO: s21_big_sub
  return 0;
}

int s21_big_base_sub(const s21_big_decimal* value_1,
                     const s21_big_decimal* value_2, s21_big_decimal* result) {
  s21_big_decimal* temp = s21_big_create_decimal();
  s21_big_negate(*value_2, temp);
  s21_big_base_add(value_1, temp, result);
  s21_big_free_decimal(temp);
  return 0;
}
