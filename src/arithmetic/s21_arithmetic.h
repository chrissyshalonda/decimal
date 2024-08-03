#include "../s21_decimal.h"

// --------------------------
// s21_annother
// --------------------------

s21_decimal s21_get_ten_value(int scale_value);
void s21_scale_rounding(s21_decimal *value_1, s21_decimal *value_2);
int get_abs(int value_1, int value_2);

// --------------------------
// s21_addition
// --------------------------

int s21_equal_zero(s21_decimal value);
s21_decimal s21_binary_and(s21_decimal result, s21_decimal tmp);
s21_decimal s21_binary_xor(s21_decimal result, s21_decimal tmp);
s21_decimal s21_binary_shift_left(s21_decimal value);
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

// --------------------------
// s21_multiply
// --------------------------
int s21_max_not_null_bit(s21_decimal value);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul_processing(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);