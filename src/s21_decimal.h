#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#define POSITIVE_SIGN 0
#define NEGATIVE_SIGN 1

//------------------------------------------------------------------------------
// Структуры
//------------------------------------------------------------------------------

typedef struct s21_decimal {
  int bits[4];
} s21_decimal;

typedef struct s21_big_decimal {
  s21_decimal decimal[2];
} s21_big_decimal;

typedef enum ERRORS {
  OK = 0,
  TOO_BIG = 1,
  TOO_SMALL = 2,
  ZERO_DIVISION = 3,
  UNEXEPTED_ERROR = 4
} ERRORS;

//------------------------------------------------------------------------------
// Арифметические операторы
//------------------------------------------------------------------------------

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mod(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

//------------------------------------------------------------------------------
//      Функции возвращают код ошибки:
//      0 - OK
//      1 - число слишком велико или равно бесконечности
//      2 - число слишком мало или равно отрицательной бесконечности
//      3 - деление на 0
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Операторы сравнение
//------------------------------------------------------------------------------

int s21_is_less(s21_decimal value_1, s21_decimal value_2);
int s21_is_less_or_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_greater(s21_decimal value_1, s21_decimal value_2);
int s21_is_greater_or_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_equal(s21_decimal value_1, s21_decimal value_2);
int s21_is_not_equal(s21_decimal value_1, s21_decimal value_2);

//------------------------------------------------------------------------------
//      Функции возвращают код ошибки:
//      0 - OK
//      1 - число слишком велико или равно бесконечности
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Преобразователи
//------------------------------------------------------------------------------

int s21_from_int_to_decimal(int src, s21_decimal *dst);
int s21_from_float_to_decimal(float src, s21_decimal *dst);
int s21_from_decimal_to_int(s21_decimal src, int *dst);
int s21_from_decimal_to_float(s21_decimal src, float *dst);

// ----------------------------------------
s21_decimal s21_get_switch(char c);
s21_decimal s21_ftd_helper(char *float_c);
// ----------------------------------------

//------------------------------------------------------------------------------
//      Функции возвращают код ошибки:
//      0 - OK
//      1 - ошибка конвертации
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Другие функции
//------------------------------------------------------------------------------

int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);
int s21_negate(s21_decimal value, s21_decimal *result);

//------------------------------------------------------------------------------
//      Функции возвращают код ошибки:
//      0 - OK
//      1 - ошибка вычисления
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Битовые операции
//------------------------------------------------------------------------------

int s21_set_bit(s21_decimal *value, int bit_index);
int s21_reset_bit(s21_decimal *value, int bit_index);
int s21_inverse_bit(s21_decimal *value, int bit_index);
int s21_get_bit(s21_decimal value, int bit_index);

void s21_print_bits(s21_decimal value);
void s21_pretty_print_bits(s21_decimal value, int index);

int s21_set_scale(s21_decimal *value, int scale);
int s21_get_scale(s21_decimal value);

void s21_set_sign(s21_decimal *value, int sign);
int s21_get_sign(s21_decimal value);

//------------------------------------------------------------------------------
// Общие функции
//------------------------------------------------------------------------------

s21_decimal *s21_create_decimal();
void s21_free_decimal(s21_decimal *value);
s21_decimal s21_clear_decimal();
s21_decimal s21_binary_shift_left(s21_decimal value);
s21_decimal s21_binary_shift_right(s21_decimal value);
s21_big_decimal s21_big_binary_shift_left(s21_big_decimal decimal);
void s21_scale_rounding(s21_decimal *value_1, s21_decimal *value_2, int scale_1,
                        int scale_2, s21_big_decimal *big_value_1,
                        s21_big_decimal *big_value_2);
void s21_from_decimal_to_string(s21_decimal value, char *decimal, int index);
s21_decimal s21_round_banking(s21_decimal value, s21_decimal part);
s21_big_decimal s21_create_big_decimal(s21_decimal value);
int s21_binary_compare(s21_decimal value_1, s21_decimal value_2);
int s21_big_binary_compare(s21_big_decimal value_1, s21_big_decimal value_2);
s21_big_decimal s21_big_binary_shift_right(s21_big_decimal decimal);

static const s21_decimal scale_table[39] = {
    [0] = {{0x1, 0x0, 0x0, 0x0}},
    [1] = {{0xA, 0x0, 0x0, 0x0}},
    [2] = {{0x64, 0x0, 0x0, 0x0}},
    [3] = {{0x3E8, 0x0, 0x0, 0x0}},
    [4] = {{0x2710, 0x0, 0x0, 0x0}},
    [5] = {{0x186A0, 0x0, 0x0, 0x0}},
    [6] = {{0xF4240, 0x0, 0x0, 0x0}},
    [7] = {{0x989680, 0x0, 0x0, 0x0}},
    [8] = {{0x5F5E100, 0x0, 0x0, 0x0}},
    [9] = {{0x3B9ACA00, 0x0, 0x0, 0x0}},
    [10] = {{0x540BE400, 0x2, 0x0, 0x0}},
    [11] = {{0x4876E800, 0x17, 0x0, 0x0}},
    [12] = {{0xD4A51000, 0xE8, 0x0, 0x0}},
    [13] = {{0x4E72A000, 0x918, 0x0, 0x0}},
    [14] = {{0x107A4000, 0x5AF3, 0x0, 0x0}},
    [15] = {{0xA4C68000, 0x38D7E, 0x0, 0x0}},
    [16] = {{0x6FC10000, 0x2386F2, 0x0, 0x0}},
    [17] = {{0x5D8A0000, 0x1634578, 0x0, 0x0}},
    [18] = {{0xA7640000, 0xDE0B6B3, 0x0, 0x0}},
    [19] = {{0x89E80000, 0x8AC72304, 0x0, 0x0}},
    [20] = {{0x63100000, 0x6BC75E2D, 0x5, 0x0}},
    [21] = {{0xDEA00000, 0x35C9ADC5, 0x36, 0x0}},
    [22] = {{0xB2400000, 0x19E0C9BA, 0x21E, 0x0}},
    [23] = {{0xF6800000, 0x2C7E14A, 0x152D, 0x0}},
    [24] = {{0xA1000000, 0x1BCECCED, 0xD3C2, 0x0}},
    [25] = {{0x4A000000, 0x16140148, 0x84595, 0x0}},
    [26] = {{0xE4000000, 0xDCC80CD2, 0x52B7D2, 0x0}},
    [27] = {{0xE8000000, 0x9FD0803C, 0x33B2E3C, 0x0}},
    [28] = {{0x10000000, 0x3E250261, 0x204FCE5E, 0x0}},
    [29] = {{0xA0000000, 0x6D7217CA, 0x431E0FAE, 0x1}},
    [30] = {{0x40000000, 0x4674EDEA, 0x9F2C9CD0, 0xC}},
    [31] = {{0x80000000, 0xC0914B26, 0x37BE2022, 0x7E}},
    [32] = {{0x0, 0x85ACEF81, 0x2D6D415B, 0x4EE}},
    [33] = {{0x0, 0x38C15B0A, 0xC6448D93, 0x314D}},
    [34] = {{0x0, 0x378D8E64, 0xBEAD87C0, 0x1ED09}},
    [35] = {{0x0, 0x2B878FE8, 0x72C74D82, 0x134261}},
    [36] = {{0x0, 0xB34B9F10, 0x7BC90715, 0xC097CE}},
    [37] = {{0x0, 0xF436A0, 0xD5DA46D9, 0x785EE10}},
    [38] = {{0x0, 0x98A2240, 0x5A86C47A, 0x4B3B4CA8}}};

#endif