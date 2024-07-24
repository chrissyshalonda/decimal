#include "test.h"

START_TEST(test_s21_clear_decimal) {
  s21_decimal* a = s21_create_decimal();
  s21_set_bit(a, 0);
  s21_clear_decimal(a);
  ck_assert_int_eq(s21_get_scale(*a), 0);
  ck_assert_int_eq(s21_get_sign(*a), 0);
  s21_free_decimal(a);
}

START_TEST(test_s21_copy_decimal) {
  s21_decimal* a = s21_create_decimal();
  s21_decimal* b = s21_create_decimal();
  s21_set_bit(a, 0);
  s21_copy_decimal(*a, b);
  ck_assert_int_eq(s21_get_scale(*b), 0);
  ck_assert_int_eq(s21_get_sign(*b), 0);
  ck_assert_int_eq(s21_get_bit(*b, 0), 1);
  s21_free_decimal(a);
  s21_free_decimal(b);
}

START_TEST(test_s21_create_decimal) {
  s21_decimal* a = s21_create_decimal();
  ck_assert_int_eq(s21_get_scale(*a), 0);
  ck_assert_int_eq(s21_get_sign(*a), 0);
  s21_free_decimal(a);
}

START_TEST(test_s21_free_decimal) {
  s21_decimal* a = s21_create_decimal();
  s21_free_decimal(a);
}

START_TEST(test_s21_left_shift_decimal) {
  s21_decimal* a = s21_create_decimal();
  s21_set_bit(a, 0);
  s21_left_shift_decimal(*a, a, 1);
  ck_assert_int_eq(s21_get_bit(*a, 1), 1);
  s21_free_decimal(a);
}

START_TEST(test_s21_big_clear_decimal) {
  s21_big_decimal* a = s21_big_create_decimal();
  s21_big_set_bit(a, 0);
  s21_big_clear_decimal(a);
  ck_assert_int_eq(s21_big_get_scale(*a), 0);
  ck_assert_int_eq(s21_big_get_sign(*a), 0);
  s21_big_free_decimal(a);
}

START_TEST(test_s21_big_copy_decimal) {
  s21_big_decimal* a = s21_big_create_decimal();
  s21_big_decimal* b = s21_big_create_decimal();
  s21_big_set_bit(a, 0);
  s21_big_copy_decimal(*a, b);
  ck_assert_int_eq(s21_big_get_scale(*b), 0);
  ck_assert_int_eq(s21_big_get_sign(*b), 0);
  ck_assert_int_eq(s21_big_get_bit(*b, 0), 1);
  s21_big_free_decimal(a);
  s21_big_free_decimal(b);
}

START_TEST(test_s21_big_create_decimal) {
  s21_big_decimal* a = s21_big_create_decimal();
  ck_assert_int_eq(s21_big_get_scale(*a), 0);
  ck_assert_int_eq(s21_big_get_sign(*a), 0);
  s21_big_free_decimal(a);
}

START_TEST(test_s21_big_free_decimal) {
  s21_big_decimal* a = s21_big_create_decimal();
  s21_big_free_decimal(a);
}

START_TEST(test_s21_big_left_shift_decimal) {
  s21_big_decimal* a = s21_big_create_decimal();
  s21_big_set_bit(a, 0);
  s21_big_left_shift_decimal(*a, a, 1);
  ck_assert_int_eq(s21_big_get_bit(*a, 1), 1);
  s21_big_free_decimal(a);
}

Suite* test_common(void) {
  Suite* s;
  TCase* tc;

  s = suite_create("Common");
  tc = tcase_create("Common");

  if (s != NULL && tc != NULL) {
    tcase_add_test(tc, test_s21_clear_decimal);
    tcase_add_test(tc, test_s21_copy_decimal);
    tcase_add_test(tc, test_s21_create_decimal);
    tcase_add_test(tc, test_s21_free_decimal);
    tcase_add_test(tc, test_s21_left_shift_decimal);

    tcase_add_test(tc, test_s21_big_clear_decimal);
    tcase_add_test(tc, test_s21_big_copy_decimal);
    tcase_add_test(tc, test_s21_big_create_decimal);
    tcase_add_test(tc, test_s21_big_free_decimal);
    tcase_add_test(tc, test_s21_big_left_shift_decimal);
    suite_add_tcase(s, tc);
  }

  return (s);
}