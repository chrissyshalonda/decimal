#include "../test.h"

START_TEST(test_from_float_to_decimal_1) {
  // 2.28401628E-19
  int f = 545706772;
  // 0.0000000000000000002284016
  s21_decimal decimal_check = {{0x22D9F0, 0x0, 0x0, 0x190000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_2) {
  // -2.28401628E-19
  int f = -1601776876;
  // -0.0000000000000000002284016
  s21_decimal decimal_check = {{0x22D9F0, 0x0, 0x0, 0x80190000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_3) {
  // 5.92141241E+23
  int f = 1727711253;
  // 592141200000000000000000
  s21_decimal decimal_check = {{0xBF280000, 0x9ED0576, 0x7D64, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_4) {
  // -5.92141241E+23
  int f = -419772395;
  // -592141200000000000000000
  s21_decimal decimal_check = {{0xBF280000, 0x9ED0576, 0x7D64, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_5) {
  // 2.1349025E-18
  int f = 572360491;
  // 0.000000000000000002134902
  s21_decimal decimal_check = {{0x209376, 0x0, 0x0, 0x180000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_6) {
  // -2.1349025E-18
  int f = -1575123157;
  // -0.000000000000000002134902
  s21_decimal decimal_check = {{0x209376, 0x0, 0x0, 0x80180000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_7) {
  // 2.38582807E-08
  int f = 852291818;
  // 0.00000002385828
  s21_decimal decimal_check = {{0x2467A4, 0x0, 0x0, 0xE0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_8) {
  // -2.38582807E-08
  int f = -1295191830;
  // -0.00000002385828
  s21_decimal decimal_check = {{0x2467A4, 0x0, 0x0, 0x800E0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_9) {
  // 7.91617864E+11
  int f = 1396199450;
  // 791617900000
  s21_decimal decimal_check = {{0x501A8DE0, 0xB8, 0x0, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_10) {
  // -7.91617864E+11
  int f = -751284198;
  // -791617900000
  s21_decimal decimal_check = {{0x501A8DE0, 0xB8, 0x0, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_11) {
  // 1.99102057E+21
  int f = 1658314220;
  // 1991021000000000000000
  s21_decimal decimal_check = {{0x5F048000, 0xEEF78A9E, 0x6B, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_12) {
  // -1.99102057E+21
  int f = -489169428;
  // -1991021000000000000000
  s21_decimal decimal_check = {{0x5F048000, 0xEEF78A9E, 0x6B, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_13) {
  // 9.29209423E+24
  int f = 1760949678;
  // 9292094000000000000000000
  s21_decimal decimal_check = {{0xE380000, 0x6CD28004, 0x7AFAD, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_14) {
  // -9.29209423E+24
  int f = -386533970;
  // -9292094000000000000000000
  s21_decimal decimal_check = {{0xE380000, 0x6CD28004, 0x7AFAD, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_15) {
  // 0.000115481133
  int f = 955395702;
  // 0.0001154811
  s21_decimal decimal_check = {{0x119EFB, 0x0, 0x0, 0xA0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_16) {
  // -0.000115481133
  int f = -1192087946;
  // -0.0001154811
  s21_decimal decimal_check = {{0x119EFB, 0x0, 0x0, 0x800A0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_17) {
  // 8.66900895E-23
  int f = 449944209;
  // 0.0000000000000000000000866901
  s21_decimal decimal_check = {{0xD3A55, 0x0, 0x0, 0x1C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_18) {
  // -8.66900895E-23
  int f = -1697539439;
  // -0.0000000000000000000000866901
  s21_decimal decimal_check = {{0xD3A55, 0x0, 0x0, 0x801C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_19) {
  // 3.91406387E+11
  int f = 1387676487;
  // 391406400000
  s21_decimal decimal_check = {{0x21A3B200, 0x5B, 0x0, 0x0}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_20) {
  // -3.91406387E+11
  int f = -759807161;
  // -391406400000
  s21_decimal decimal_check = {{0x21A3B200, 0x5B, 0x0, 0x80000000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_21) {
  // 1.54636995E-16
  int f = 624052425;
  // 0.000000000000000154637
  s21_decimal decimal_check = {{0x25C0D, 0x0, 0x0, 0x150000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_22) {
  // -1.54636995E-16
  int f = -1523431223;
  // -0.000000000000000154637
  s21_decimal decimal_check = {{0x25C0D, 0x0, 0x0, 0x80150000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_23) {
  // 1.05583253E-13
  int f = 703447194;
  // 0.0000000000001055833
  s21_decimal decimal_check = {{0x101C59, 0x0, 0x0, 0x130000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_24) {
  // -1.05583253E-13
  int f = -1444036454;
  // -0.0000000000001055833
  s21_decimal decimal_check = {{0x101C59, 0x0, 0x0, 0x80130000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_25) {
  // 4882.71582
  int f = 1167627706;
  // 4882.716
  s21_decimal decimal_check = {{0x4A811C, 0x0, 0x0, 0x30000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_26) {
  // -4882.71582
  int f = -979855942;
  // -4882.716
  s21_decimal decimal_check = {{0x4A811C, 0x0, 0x0, 0x80030000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_27) {
  // 1.9929916E-26
  int f = 348479575;
  // 0.0000000000000000000000000199
  s21_decimal decimal_check = {{0xC7, 0x0, 0x0, 0x1C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_28) {
  // -1.9929916E-26
  int f = -1799004073;
  // -0.0000000000000000000000000199
  s21_decimal decimal_check = {{0xC7, 0x0, 0x0, 0x801C0000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_29) {
  // 3574.10864
  int f = 1163878845;
  // 3574.109
  s21_decimal decimal_check = {{0x36895D, 0x0, 0x0, 0x30000}};

  test_from_float_to_decimal(f, decimal_check);
}

START_TEST(test_from_float_to_decimal_30) {
  // -3574.10864
  int f = -983604803;
  // -3574.109
  s21_decimal decimal_check = {{0x36895D, 0x0, 0x0, 0x80030000}};

  test_from_float_to_decimal(f, decimal_check);
}

Suite *from_float_to_decimal_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("from_float_to_decimal_suite");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_from_float_to_decimal_1);
  tcase_add_test(tc_core, test_from_float_to_decimal_2);
  tcase_add_test(tc_core, test_from_float_to_decimal_3);
  tcase_add_test(tc_core, test_from_float_to_decimal_4);
  tcase_add_test(tc_core, test_from_float_to_decimal_5);
  tcase_add_test(tc_core, test_from_float_to_decimal_6);
  tcase_add_test(tc_core, test_from_float_to_decimal_7);
  tcase_add_test(tc_core, test_from_float_to_decimal_8);
  tcase_add_test(tc_core, test_from_float_to_decimal_9);
  tcase_add_test(tc_core, test_from_float_to_decimal_10);
  tcase_add_test(tc_core, test_from_float_to_decimal_11);
  tcase_add_test(tc_core, test_from_float_to_decimal_12);
  tcase_add_test(tc_core, test_from_float_to_decimal_13);
  tcase_add_test(tc_core, test_from_float_to_decimal_14);
  tcase_add_test(tc_core, test_from_float_to_decimal_15);
  tcase_add_test(tc_core, test_from_float_to_decimal_16);
  tcase_add_test(tc_core, test_from_float_to_decimal_17);
  tcase_add_test(tc_core, test_from_float_to_decimal_18);
  tcase_add_test(tc_core, test_from_float_to_decimal_19);
  tcase_add_test(tc_core, test_from_float_to_decimal_20);
  tcase_add_test(tc_core, test_from_float_to_decimal_21);
  tcase_add_test(tc_core, test_from_float_to_decimal_22);
  tcase_add_test(tc_core, test_from_float_to_decimal_23);
  tcase_add_test(tc_core, test_from_float_to_decimal_24);
  tcase_add_test(tc_core, test_from_float_to_decimal_25);
  tcase_add_test(tc_core, test_from_float_to_decimal_26);
  tcase_add_test(tc_core, test_from_float_to_decimal_27);
  tcase_add_test(tc_core, test_from_float_to_decimal_28);
  tcase_add_test(tc_core, test_from_float_to_decimal_29);
  tcase_add_test(tc_core, test_from_float_to_decimal_30);

  suite_add_tcase(s, tc_core);
  return s;
}

void test_from_float_to_decimal(int f, s21_decimal decimal_check) {
  s21_decimal result = s21_clear_decimal();

  convertors c_float;
  c_float.int_bytes = f;

  int code = s21_from_float_to_decimal(c_float.value, &result);
  ck_assert_int_eq(code, OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), 1);
}