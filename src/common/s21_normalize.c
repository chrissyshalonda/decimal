#include "../s21_decimal.h"

int s21_normalize(s21_decimal *value_1, s21_decimal *value_2) {
  s21_decimal *temp = s21_create_decimal();
  s21_from_int_to_decimal(10, temp);
  int diff = s21_get_scale(*value_1) - s21_get_scale(*value_2);

  if (diff > 0) {
    for (int i = 0; i < diff; i++) s21_base_mul(*value_2, *temp, value_2);
    s21_set_scale(value_2, s21_get_scale(*value_1));
  } else {
    for (int i = 0; i < -diff; i++) s21_base_mul(*value_1, *temp, value_1);
    s21_set_scale(value_1, s21_get_scale(*value_2));
  }
  s21_free_decimal(temp);
  return 0;
}

//-----------------------------------BIG_DECIMALS-------------------------------------------

int s21_big_normalize(s21_big_decimal *value_1, s21_big_decimal *value_2) {
  int sign_1 = s21_big_get_sign(*value_1);
  int sign_2 = s21_big_get_sign(*value_2);
  s21_big_decimal *temp = s21_big_create_decimal();
  s21_from_int_to_big_decimal(10, temp);
  // bool is_negative_1 = s21_big_get_sign(*value_1);
  // bool is_negative_2 = s21_big_get_sign(*value_2);
  // if (is_negative_1) s21_big_negate(*value_1, value_1);
  // if (is_negative_2) s21_big_negate(*value_2, value_2);

  // printf("not normalized value_1:\n");
  // s21_big_pretty_print_bits(*value_1);

  // printf("not normalized value_1 NEGA:\n");
  // s21_big_negate(*value_1, value_1);
  // s21_big_pretty_print_bits(*value_1);

  // printf("not normalized value_1 NEGA NEGA:\n");
  // s21_big_negate(*value_1, value_1);
  // s21_big_pretty_print_bits(*value_1);

  // printf("not normalized value_2:\n");
  // s21_big_pretty_print_bits(*value_2);
  int diff = s21_big_get_scale(*value_1) - s21_big_get_scale(*value_2);
  // printf("diff: %d\n", diff);

  if (diff > 0) {
    for (int i = 0; i < diff; i++) s21_big_base_mul(*value_2, *temp, value_2);
    s21_big_set_scale(value_2, s21_big_get_scale(*value_1));
  } else {
    for (int i = 0; i < -diff; i++) s21_big_base_mul(*value_1, *temp, value_1);
    s21_big_set_scale(value_1, s21_big_get_scale(*value_2));
  }

  // printf("normalized value_1:\n");
  // s21_big_pretty_print_bits(*value_1);
  // printf("normalized value_2:\n");
  // s21_big_pretty_print_bits(*value_2);
  s21_big_set_sign(value_1, sign_1);
  s21_big_set_sign(value_2, sign_2);
  s21_big_free_decimal(temp);
  return 0;
}