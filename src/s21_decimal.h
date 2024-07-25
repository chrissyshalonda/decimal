#ifndef S21_DECIMAL_H
#define S21_DECIMAL_H

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "s21_big_decimal.h"

#define POSITIVE_SIGN 0
#define NEGATIVE_SIGN 1

//------------------------------------------------------------------------------
// Структуры
//------------------------------------------------------------------------------

typedef struct s21_decimal{
    int bits[4];
} s21_decimal;

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
void s21_pretty_print_bits(s21_decimal value);

int s21_set_scale(s21_decimal *value, int scale);
int s21_get_scale(s21_decimal value);

void s21_set_sign(s21_decimal *value, int sign);
int s21_get_sign(s21_decimal value);



//------------------------------------------------------------------------------
// Общие функции
//------------------------------------------------------------------------------

s21_decimal* s21_create_decimal();
void s21_free_decimal(s21_decimal* value);
s21_decimal s21_clear_decimal();
#endif