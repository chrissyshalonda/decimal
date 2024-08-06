#include "../s21_decimal.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  // TODO: s21_div
  return 0;
}

int s21_base_div(s21_decimal value_1, s21_decimal value_2,
                 s21_decimal *result) {
  int result_sign = s21_get_sign(value_1) ^ s21_get_sign(value_2);
  s21_big_decimal value_big_1, value_big_2, result_big, temp, inter_temp, mod;
  s21_big_clear_decimal(&result_big);
  s21_big_clear_decimal(&temp);
  s21_big_clear_decimal(&inter_temp);
  s21_big_clear_decimal(&mod);
  s21_clear_decimal(result);
  s21_from_decimal_to_big(value_1, &value_big_1);
  s21_from_decimal_to_big(value_2, &value_big_2);
  s21_big_normalize(&value_big_1, &value_big_2);

  s21_big_abs(value_big_1, &value_big_1);
  s21_big_abs(value_big_2, &value_big_2);

  s21_big_pretty_print_bits(value_big_1);
  s21_big_pretty_print_bits(value_big_2);

  int len1 = s21_big_length(value_big_1);
  int len2 = s21_big_length(value_big_2);
  int diff = len1 - len2;

  printf("len1: %d, len2: %d, diff: %d\n", len1, len2, diff);
  s21_big_copy_decimal(value_big_1, &inter_temp);

  for (int i = diff; i >= 0; i--) {
    s21_big_clear_decimal(&temp);
    s21_big_left_shift_decimal(value_big_2, &temp, i);
    printf("сдвинули\n");
    s21_big_pretty_print_bits(temp);
    printf("сдвинули\n");
    if (s21_big_is_greater(temp, inter_temp)) {
      printf(RED "temp is greater than value_big_1\n" RESET);
      s21_big_left_shift_decimal(result_big, &result_big, 1);
      s21_big_reset_bit(&result_big, 0);

      printf(GREEN "result_big после вычитания:\n" RESET);
      s21_big_pretty_print_bits(result_big);
    } else {
      printf(RED "меньше или равно\n" RESET);
      s21_big_sub(inter_temp, temp, &inter_temp);
      printf("inter_temp после вычитания:\n");
      s21_big_pretty_print_bits(inter_temp);
      s21_big_left_shift_decimal(result_big, &result_big, 1);
      s21_big_set_bit(&result_big, 0);

      printf(GREEN "result_big после вычитания:\n" RESET);
      s21_big_pretty_print_bits(result_big);
    }
    // printf("temp:\n");
    // s21_big_pretty_print_bits(temp);
  }

  printf("result_big:\n");
  s21_big_pretty_print_bits(result_big);

  return s21_from_big_to_decimal(&result_big, result);
}