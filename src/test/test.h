#ifndef SRC_TEST_H
#define SRC_TEST_H

#include <check.h>
#include "math.h"
#include "../arithmetic/s21_arithmetic.h"
#include "../s21_decimal.h"
#include "../another/s21_another.h"
#include "../comparison/s21_comparison.h"

#define TEST_ARITHMETIC_OK 0
#define TEST_ARITHMETIC_BIG 1
#define TEST_ARITHMETIC_SMALL 2
#define TEST_ARITHMETIC_ZERO_DIV 3

#define TRUE 1
#define FALSE 0

typedef union convertors{
    float value;
    int int_bytes;
} convertors;

Suite *add_suite(void);
void test_add(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_add_fail(s21_decimal decimal1, s21_decimal decimal2, int check);

Suite * sub_suite(void);
void test_sub(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_sub_fail(s21_decimal decimal1, s21_decimal decimal2, int check);

Suite *mul_suite(void);
void test_mul(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_mul_fail1(s21_decimal decimal1, s21_decimal decimal2, int code_check);
void test_mul_fail2(s21_decimal decimal1, s21_decimal decimal2, s21_decimal decimal_check, int code_check);

Suite *div_suite(void);
void test_div(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_div_fail1(s21_decimal decimal1, s21_decimal decimal2, int code_check);
void test_div_fail2(s21_decimal decimal1, s21_decimal decimal2, s21_decimal decimal_check, int code_check);

Suite *mod_suite(void);
void test_mod(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check);
void test_mod_fail(s21_decimal decimal1, s21_decimal decimal2, int code_check);




Suite *is_equal_suite(void);
void test_is_equal(s21_decimal decimal1, s21_decimal decimal2, int check);

Suite *is_greater_suite(void);
void test_is_greater(s21_decimal decimal1, s21_decimal decimal2, int check);

Suite *is_less_suite(void);
void test_is_less(s21_decimal decimal1, s21_decimal decimal2, int check);

Suite *is_not_equal_suite(void);
void test_is_not_equal(s21_decimal decimal1, s21_decimal decimal2, int check);

Suite *is_greater_or_equal_suite(void);
void test_is_greater_or_equal(s21_decimal decimal1, s21_decimal decimal2, int check);

Suite *is_less_or_equal_suite(void);
void test_is_less_or_equal(s21_decimal decimal1, s21_decimal decimal2, int check);




Suite *negate_suite(void);
void test_negate(s21_decimal decimal, s21_decimal decimal_check);

Suite *truncate_suite(void);
void test_truncate(s21_decimal decimal, s21_decimal decimal_check);

Suite *floor_suite(void);
void test_floor(s21_decimal decimal, s21_decimal decimal_check);

Suite *round_suite(void);
void test_round(s21_decimal decimal, s21_decimal decimal_check);





Suite *from_int_to_decimal_suite(void);
void test_from_int_to_decimal(int number, s21_decimal decimal_check);

Suite *from_decimal_to_int_suite(void);
void test_from_decimal_to_int(s21_decimal decimal, int check);

Suite *from_decimal_to_float_suite(void);
void test_from_decimal_to_float(s21_decimal decimal, int check);

Suite *from_float_to_decimal_suite(void);
void test_from_float_to_decimal(int f, s21_decimal decimal_check);

#endif SRC_TEST_H