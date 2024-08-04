#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "s21_big_decimal.h"
#include "tests/test.h"

//------------------------------------------------------------------------------
// DEFINES
//------------------------------------------------------------------------------

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define BG_RED "\033[41m"
#define BG_GREEN "\033[42m"
#define BG_BLUE "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_WHITE "\033[47m"

#define OK 0
#define INFINITY 1
#define NEG_INFINITY 2
#define DIVIDE_BY_ZERO 3

//------------------------------------------------------------------------------
// Структуры
//------------------------------------------------------------------------------

typedef struct {
  int bits[4];
} s21_decimal;

//------------------------------------------------------------------------------
// Арифметические операторы
//------------------------------------------------------------------------------

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mod(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_base_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_base_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_base_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_base_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

int s21_inverse(s21_decimal value, s21_decimal *result);
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

void s21_from_decimal_to_big(s21_decimal src, s21_big_decimal *dst);
int s21_from_big_to_decimal(s21_big_decimal *big, s21_decimal *decimal);
void s21_from_decimal_to_string(s21_decimal value, char *decimal);
int s21_from_decimal_to_binary_string(s21_decimal value, char *binary);

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
int s21_get_row(int bit_index);
int s21_get_col(int bit_index);

int s21_set_bit(s21_decimal *value, int bit_index);
int s21_reset_bit(s21_decimal *value, int bit_index);
int s21_inverse_bit(s21_decimal *value, int bit_index);
int s21_get_bit(s21_decimal value, int bit_index);

void s21_print_bits(s21_decimal value);
void s21_pretty_print_bits(s21_decimal value);

int s21_set_scale(s21_decimal *value, int scale);
int s21_get_scale(s21_decimal value);

void s21_set_sign(s21_decimal *value, int sign);
int s21_get_sign(s21_decimal value);

//------------------------------------------------------------------------------
// Общие функции
//------------------------------------------------------------------------------

s21_decimal *s21_create_decimal();
void s21_free_decimal(s21_decimal *value);
void s21_clear_decimal(s21_decimal *value);
void s21_left_shift_decimal(s21_decimal src, s21_decimal *dst, int shift);
void s21_copy_decimal(s21_decimal src, s21_decimal *dst);
int s21_normalize(s21_decimal *value_1, s21_decimal *value_2);
s21_decimal s21_init_int(int value, int scale);
s21_decimal s21_init(int value1, int value2, int value3, int scale, int sign);
int s21_length(s21_decimal value);

#endif