#include "test.h"

START_TEST(test_s21_get_bit) {
  s21_decimal* a = s21_create_decimal();
  s21_set_scale(a, 0);
  s21_set_sign(a, 1);
  s21_set_bit(a, 0);
  ck_assert(s21_get_bit(*a, 0));
  s21_free_decimal(a);
}

START_TEST(test_s21_set_bit) {
  s21_decimal* a = s21_create_decimal();
  s21_set_scale(a, 0);
  s21_set_sign(a, 1);
  s21_set_bit(a, 0);
  ck_assert(s21_get_bit(*a, 0));
  s21_free_decimal(a);
}

START_TEST(test_s21_reset_bit) {
  s21_decimal* a = s21_create_decimal();
  s21_set_scale(a, 0);
  s21_set_sign(a, 1);
  s21_set_bit(a, 0);
  s21_reset_bit(a, 0);
  ck_assert(!s21_get_bit(*a, 0));
  s21_free_decimal(a);
}

START_TEST(test_s21_inverse_bit) {
  s21_decimal* a = s21_create_decimal();
  s21_set_scale(a, 0);
  s21_set_sign(a, 1);
  s21_set_bit(a, 0);
  s21_inverse_bit(a, 0);
  ck_assert(!s21_get_bit(*a, 0));
  s21_free_decimal(a);
}

START_TEST(test_s21_big_get_bit) {
  s21_big_decimal* a = s21_big_create_decimal();
  s21_big_set_scale(a, 0);
  s21_big_set_sign(a, 1);
  s21_big_set_bit(a, 0);
  ck_assert(s21_big_get_bit(*a, 0));
  s21_big_free_decimal(a);
}

START_TEST(test_s21_big_set_bit) {
  s21_big_decimal* a = s21_big_create_decimal();
  s21_big_set_scale(a, 0);
  s21_big_set_sign(a, 1);
  s21_big_set_bit(a, 0);
  ck_assert(s21_big_get_bit(*a, 0));
  s21_big_free_decimal(a);
}

START_TEST(test_s21_big_reset_bit) {
  s21_big_decimal* a = s21_big_create_decimal();
  s21_big_set_scale(a, 0);
  s21_big_set_sign(a, 1);
  s21_big_set_bit(a, 0);
  s21_big_reset_bit(a, 0);
  ck_assert(!s21_big_get_bit(*a, 0));
  s21_big_free_decimal(a);
}

START_TEST(test_s21_big_inverse_bit) {
  s21_big_decimal* a = s21_big_create_decimal();
  s21_big_set_scale(a, 0);
  s21_big_set_sign(a, 1);
  s21_big_set_bit(a, 0);
  s21_big_inverse_bit(a, 0);
  ck_assert(!s21_big_get_bit(*a, 0));
  s21_big_free_decimal(a);
}

START_TEST(test_s21_set_get_scale) {
  s21_decimal* a = s21_create_decimal();
  s21_set_scale(a, 0);
  ck_assert_int_eq(s21_get_scale(*a), 0);
  s21_free_decimal(a);
}

START_TEST(test_s21_set_get_sign) {
  s21_decimal* a = s21_create_decimal();
  s21_set_sign(a, 0);
  ck_assert_int_eq(s21_get_sign(*a), 0);
  s21_free_decimal(a);
}

START_TEST(test_s21_big_set_get_scale) {
  s21_big_decimal* a = s21_big_create_decimal();
  s21_big_set_scale(a, 0);
  ck_assert_int_eq(s21_big_get_scale(*a), 0);
  s21_big_free_decimal(a);
}

START_TEST(test_s21_big_set_get_sign) {
  s21_big_decimal* a = s21_big_create_decimal();
  s21_big_set_sign(a, 0);
  ck_assert_int_eq(s21_big_get_sign(*a), 0);
  s21_big_free_decimal(a);
}

Suite* test_bit_operations(void) {
  Suite* s;
  TCase* tc;

  s = suite_create("Bit operations");
  tc = tcase_create("Bit operations");

  if (s != NULL && tc != NULL) {
    tcase_add_test(tc, test_s21_get_bit);
    tcase_add_test(tc, test_s21_set_bit);
    tcase_add_test(tc, test_s21_reset_bit);
    tcase_add_test(tc, test_s21_inverse_bit);
    tcase_add_test(tc, test_s21_big_get_bit);
    tcase_add_test(tc, test_s21_big_set_bit);
    tcase_add_test(tc, test_s21_big_reset_bit);
    tcase_add_test(tc, test_s21_big_inverse_bit);
    tcase_add_test(tc, test_s21_set_get_scale);
    tcase_add_test(tc, test_s21_set_get_sign);
    tcase_add_test(tc, test_s21_big_set_get_scale);
    tcase_add_test(tc, test_s21_big_set_get_sign);
    suite_add_tcase(s, tc);
  }

  return (s);
}