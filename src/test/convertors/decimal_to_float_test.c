#include "../test.h"

START_TEST(test_from_decimal_to_float_1) {
  // 79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = 1870659584;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_2) {
  // -79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = -276824064;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_3) {
  // 7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  int check = 1842138317;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_4) {
  // -7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  int check = -305345331;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_5) {
  // 20995463066280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x0}};
  int check = 1854385684;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_6) {
  // -20995463066280049462289146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80000000}};
  int check = -293097964;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_7) {
  // 792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
  int check = 1814288138;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_8) {
  // -792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};
  int check = -333195510;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_9) {
  // 2099546306628004946228914683.9
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x10000}};
  int check = 1826166407;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_10) {
  // -2099546306628004946228914683.9
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80010000}};
  int check = -321317241;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_11) {
  // 79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};
  int check = 1786974831;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_12) {
  // -79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};
  int check = -360508817;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_13) {
  // 209954630662800494622891468.39
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x20000}};
  int check = 1798155167;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_14) {
  // -209954630662800494622891468.39
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80020000}};
  int check = -349328481;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_15) {
  // 7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};
  int check = 1758574359;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_16) {
  // -7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};
  int check = -388909289;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_17) {
  // 20995463066280049462289146.839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x30000}};
  int check = 1770713011;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_18) {
  // -20995463066280049462289146.839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80030000}};
  int check = -376770637;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_19) {
  // 792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};
  int check = 1730659756;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_20) {
  // -792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};
  int check = -416823892;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_21) {
  // 2099546306628004946228914.6839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x40000}};
  int check = 1742621777;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_22) {
  // -2099546306628004946228914.6839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80040000}};
  int check = -404861871;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_23) {
  // 79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};
  int check = 1703294909;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_24) {
  // -79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};
  int check = -444188739;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_25) {
  // 209954630662800494622891.46839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x50000}};
  int check = 1714542247;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_26) {
  // -209954630662800494622891.46839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80050000}};
  int check = -432941401;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_27) {
  // 7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};
  int check = 1675018133;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_28) {
  // -7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};
  int check = -472465515;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_29) {
  // 20995463066280049462289.146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x60000}};
  int check = 1687045459;

  test_from_decimal_to_float(decimal, check);
}

START_TEST(test_from_decimal_to_float_30) {
  // -20995463066280049462289.146839
  s21_decimal decimal = {{0x3D70A3D7, 0x70A3D70A, 0x43D70A3D, 0x80060000}};
  int check = -460438189;

  test_from_decimal_to_float(decimal, check);
}

Suite *from_decimal_to_float_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("from_decimal_to_float");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_from_decimal_to_float_1);
  tcase_add_test(tc_core, test_from_decimal_to_float_2);
  tcase_add_test(tc_core, test_from_decimal_to_float_3);
  tcase_add_test(tc_core, test_from_decimal_to_float_4);
  tcase_add_test(tc_core, test_from_decimal_to_float_5);
  tcase_add_test(tc_core, test_from_decimal_to_float_6);
  tcase_add_test(tc_core, test_from_decimal_to_float_7);
  tcase_add_test(tc_core, test_from_decimal_to_float_8);
  tcase_add_test(tc_core, test_from_decimal_to_float_9);
  tcase_add_test(tc_core, test_from_decimal_to_float_10);
  tcase_add_test(tc_core, test_from_decimal_to_float_11);
  tcase_add_test(tc_core, test_from_decimal_to_float_12);
  tcase_add_test(tc_core, test_from_decimal_to_float_13);
  tcase_add_test(tc_core, test_from_decimal_to_float_14);
  tcase_add_test(tc_core, test_from_decimal_to_float_15);
  tcase_add_test(tc_core, test_from_decimal_to_float_16);
  tcase_add_test(tc_core, test_from_decimal_to_float_17);
  tcase_add_test(tc_core, test_from_decimal_to_float_18);
  tcase_add_test(tc_core, test_from_decimal_to_float_19);
  tcase_add_test(tc_core, test_from_decimal_to_float_20);
  tcase_add_test(tc_core, test_from_decimal_to_float_21);
  tcase_add_test(tc_core, test_from_decimal_to_float_22);
  tcase_add_test(tc_core, test_from_decimal_to_float_23);
  tcase_add_test(tc_core, test_from_decimal_to_float_24);
  tcase_add_test(tc_core, test_from_decimal_to_float_25);
  tcase_add_test(tc_core, test_from_decimal_to_float_26);
  tcase_add_test(tc_core, test_from_decimal_to_float_27);
  tcase_add_test(tc_core, test_from_decimal_to_float_28);
  tcase_add_test(tc_core, test_from_decimal_to_float_29);
  tcase_add_test(tc_core, test_from_decimal_to_float_30);

  suite_add_tcase(s, tc_core);
  return s;
}

void test_from_decimal_to_float(s21_decimal decimal, int check) {
  float result;
  int code = s21_from_decimal_to_float(decimal, &result);

  convertors c_result;
  c_result.value = result;

  ck_assert_int_eq(c_result.int_bytes, check);
  ck_assert_int_eq(code, OK);
}