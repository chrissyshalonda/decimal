#include "test.h"

START_TEST(test_s21_from_decimal_to_big) {
  s21_decimal src;
  s21_big_decimal dst;
  s21_set_scale(&src, 20);
  s21_set_sign(&src, 1);
  src.bits[0] = 69;
  s21_from_decimal_to_big(src, &dst);

  
  ck_assert_int_eq(s21_big_get_scale(dst), 20);
  ck_assert_int_eq(s21_big_get_sign(dst), 1);
  ck_assert_int_eq(dst.bits[0], 69);
}

Suite* test_convertors(void) {
  Suite* s;
  TCase* tc;

  s = suite_create("Convertors");
  tc = tcase_create("Convertors");

  if (s != NULL && tc != NULL) {
    tcase_add_test(tc, test_s21_from_decimal_to_big);

    suite_add_tcase(s, tc);
  }

  return (s);
}