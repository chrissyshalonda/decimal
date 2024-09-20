#include "../s21_decimal.h"

// --------------------------
// s21_annother
// --------------------------

s21_decimal s21_get_ten_value(int scale_value);
int get_abs(int value_1, int value_2);
int s21_equal_zero(s21_decimal value);
int s21_shift_for_correct_decimal(s21_big_decimal value);
s21_decimal s21_binary_not(s21_decimal value);
s21_decimal s21_get_one();

// --------------------------
// s21_addition
// --------------------------

s21_decimal s21_binary_addition(s21_decimal value_1, s21_decimal value_2);
s21_big_decimal s21_big_binary_addition(s21_big_decimal value_1, s21_big_decimal value_2);
s21_decimal s21_binary_and(s21_decimal result, s21_decimal tmp);
s21_decimal s21_binary_xor(s21_decimal result, s21_decimal tmp);
s21_decimal s21_binary_shift_left(s21_decimal value);
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_add_processing(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

// --------------------------
// s21_multiply
// --------------------------
int s21_max_not_null_bit(s21_decimal value);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
s21_big_decimal s21_mul_processing(s21_decimal value_1, s21_decimal value_2);
int s21_mul_helper(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);


// --------------------------
// s21_subtraction
// --------------------------

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub_processing(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
s21_decimal s21_binary_subtraction(s21_decimal value_1, s21_decimal value_2);
s21_big_decimal s21_big_binary_subtraction(s21_big_decimal value_1, s21_big_decimal value_2);

// --------------------------
// s21_division
// --------------------------

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div_processing(s21_big_decimal divider, s21_big_decimal big_result,
                       s21_big_decimal remainder, s21_decimal *result)
s21_decimal s21_binary_division(s21_decimal value_1, s21_decimal value_2, s21_decimal *remainder);
s21_big_decimal s21_big_binary_division(s21_big_decimal value_1, s21_big_decimal value_2,
                                s21_big_decimal *remainder);
int s21_help_with_remainder(s21_decimal *result, s21_decimal value, s21_decimal *remainder);
int s21_not_correct(s21_decimal value);