#include "../test.h"

START_TEST(test_from_decimal_to_int_1) {
  // 792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  int check = 792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_2) {
  // -792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  int check = -792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_3) {
  // 79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  int check = 79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_4) {
  // -79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  int check = -79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_5) {
  // 7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  int check = 7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_6) {
  // -7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  int check = -7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_7) {
  // 792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  int check = 792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_8) {
  // -792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  int check = -792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_9) {
  // 79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  int check = 79228;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_10) {
  // -79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  int check = -79228;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_11) {
  // 7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  int check = 7922;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_12) {
  // -7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  int check = -7922;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_13) {
  // 792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  int check = 792;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_14) {
  // -792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  int check = -792;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_15) {
  // 79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  int check = 79;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_16) {
  // -79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  int check = -79;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_17) {
  // 7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  int check = 7;
}

START_TEST(test_from_decimal_to_int_18) {
  // -7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  int check = -7;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_19) {
  // 792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  int check = 792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_20) {
  // -792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  int check = -792281625;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_21) {
  // 79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  int check = 79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_22) {
  // -79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  int check = -79228162;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_23) {
  // 7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  int check = 7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_24) {
  // -7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  int check = -7922816;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_25) {
  // 792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  int check = 792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_26) {
  // -792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  int check = -792281;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_27) {
  // 79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  int check = 79228;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_28) {
  // -79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  int check = -79228;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_29) {
  // 7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  int check = 7922;

  test_from_decimal_to_int(decimal, check);
}

START_TEST(test_from_decimal_to_int_30) {
  // -7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  int check = -7922;

  test_from_decimal_to_int(decimal, check);
}

Suite *from_decimal_to_int_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("from_decimal_to_int");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_from_decimal_to_int_1);
  tcase_add_test(tc_core, test_from_decimal_to_int_2);
  tcase_add_test(tc_core, test_from_decimal_to_int_3);
  tcase_add_test(tc_core, test_from_decimal_to_int_4);
  tcase_add_test(tc_core, test_from_decimal_to_int_5);
  tcase_add_test(tc_core, test_from_decimal_to_int_6);
  tcase_add_test(tc_core, test_from_decimal_to_int_7);
  tcase_add_test(tc_core, test_from_decimal_to_int_8);
  tcase_add_test(tc_core, test_from_decimal_to_int_9);
  tcase_add_test(tc_core, test_from_decimal_to_int_10);
  tcase_add_test(tc_core, test_from_decimal_to_int_11);
  tcase_add_test(tc_core, test_from_decimal_to_int_12);
  tcase_add_test(tc_core, test_from_decimal_to_int_13);
  tcase_add_test(tc_core, test_from_decimal_to_int_14);
  tcase_add_test(tc_core, test_from_decimal_to_int_15);
  tcase_add_test(tc_core, test_from_decimal_to_int_16);
  tcase_add_test(tc_core, test_from_decimal_to_int_17);
  tcase_add_test(tc_core, test_from_decimal_to_int_18);
  tcase_add_test(tc_core, test_from_decimal_to_int_19);
  tcase_add_test(tc_core, test_from_decimal_to_int_20);
  tcase_add_test(tc_core, test_from_decimal_to_int_21);
  tcase_add_test(tc_core, test_from_decimal_to_int_22);
  tcase_add_test(tc_core, test_from_decimal_to_int_23);
  tcase_add_test(tc_core, test_from_decimal_to_int_24);
  tcase_add_test(tc_core, test_from_decimal_to_int_25);
  tcase_add_test(tc_core, test_from_decimal_to_int_26);
  tcase_add_test(tc_core, test_from_decimal_to_int_27);
  tcase_add_test(tc_core, test_from_decimal_to_int_28);
  tcase_add_test(tc_core, test_from_decimal_to_int_29);
  tcase_add_test(tc_core, test_from_decimal_to_int_30);

  suite_add_tcase(s, tc_core);
  return s;
}

void test_from_decimal_to_int(s21_decimal decimal, int check) {
  int result = 0;
  int code = s21_from_decimal_to_int(decimal, &result);
  ck_assert_int_eq(result, check);
  ck_assert_int_eq(code, OK);
}
