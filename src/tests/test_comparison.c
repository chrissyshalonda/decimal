#include "test.h"

START_TEST(test_s21_is_equal) {
  s21_decimal value1 = s21_init_int(120000, 4);
  s21_decimal value2 = s21_init_int(12000, 3);
  ck_assert(s21_is_equal(value1, value2));
  value1 = s21_init_int(120000, 4);
  value2 = s21_init_int(12001, 3);
  ck_assert(!s21_is_equal(value1, value2));
  value1 = s21_init_int(120001, 4);
  value2 = s21_init_int(12000, 3);
  ck_assert(!s21_is_equal(value1, value2));
  value1 = s21_init_int(-120000, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(s21_is_equal(value1, value2));
  value1 = s21_init_int(-120000, 4);
  value2 = s21_init_int(-12001, 3);
  ck_assert(!s21_is_equal(value1, value2));
  value1 = s21_init_int(-120001, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(!s21_is_equal(value1, value2));
  value1 = s21_init_int(120001, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(!s21_is_equal(value1, value2));
}

START_TEST(test_s21_is_not_equal) {
  s21_decimal value1 = s21_init_int(120000, 4);
  s21_decimal value2 = s21_init_int(12000, 3);
  ck_assert(!s21_is_not_equal(value1, value2));
  value1 = s21_init_int(120000, 4);
  value2 = s21_init_int(12001, 3);
  ck_assert(s21_is_not_equal(value1, value2));
  value1 = s21_init_int(120001, 4);
  value2 = s21_init_int(12000, 3);
  ck_assert(s21_is_not_equal(value1, value2));
  value1 = s21_init_int(-120000, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(!s21_is_not_equal(value1, value2));
  value1 = s21_init_int(-120000, 4);
  value2 = s21_init_int(-12001, 3);
  ck_assert(s21_is_not_equal(value1, value2));
  value1 = s21_init_int(-120001, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(s21_is_not_equal(value1, value2));
  value1 = s21_init_int(120001, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(s21_is_not_equal(value1, value2));
}

START_TEST(test_s21_is_less) {
  s21_decimal value1 = s21_init_int(120000, 4);
  s21_decimal value2 = s21_init_int(12000, 3);
  ck_assert(!s21_is_less(value1, value2));
  value1 = s21_init_int(120000, 4);
  value2 = s21_init_int(12001, 3);
  ck_assert(s21_is_less(value1, value2));
  value1 = s21_init_int(120001, 4);
  value2 = s21_init_int(12000, 3);
  ck_assert(!s21_is_less(value1, value2));
  value1 = s21_init_int(-120000, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(!s21_is_less(value1, value2));
  value1 = s21_init_int(-120000, 4);
  value2 = s21_init_int(-12001, 3);
  ck_assert(!s21_is_less(value1, value2));
  value1 = s21_init_int(-120001, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(s21_is_less(value1, value2));
  value1 = s21_init_int(120001, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(!s21_is_less(value1, value2));
}

START_TEST(test_s21_is_less_or_equal) {
  s21_decimal value1 = s21_init_int(120000, 4);
  s21_decimal value2 = s21_init_int(12000, 3);
  ck_assert(s21_is_less_or_equal(value1, value2));
  value1 = s21_init_int(120000, 4);
  value2 = s21_init_int(12001, 3);
  ck_assert(s21_is_less_or_equal(value1, value2));
  value1 = s21_init_int(120001, 4);
  value2 = s21_init_int(12000, 3);
  ck_assert(!s21_is_less_or_equal(value1, value2));
  value1 = s21_init_int(-120000, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(s21_is_less_or_equal(value1, value2));
  value1 = s21_init_int(-120000, 4);
  value2 = s21_init_int(-12001, 3);
  ck_assert(!s21_is_less_or_equal(value1, value2));
  value1 = s21_init_int(-120001, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(s21_is_less_or_equal(value1, value2));
  value1 = s21_init_int(120001, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(!s21_is_less_or_equal(value1, value2));
}

START_TEST(test_s21_is_greater) {
  s21_decimal value1 = s21_init_int(120000, 4);
  s21_decimal value2 = s21_init_int(12000, 3);
  ck_assert(!s21_is_greater(value1, value2));
  value1 = s21_init_int(120000, 4);
  value2 = s21_init_int(12001, 3);
  ck_assert(!s21_is_greater(value1, value2));
  value1 = s21_init_int(120001, 4);
  value2 = s21_init_int(12000, 3);
  ck_assert(s21_is_greater(value1, value2));
  value1 = s21_init_int(-120000, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(!s21_is_greater(value1, value2));
  value1 = s21_init_int(-120000, 4);
  value2 = s21_init_int(-12001, 3);
  ck_assert(s21_is_greater(value1, value2));
  value1 = s21_init_int(-120001, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(!s21_is_greater(value1, value2));
  value1 = s21_init_int(120001, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(s21_is_greater(value1, value2));
}

START_TEST(test_s21_is_greater_or_equal) {
  s21_decimal value1 = s21_init_int(120000, 4);
  s21_decimal value2 = s21_init_int(12000, 3);
  ck_assert(s21_is_greater_or_equal(value1, value2));
  value1 = s21_init_int(120000, 4);
  value2 = s21_init_int(12001, 3);
  ck_assert(!s21_is_greater_or_equal(value1, value2));
  value1 = s21_init_int(120001, 4);
  value2 = s21_init_int(12000, 3);
  ck_assert(s21_is_greater_or_equal(value1, value2));
  value1 = s21_init_int(-120000, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(s21_is_greater_or_equal(value1, value2));
  value1 = s21_init_int(-120000, 4);
  value2 = s21_init_int(-12001, 3);
  ck_assert(s21_is_greater_or_equal(value1, value2));
  value1 = s21_init_int(-120001, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(!s21_is_greater_or_equal(value1, value2));
  value1 = s21_init_int(120001, 4);
  value2 = s21_init_int(-12000, 3);
  ck_assert(s21_is_greater_or_equal(value1, value2));
}

Suite* test_comparison(void) {
  Suite* s;
  TCase* tc;

  s = suite_create("Comparison");
  tc = tcase_create("Comparison");

  if (s != NULL && tc != NULL) {
    tcase_add_test(tc, test_s21_is_equal);
    tcase_add_test(tc, test_s21_is_not_equal);
    tcase_add_test(tc, test_s21_is_less);
    tcase_add_test(tc, test_s21_is_less_or_equal);
    tcase_add_test(tc, test_s21_is_greater);
    tcase_add_test(tc, test_s21_is_greater_or_equal);
    suite_add_tcase(s, tc);
  }

  return (s);
}