#include "../s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  s21_big_decimal value_big_1, value_big_2, result_big;
  // printf("value_1:\n");
  // s21_pretty_print_bits(value_1);
  // printf("value_2:\n");
  // s21_pretty_print_bits(value_2);

  s21_from_decimal_to_big(value_1, &value_big_1);
  s21_from_decimal_to_big(value_2, &value_big_2);
  // printf("value_1:\n");
  // s21_big_pretty_print_bits(value_big_1);
  // printf("value_2:\n");
  // s21_big_pretty_print_bits(value_big_2);

  s21_big_normalize(&value_big_1, &value_big_2);

  printf("normalized value_1:\n");
  s21_big_pretty_print_bits(value_big_1);
  printf("normalized value_2:\n");
  s21_big_pretty_print_bits(value_big_2);
  s21_big_base_add(value_big_1, value_big_2, &result_big);

  s21_big_pretty_print_bits(result_big);
  s21_big_set_scale(&result_big, s21_big_get_scale(value_big_1));
  // printf("result_big:\n");
  // s21_big_pretty_print_bits(result_big);
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

int s21_big_base_add(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal* result) {
  bool next = 0;
  bool currect = 0;

  s21_big_set_scale(result, s21_big_get_scale(value_1));

  for (int i = 0; i < 224; i++) {
    bool a = s21_big_get_bit(value_1, i);
    bool b = s21_big_get_bit(value_2, i);
    currect = (a ^ b) ^ next;
    next = (a & b) | (a & next) | (b & next) | (a & b & next);
    currect ? s21_big_set_bit(result, i) : s21_big_reset_bit(result, i);
  }
}