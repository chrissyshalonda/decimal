#include "../test.h"

START_TEST(test_is_less_1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_4) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_6) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_8) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_9) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_10) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_11) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_12) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_13) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_14) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_15) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_16) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_17) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_18) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_19) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_20) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_21) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_22) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_23) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_24) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_25) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_26) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_27) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_28) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_29) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_30) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_31) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_32) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_33) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_34) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_35) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_36) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_37) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_38) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_39) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_40) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_41) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_42) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_43) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_44) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_45) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_46) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_47) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_48) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_49) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_50) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_51) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_52) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_53) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_54) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_55) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_56) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_57) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_58) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_59) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_60) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_61) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_62) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_63) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_64) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_65) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_66) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_67) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_68) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_69) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_70) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_71) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_72) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_73) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_74) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_75) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_76) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_77) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_78) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_79) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_80) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_81) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_82) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_83) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_84) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_85) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_86) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_87) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_88) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_89) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_90) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_91) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_92) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_93) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_94) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_95) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_96) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_97) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_98) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_99) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_100) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_101) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_102) {
  // -58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_103) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_104) {
  // 58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_105) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_106) {
  // 5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_107) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_108) {
  // -5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_109) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_110) {
  // 47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_111) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_112) {
  // -47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_114) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_115) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_116) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_118) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_120) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_122) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_124) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_126) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_127) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_128) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_129) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_130) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_131) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_132) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_133) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_134) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_135) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_136) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_137) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_138) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_139) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_140) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_141) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_142) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_143) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_144) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_145) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_146) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_147) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_148) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_149) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_150) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_151) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_152) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_153) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_154) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_155) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_156) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_157) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_158) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_159) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_160) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_161) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_162) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_163) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_164) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_165) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_166) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_167) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_168) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_169) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_170) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_171) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_172) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_173) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_174) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_175) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_176) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_177) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_178) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_179) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_180) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_181) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_182) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_183) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_184) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_185) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_186) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_187) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_188) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_189) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_190) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_191) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_192) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_193) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_194) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_195) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_196) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_197) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_198) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_199) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_200) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_201) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_202) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_203) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_204) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_205) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_206) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_207) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_208) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_209) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_210) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_211) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_212) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_213) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_214) {
  // -58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_215) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_216) {
  // 58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_217) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_218) {
  // 5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_219) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_220) {
  // -5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_221) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_222) {
  // 47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_223) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_224) {
  // -47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_225) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_226) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_227) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_228) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_229) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_230) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_231) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_232) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_233) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_234) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_235) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_236) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_237) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_238) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_239) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_240) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_241) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_242) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_243) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_244) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_245) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_246) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_247) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_248) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_249) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_250) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_251) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_252) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_253) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_254) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_255) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_256) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_257) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_258) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_259) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_260) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_261) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_262) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_263) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_264) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_265) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_266) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_267) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_268) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_269) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_270) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_271) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_272) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_273) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_274) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_275) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_276) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_277) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_278) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_279) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_280) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_281) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_282) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_283) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_284) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_285) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_286) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_287) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_288) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_289) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_290) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_291) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_292) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_293) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_294) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_295) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_296) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_297) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_298) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_299) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_300) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_301) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_302) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_303) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_304) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_305) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_306) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_307) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_308) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_309) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_310) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_311) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_312) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_313) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_314) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_315) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_316) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_317) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_318) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_319) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_320) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_321) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_322) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_323) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_324) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_325) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_326) {
  // -58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x80170000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_327) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 58391.31040040850204230282817
  s21_decimal decimal2 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_328) {
  // 58391.31040040850204230282817
  s21_decimal decimal1 = {{0x9AA5EE41, 0xF3B5B959, 0x12DE0417, 0x170000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_329) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_330) {
  // 5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0xA0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_331) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5596930204637261591.6377658369
  s21_decimal decimal2 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_332) {
  // -5596930204637261591.6377658369
  s21_decimal decimal1 = {{0x9B10D401, 0x8F08DC74, 0xB4D8B8B7, 0x800A0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_333) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_334) {
  // 47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x90000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_335) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -47209772988309285293.155713691
  s21_decimal decimal2 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_336) {
  // -47209772988309285293.155713691
  s21_decimal decimal1 = {{0x4A3C829B, 0xD2D8CC92, 0x988B0249, 0x80090000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_337) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_338) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_339) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_340) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_341) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_342) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_343) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_344) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_345) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_346) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_347) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_348) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_349) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_350) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_351) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_352) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_353) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_354) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_355) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_356) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_357) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_358) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_359) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_360) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_361) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_362) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_363) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_364) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_365) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_366) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_367) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_368) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_369) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_370) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_371) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_372) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_373) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_374) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_375) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_376) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_377) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_378) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_379) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_380) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_381) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_382) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_383) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_384) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_385) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_386) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_387) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_388) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_389) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_390) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_391) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_392) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_393) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_394) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_395) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_396) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_397) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_398) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_399) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = TRUE;

  test_is_less(decimal1, decimal2, check);
}

START_TEST(test_is_less_400) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = FALSE;

  test_is_less(decimal1, decimal2, check);
}

Suite *is_less_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("is_less_suite");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_is_less_1);
  tcase_add_test(tc_core, test_is_less_2);
  tcase_add_test(tc_core, test_is_less_3);
  tcase_add_test(tc_core, test_is_less_4);
  tcase_add_test(tc_core, test_is_less_5);
  tcase_add_test(tc_core, test_is_less_6);
  tcase_add_test(tc_core, test_is_less_7);
  tcase_add_test(tc_core, test_is_less_8);
  tcase_add_test(tc_core, test_is_less_9);
  tcase_add_test(tc_core, test_is_less_10);
  tcase_add_test(tc_core, test_is_less_11);
  tcase_add_test(tc_core, test_is_less_12);
  tcase_add_test(tc_core, test_is_less_13);
  tcase_add_test(tc_core, test_is_less_14);
  tcase_add_test(tc_core, test_is_less_15);
  tcase_add_test(tc_core, test_is_less_16);
  tcase_add_test(tc_core, test_is_less_17);
  tcase_add_test(tc_core, test_is_less_18);
  tcase_add_test(tc_core, test_is_less_19);
  tcase_add_test(tc_core, test_is_less_20);
  tcase_add_test(tc_core, test_is_less_21);
  tcase_add_test(tc_core, test_is_less_22);
  tcase_add_test(tc_core, test_is_less_23);
  tcase_add_test(tc_core, test_is_less_24);
  tcase_add_test(tc_core, test_is_less_25);
  tcase_add_test(tc_core, test_is_less_26);
  tcase_add_test(tc_core, test_is_less_27);
  tcase_add_test(tc_core, test_is_less_28);
  tcase_add_test(tc_core, test_is_less_29);
  tcase_add_test(tc_core, test_is_less_30);
  tcase_add_test(tc_core, test_is_less_31);
  tcase_add_test(tc_core, test_is_less_32);
  tcase_add_test(tc_core, test_is_less_33);
  tcase_add_test(tc_core, test_is_less_34);
  tcase_add_test(tc_core, test_is_less_35);
  tcase_add_test(tc_core, test_is_less_36);
  tcase_add_test(tc_core, test_is_less_37);
  tcase_add_test(tc_core, test_is_less_38);
  tcase_add_test(tc_core, test_is_less_39);
  tcase_add_test(tc_core, test_is_less_40);
  tcase_add_test(tc_core, test_is_less_41);
  tcase_add_test(tc_core, test_is_less_42);
  tcase_add_test(tc_core, test_is_less_43);
  tcase_add_test(tc_core, test_is_less_44);
  tcase_add_test(tc_core, test_is_less_45);
  tcase_add_test(tc_core, test_is_less_46);
  tcase_add_test(tc_core, test_is_less_47);
  tcase_add_test(tc_core, test_is_less_48);
  tcase_add_test(tc_core, test_is_less_49);
  tcase_add_test(tc_core, test_is_less_50);
  tcase_add_test(tc_core, test_is_less_51);
  tcase_add_test(tc_core, test_is_less_52);
  tcase_add_test(tc_core, test_is_less_53);
  tcase_add_test(tc_core, test_is_less_54);
  tcase_add_test(tc_core, test_is_less_55);
  tcase_add_test(tc_core, test_is_less_56);
  tcase_add_test(tc_core, test_is_less_57);
  tcase_add_test(tc_core, test_is_less_58);
  tcase_add_test(tc_core, test_is_less_59);
  tcase_add_test(tc_core, test_is_less_60);
  tcase_add_test(tc_core, test_is_less_61);
  tcase_add_test(tc_core, test_is_less_62);
  tcase_add_test(tc_core, test_is_less_63);
  tcase_add_test(tc_core, test_is_less_64);
  tcase_add_test(tc_core, test_is_less_65);
  tcase_add_test(tc_core, test_is_less_66);
  tcase_add_test(tc_core, test_is_less_67);
  tcase_add_test(tc_core, test_is_less_68);
  tcase_add_test(tc_core, test_is_less_69);
  tcase_add_test(tc_core, test_is_less_70);
  tcase_add_test(tc_core, test_is_less_71);
  tcase_add_test(tc_core, test_is_less_72);
  tcase_add_test(tc_core, test_is_less_73);
  tcase_add_test(tc_core, test_is_less_74);
  tcase_add_test(tc_core, test_is_less_75);
  tcase_add_test(tc_core, test_is_less_76);
  tcase_add_test(tc_core, test_is_less_77);
  tcase_add_test(tc_core, test_is_less_78);
  tcase_add_test(tc_core, test_is_less_79);
  tcase_add_test(tc_core, test_is_less_80);
  tcase_add_test(tc_core, test_is_less_81);
  tcase_add_test(tc_core, test_is_less_82);
  tcase_add_test(tc_core, test_is_less_83);
  tcase_add_test(tc_core, test_is_less_84);
  tcase_add_test(tc_core, test_is_less_85);
  tcase_add_test(tc_core, test_is_less_86);
  tcase_add_test(tc_core, test_is_less_87);
  tcase_add_test(tc_core, test_is_less_88);
  tcase_add_test(tc_core, test_is_less_89);
  tcase_add_test(tc_core, test_is_less_90);
  tcase_add_test(tc_core, test_is_less_91);
  tcase_add_test(tc_core, test_is_less_92);
  tcase_add_test(tc_core, test_is_less_93);
  tcase_add_test(tc_core, test_is_less_94);
  tcase_add_test(tc_core, test_is_less_95);
  tcase_add_test(tc_core, test_is_less_96);
  tcase_add_test(tc_core, test_is_less_97);
  tcase_add_test(tc_core, test_is_less_98);
  tcase_add_test(tc_core, test_is_less_99);
  tcase_add_test(tc_core, test_is_less_100);
  tcase_add_test(tc_core, test_is_less_101);
  tcase_add_test(tc_core, test_is_less_102);
  tcase_add_test(tc_core, test_is_less_103);
  tcase_add_test(tc_core, test_is_less_104);
  tcase_add_test(tc_core, test_is_less_105);
  tcase_add_test(tc_core, test_is_less_106);
  tcase_add_test(tc_core, test_is_less_107);
  tcase_add_test(tc_core, test_is_less_108);
  tcase_add_test(tc_core, test_is_less_109);
  tcase_add_test(tc_core, test_is_less_110);
  tcase_add_test(tc_core, test_is_less_111);
  tcase_add_test(tc_core, test_is_less_112);
  tcase_add_test(tc_core, test_is_less_113);
  tcase_add_test(tc_core, test_is_less_114);
  tcase_add_test(tc_core, test_is_less_115);
  tcase_add_test(tc_core, test_is_less_116);
  tcase_add_test(tc_core, test_is_less_117);
  tcase_add_test(tc_core, test_is_less_118);
  tcase_add_test(tc_core, test_is_less_119);
  tcase_add_test(tc_core, test_is_less_120);
  tcase_add_test(tc_core, test_is_less_121);
  tcase_add_test(tc_core, test_is_less_122);
  tcase_add_test(tc_core, test_is_less_123);
  tcase_add_test(tc_core, test_is_less_124);
  tcase_add_test(tc_core, test_is_less_125);
  tcase_add_test(tc_core, test_is_less_126);
  tcase_add_test(tc_core, test_is_less_127);
  tcase_add_test(tc_core, test_is_less_128);
  tcase_add_test(tc_core, test_is_less_129);
  tcase_add_test(tc_core, test_is_less_130);
  tcase_add_test(tc_core, test_is_less_131);
  tcase_add_test(tc_core, test_is_less_132);
  tcase_add_test(tc_core, test_is_less_133);
  tcase_add_test(tc_core, test_is_less_134);
  tcase_add_test(tc_core, test_is_less_135);
  tcase_add_test(tc_core, test_is_less_136);
  tcase_add_test(tc_core, test_is_less_137);
  tcase_add_test(tc_core, test_is_less_138);
  tcase_add_test(tc_core, test_is_less_139);
  tcase_add_test(tc_core, test_is_less_140);
  tcase_add_test(tc_core, test_is_less_141);
  tcase_add_test(tc_core, test_is_less_142);
  tcase_add_test(tc_core, test_is_less_143);
  tcase_add_test(tc_core, test_is_less_144);
  tcase_add_test(tc_core, test_is_less_145);
  tcase_add_test(tc_core, test_is_less_146);
  tcase_add_test(tc_core, test_is_less_147);
  tcase_add_test(tc_core, test_is_less_148);
  tcase_add_test(tc_core, test_is_less_149);
  tcase_add_test(tc_core, test_is_less_150);
  tcase_add_test(tc_core, test_is_less_151);
  tcase_add_test(tc_core, test_is_less_152);
  tcase_add_test(tc_core, test_is_less_153);
  tcase_add_test(tc_core, test_is_less_154);
  tcase_add_test(tc_core, test_is_less_155);
  tcase_add_test(tc_core, test_is_less_156);
  tcase_add_test(tc_core, test_is_less_157);
  tcase_add_test(tc_core, test_is_less_158);
  tcase_add_test(tc_core, test_is_less_159);
  tcase_add_test(tc_core, test_is_less_160);
  tcase_add_test(tc_core, test_is_less_161);
  tcase_add_test(tc_core, test_is_less_162);
  tcase_add_test(tc_core, test_is_less_163);
  tcase_add_test(tc_core, test_is_less_164);
  tcase_add_test(tc_core, test_is_less_165);
  tcase_add_test(tc_core, test_is_less_166);
  tcase_add_test(tc_core, test_is_less_167);
  tcase_add_test(tc_core, test_is_less_168);
  tcase_add_test(tc_core, test_is_less_169);
  tcase_add_test(tc_core, test_is_less_170);
  tcase_add_test(tc_core, test_is_less_171);
  tcase_add_test(tc_core, test_is_less_172);
  tcase_add_test(tc_core, test_is_less_173);
  tcase_add_test(tc_core, test_is_less_174);
  tcase_add_test(tc_core, test_is_less_175);
  tcase_add_test(tc_core, test_is_less_176);
  tcase_add_test(tc_core, test_is_less_177);
  tcase_add_test(tc_core, test_is_less_178);
  tcase_add_test(tc_core, test_is_less_179);
  tcase_add_test(tc_core, test_is_less_180);
  tcase_add_test(tc_core, test_is_less_181);
  tcase_add_test(tc_core, test_is_less_182);
  tcase_add_test(tc_core, test_is_less_183);
  tcase_add_test(tc_core, test_is_less_184);
  tcase_add_test(tc_core, test_is_less_185);
  tcase_add_test(tc_core, test_is_less_186);
  tcase_add_test(tc_core, test_is_less_187);
  tcase_add_test(tc_core, test_is_less_188);
  tcase_add_test(tc_core, test_is_less_189);
  tcase_add_test(tc_core, test_is_less_190);
  tcase_add_test(tc_core, test_is_less_191);
  tcase_add_test(tc_core, test_is_less_192);
  tcase_add_test(tc_core, test_is_less_193);
  tcase_add_test(tc_core, test_is_less_194);
  tcase_add_test(tc_core, test_is_less_195);
  tcase_add_test(tc_core, test_is_less_196);
  tcase_add_test(tc_core, test_is_less_197);
  tcase_add_test(tc_core, test_is_less_198);
  tcase_add_test(tc_core, test_is_less_199);
  tcase_add_test(tc_core, test_is_less_200);
  tcase_add_test(tc_core, test_is_less_201);
  tcase_add_test(tc_core, test_is_less_202);
  tcase_add_test(tc_core, test_is_less_203);
  tcase_add_test(tc_core, test_is_less_204);
  tcase_add_test(tc_core, test_is_less_205);
  tcase_add_test(tc_core, test_is_less_206);
  tcase_add_test(tc_core, test_is_less_207);
  tcase_add_test(tc_core, test_is_less_208);
  tcase_add_test(tc_core, test_is_less_209);
  tcase_add_test(tc_core, test_is_less_210);
  tcase_add_test(tc_core, test_is_less_211);
  tcase_add_test(tc_core, test_is_less_212);
  tcase_add_test(tc_core, test_is_less_213);
  tcase_add_test(tc_core, test_is_less_214);
  tcase_add_test(tc_core, test_is_less_215);
  tcase_add_test(tc_core, test_is_less_216);
  tcase_add_test(tc_core, test_is_less_217);
  tcase_add_test(tc_core, test_is_less_218);
  tcase_add_test(tc_core, test_is_less_219);
  tcase_add_test(tc_core, test_is_less_220);
  tcase_add_test(tc_core, test_is_less_221);
  tcase_add_test(tc_core, test_is_less_222);
  tcase_add_test(tc_core, test_is_less_223);
  tcase_add_test(tc_core, test_is_less_224);
  tcase_add_test(tc_core, test_is_less_225);
  tcase_add_test(tc_core, test_is_less_226);
  tcase_add_test(tc_core, test_is_less_227);
  tcase_add_test(tc_core, test_is_less_228);
  tcase_add_test(tc_core, test_is_less_229);
  tcase_add_test(tc_core, test_is_less_230);
  tcase_add_test(tc_core, test_is_less_231);
  tcase_add_test(tc_core, test_is_less_232);
  tcase_add_test(tc_core, test_is_less_233);
  tcase_add_test(tc_core, test_is_less_234);
  tcase_add_test(tc_core, test_is_less_235);
  tcase_add_test(tc_core, test_is_less_236);
  tcase_add_test(tc_core, test_is_less_237);
  tcase_add_test(tc_core, test_is_less_238);
  tcase_add_test(tc_core, test_is_less_239);
  tcase_add_test(tc_core, test_is_less_240);
  tcase_add_test(tc_core, test_is_less_241);
  tcase_add_test(tc_core, test_is_less_242);
  tcase_add_test(tc_core, test_is_less_243);
  tcase_add_test(tc_core, test_is_less_244);
  tcase_add_test(tc_core, test_is_less_245);
  tcase_add_test(tc_core, test_is_less_246);
  tcase_add_test(tc_core, test_is_less_247);
  tcase_add_test(tc_core, test_is_less_248);
  tcase_add_test(tc_core, test_is_less_249);
  tcase_add_test(tc_core, test_is_less_250);
  tcase_add_test(tc_core, test_is_less_251);
  tcase_add_test(tc_core, test_is_less_252);
  tcase_add_test(tc_core, test_is_less_253);
  tcase_add_test(tc_core, test_is_less_254);
  tcase_add_test(tc_core, test_is_less_255);
  tcase_add_test(tc_core, test_is_less_256);
  tcase_add_test(tc_core, test_is_less_257);
  tcase_add_test(tc_core, test_is_less_258);
  tcase_add_test(tc_core, test_is_less_259);
  tcase_add_test(tc_core, test_is_less_260);
  tcase_add_test(tc_core, test_is_less_261);
  tcase_add_test(tc_core, test_is_less_262);
  tcase_add_test(tc_core, test_is_less_263);
  tcase_add_test(tc_core, test_is_less_264);
  tcase_add_test(tc_core, test_is_less_265);
  tcase_add_test(tc_core, test_is_less_266);
  tcase_add_test(tc_core, test_is_less_267);
  tcase_add_test(tc_core, test_is_less_268);
  tcase_add_test(tc_core, test_is_less_269);
  tcase_add_test(tc_core, test_is_less_270);
  tcase_add_test(tc_core, test_is_less_271);
  tcase_add_test(tc_core, test_is_less_272);
  tcase_add_test(tc_core, test_is_less_273);
  tcase_add_test(tc_core, test_is_less_274);
  tcase_add_test(tc_core, test_is_less_275);
  tcase_add_test(tc_core, test_is_less_276);
  tcase_add_test(tc_core, test_is_less_277);
  tcase_add_test(tc_core, test_is_less_278);
  tcase_add_test(tc_core, test_is_less_279);
  tcase_add_test(tc_core, test_is_less_280);
  tcase_add_test(tc_core, test_is_less_281);
  tcase_add_test(tc_core, test_is_less_282);
  tcase_add_test(tc_core, test_is_less_283);
  tcase_add_test(tc_core, test_is_less_284);
  tcase_add_test(tc_core, test_is_less_285);
  tcase_add_test(tc_core, test_is_less_286);
  tcase_add_test(tc_core, test_is_less_287);
  tcase_add_test(tc_core, test_is_less_288);
  tcase_add_test(tc_core, test_is_less_289);
  tcase_add_test(tc_core, test_is_less_290);
  tcase_add_test(tc_core, test_is_less_291);
  tcase_add_test(tc_core, test_is_less_292);
  tcase_add_test(tc_core, test_is_less_293);
  tcase_add_test(tc_core, test_is_less_294);
  tcase_add_test(tc_core, test_is_less_295);
  tcase_add_test(tc_core, test_is_less_296);
  tcase_add_test(tc_core, test_is_less_297);
  tcase_add_test(tc_core, test_is_less_298);
  tcase_add_test(tc_core, test_is_less_299);
  tcase_add_test(tc_core, test_is_less_300);
  tcase_add_test(tc_core, test_is_less_301);
  tcase_add_test(tc_core, test_is_less_302);
  tcase_add_test(tc_core, test_is_less_303);
  tcase_add_test(tc_core, test_is_less_304);
  tcase_add_test(tc_core, test_is_less_305);
  tcase_add_test(tc_core, test_is_less_306);
  tcase_add_test(tc_core, test_is_less_307);
  tcase_add_test(tc_core, test_is_less_308);
  tcase_add_test(tc_core, test_is_less_309);
  tcase_add_test(tc_core, test_is_less_310);
  tcase_add_test(tc_core, test_is_less_311);
  tcase_add_test(tc_core, test_is_less_312);
  tcase_add_test(tc_core, test_is_less_313);
  tcase_add_test(tc_core, test_is_less_314);
  tcase_add_test(tc_core, test_is_less_315);
  tcase_add_test(tc_core, test_is_less_316);
  tcase_add_test(tc_core, test_is_less_317);
  tcase_add_test(tc_core, test_is_less_318);
  tcase_add_test(tc_core, test_is_less_319);
  tcase_add_test(tc_core, test_is_less_320);
  tcase_add_test(tc_core, test_is_less_321);
  tcase_add_test(tc_core, test_is_less_322);
  tcase_add_test(tc_core, test_is_less_323);
  tcase_add_test(tc_core, test_is_less_324);
  tcase_add_test(tc_core, test_is_less_325);
  tcase_add_test(tc_core, test_is_less_326);
  tcase_add_test(tc_core, test_is_less_327);
  tcase_add_test(tc_core, test_is_less_328);
  tcase_add_test(tc_core, test_is_less_329);
  tcase_add_test(tc_core, test_is_less_330);
  tcase_add_test(tc_core, test_is_less_331);
  tcase_add_test(tc_core, test_is_less_332);
  tcase_add_test(tc_core, test_is_less_333);
  tcase_add_test(tc_core, test_is_less_334);
  tcase_add_test(tc_core, test_is_less_335);
  tcase_add_test(tc_core, test_is_less_336);
  tcase_add_test(tc_core, test_is_less_337);
  tcase_add_test(tc_core, test_is_less_338);
  tcase_add_test(tc_core, test_is_less_339);
  tcase_add_test(tc_core, test_is_less_340);
  tcase_add_test(tc_core, test_is_less_341);
  tcase_add_test(tc_core, test_is_less_342);
  tcase_add_test(tc_core, test_is_less_343);
  tcase_add_test(tc_core, test_is_less_344);
  tcase_add_test(tc_core, test_is_less_345);
  tcase_add_test(tc_core, test_is_less_346);
  tcase_add_test(tc_core, test_is_less_347);
  tcase_add_test(tc_core, test_is_less_348);
  tcase_add_test(tc_core, test_is_less_349);
  tcase_add_test(tc_core, test_is_less_350);
  tcase_add_test(tc_core, test_is_less_351);
  tcase_add_test(tc_core, test_is_less_352);
  tcase_add_test(tc_core, test_is_less_353);
  tcase_add_test(tc_core, test_is_less_354);
  tcase_add_test(tc_core, test_is_less_355);
  tcase_add_test(tc_core, test_is_less_356);
  tcase_add_test(tc_core, test_is_less_357);
  tcase_add_test(tc_core, test_is_less_358);
  tcase_add_test(tc_core, test_is_less_359);
  tcase_add_test(tc_core, test_is_less_360);
  tcase_add_test(tc_core, test_is_less_361);
  tcase_add_test(tc_core, test_is_less_362);
  tcase_add_test(tc_core, test_is_less_363);
  tcase_add_test(tc_core, test_is_less_364);
  tcase_add_test(tc_core, test_is_less_365);
  tcase_add_test(tc_core, test_is_less_366);
  tcase_add_test(tc_core, test_is_less_367);
  tcase_add_test(tc_core, test_is_less_368);
  tcase_add_test(tc_core, test_is_less_369);
  tcase_add_test(tc_core, test_is_less_370);
  tcase_add_test(tc_core, test_is_less_371);
  tcase_add_test(tc_core, test_is_less_372);
  tcase_add_test(tc_core, test_is_less_373);
  tcase_add_test(tc_core, test_is_less_374);
  tcase_add_test(tc_core, test_is_less_375);
  tcase_add_test(tc_core, test_is_less_376);
  tcase_add_test(tc_core, test_is_less_377);
  tcase_add_test(tc_core, test_is_less_378);
  tcase_add_test(tc_core, test_is_less_379);
  tcase_add_test(tc_core, test_is_less_380);
  tcase_add_test(tc_core, test_is_less_381);
  tcase_add_test(tc_core, test_is_less_382);
  tcase_add_test(tc_core, test_is_less_383);
  tcase_add_test(tc_core, test_is_less_384);
  tcase_add_test(tc_core, test_is_less_385);
  tcase_add_test(tc_core, test_is_less_386);
  tcase_add_test(tc_core, test_is_less_387);
  tcase_add_test(tc_core, test_is_less_388);
  tcase_add_test(tc_core, test_is_less_389);
  tcase_add_test(tc_core, test_is_less_390);
  tcase_add_test(tc_core, test_is_less_391);
  tcase_add_test(tc_core, test_is_less_392);
  tcase_add_test(tc_core, test_is_less_393);
  tcase_add_test(tc_core, test_is_less_394);
  tcase_add_test(tc_core, test_is_less_395);
  tcase_add_test(tc_core, test_is_less_396);
  tcase_add_test(tc_core, test_is_less_397);
  tcase_add_test(tc_core, test_is_less_398);
  tcase_add_test(tc_core, test_is_less_399);
  tcase_add_test(tc_core, test_is_less_400);

  suite_add_tcase(s, tc_core);
  return s;
}

void test_is_less(s21_decimal decimal1, s21_decimal decimal2, int check) {
  int code = s21_is_less(decimal1, decimal2);
  ck_assert_int_eq(code, check);
}