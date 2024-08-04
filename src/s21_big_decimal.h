#ifndef S21_BIG_DECIMAL_H
#define S21_BIG_DECIMAL_H

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

//------------------------------------------------------------------------------
// Структуры
//------------------------------------------------------------------------------

typedef struct {
  int bits[8];
} s21_big_decimal;

//------------------------------------------------------------------------------
// Арифметические операторы
//------------------------------------------------------------------------------

int s21_big_add(s21_big_decimal value_1, s21_big_decimal value_2,
                s21_big_decimal *result);
int s21_big_sub(s21_big_decimal value_1, s21_big_decimal value_2,
                s21_big_decimal *result);
int s21_big_mul(s21_big_decimal value_1, s21_big_decimal value_2,
                s21_big_decimal *result);
int s21_big_div(s21_big_decimal value_1, s21_big_decimal value_2,
                s21_big_decimal *result);
int s21_big_mod(s21_big_decimal value_1, s21_big_decimal value_2,
                s21_big_decimal *result);

int s21_big_base_add(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal *result);
int s21_big_base_sub(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal *result);

int s21_big_base_mul(s21_big_decimal value_1, s21_big_decimal value_2,
                     s21_big_decimal *result);
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

int s21_big_is_less(s21_big_decimal value_1, s21_big_decimal value_2);
int s21_big_is_less_or_equal(s21_big_decimal value_1, s21_big_decimal value_2);
int s21_big_is_greater(s21_big_decimal value_1, s21_big_decimal value_2);
int s21_big_is_greater_or_equal(s21_big_decimal value_1,
                                s21_big_decimal value_2);
int s21_big_is_equal(s21_big_decimal value_1, s21_big_decimal value_2);
int s21_big_is_not_equal(s21_big_decimal value_1, s21_big_decimal value_2);

int s21_big_abs(s21_big_decimal value, s21_big_decimal *result);

//------------------------------------------------------------------------------
//      Функции возвращают код ошибки:
//      0 - OK
//      1 - число слишком велико или равно бесконечности
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Преобразователи
//------------------------------------------------------------------------------

int s21_big_from_int_to_decimal(int src, s21_big_decimal *dst);
int s21_big_from_float_to_decimal(float src, s21_big_decimal *dst);
int s21_big_from_decimal_to_int(s21_big_decimal src, int *dst);
int s21_big_from_decimal_to_float(s21_big_decimal src, float *dst);

int s21_from_int_to_big_decimal(int src, s21_big_decimal *dst);
void s21_from_big_decimal_to_string(s21_big_decimal value, char *decimal);
int s21_from_big_decimal_to_binary_string(s21_big_decimal value, char *binary);

//------------------------------------------------------------------------------
//      Функции возвращают код ошибки:
//      0 - OK
//      1 - ошибка конвертации
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Другие функции
//------------------------------------------------------------------------------

int s21_big_floor(s21_big_decimal value, s21_big_decimal *result);
int s21_big_round(s21_big_decimal value, s21_big_decimal *result);
int s21_big_truncate(s21_big_decimal value, s21_big_decimal *result);
int s21_big_negate(s21_big_decimal value, s21_big_decimal *result);

//------------------------------------------------------------------------------
//      Функции возвращают код ошибки:
//      0 - OK
//      1 - ошибка вычисления
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Битовые операции
//------------------------------------------------------------------------------

int s21_big_set_bit(s21_big_decimal *value, int bit_index);
int s21_big_reset_bit(s21_big_decimal *value, int bit_index);
int s21_big_inverse_bit(s21_big_decimal *value, int bit_index);
int s21_big_get_bit(s21_big_decimal value, int bit_index);

void s21_big_print_bits(s21_big_decimal value);
void s21_big_pretty_print_bits(s21_big_decimal value);

int s21_big_set_scale(s21_big_decimal *value, int scale);
int s21_big_get_scale(s21_big_decimal value);

void s21_big_set_sign(s21_big_decimal *value, int sign);
int s21_big_get_sign(s21_big_decimal value);

//------------------------------------------------------------------------------
// Общие функции
//------------------------------------------------------------------------------

s21_big_decimal *s21_big_create_decimal();
void s21_big_free_decimal(s21_big_decimal *value);
void s21_big_clear_decimal(s21_big_decimal *value);
void s21_big_left_shift_decimal(s21_big_decimal src, s21_big_decimal *dst,
                                int shift);
void s21_big_copy_decimal(s21_big_decimal src, s21_big_decimal *dst);
int s21_big_normalize(s21_big_decimal *value_1, s21_big_decimal *value_2);

#endif