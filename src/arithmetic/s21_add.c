#include "../s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  s21_big_decimal value_big_1, value_big_2, result_big;
  s21_big_clear_decimal(&result_big);
  s21_clear_decimal(result);
  int sign1 = s21_get_sign(value_1);
  int sign2 = s21_get_sign(value_2);
  int sign_result = 0;
  if (sign1 == 1 && sign2 == 1) {
    s21_negate(value_1, &value_1);
    s21_negate(value_2, &value_2);
    sign_result = 1;
  }

  s21_from_decimal_to_big(value_1, &value_big_1);
  s21_from_decimal_to_big(value_2, &value_big_2);
  s21_big_normalize(&value_big_1, &value_big_2);
  s21_big_base_add(value_big_1, value_big_2, &result_big);
  s21_big_set_scale(&result_big, s21_big_get_scale(value_big_1));
  if (sign_result == 1) s21_big_negate(result_big, &result_big);
  return s21_from_big_to_decimal(&result_big, result);
}

int s21_base_add(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal* result) {
  bool next = 0;
  bool currect = 0;
  s21_set_scale(result, s21_get_scale(value_1));
  for (int i = 0; i < 96; i++) {
    bool a = s21_get_bit(value_1, i);
    bool b = s21_get_bit(value_2, i);
    currect = (a ^ b) ^ next;
    next = (a & b) | (a & next) | (b & next) | (a & b & next);
    currect ? s21_set_bit(result, i) : s21_reset_bit(result, i);
  }
}

//-----------------------------------BIG_DECIMALS-------------------------------------------

int s21_big_add(s21_big_decimal value_1, s21_big_decimal value_2,
                s21_big_decimal* result) {
  s21_big_clear_decimal(result);
  int sign1 = s21_big_get_sign(value_1);
  int sign2 = s21_big_get_sign(value_2);
  int sign_result = 0;
  if (sign1 == 1 && sign2 == 1) {
    s21_big_negate(value_1, &value_1);
    s21_big_negate(value_2, &value_2);
    sign_result = 1;
  }

  s21_big_normalize(&value_1, &value_2);
  s21_big_base_add(value_1, value_2, result);
  s21_big_set_scale(result, s21_big_get_scale(value_1));
  if (sign_result == 1) s21_big_negate(*result, result);

  if (result->bits[0] == 0 && result->bits[1] == 0 && result->bits[2] == 0 &&
      result->bits[3] == 0 && result->bits[4] == 0 && result->bits[5] == 0 &&
      result->bits[6] == 0)
    s21_big_set_sign(result, 0);
  return 0;
}

int s21_big_base_add(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal* result) {
  bool next = 0;
  bool currect = 0;
  s21_big_decimal abs_value_1, abs_value_2;
  s21_big_abs(value_1, &abs_value_1);
  s21_big_abs(value_2, &abs_value_2);

  s21_big_set_scale(result, s21_big_get_scale(value_1));

  for (int i = 0; i < 224; i++) {
    bool a = s21_big_get_bit(value_1, i);
    bool b = s21_big_get_bit(value_2, i);
    currect = (a ^ b) ^ next;
    next = (a & b) | (a & next) | (b & next) | (a & b & next);
    currect ? s21_big_set_bit(result, i) : s21_big_reset_bit(result, i);
  }

  bool greater = s21_big_is_greater(abs_value_1, abs_value_2);
  if (greater)
    s21_big_set_sign(result, s21_big_get_sign(value_1));
  else
    s21_big_set_sign(result, s21_big_get_sign(value_2));
}