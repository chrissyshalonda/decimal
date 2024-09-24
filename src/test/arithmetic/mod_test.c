#include "../test.h"

START_TEST(test_mod1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033.5
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod4) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033.5
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950334
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod6) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950334
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 26409387504754779197847983445
  s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod8) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -26409387504754779197847983445
  s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod9) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 39614081257132168798919458816
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x80000000, 0x0}};
  // 39614081257132168794624491519
  s21_decimal decimal_check = {{0x7FFFFFFF, 0xFFFFFFFF, 0x7FFFFFFF, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod10) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -39614081257132168798919458816
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x80000000, 0x80000000}};
  // 39614081257132168794624491519
  s21_decimal decimal_check = {{0x7FFFFFFF, 0xFFFFFFFF, 0x7FFFFFFF, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod11) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 39614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x0}};
  // 39614081257132168796771975167
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x7FFFFFFF, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod12) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -39614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x80000000}};
  // 39614081257132168796771975167
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0x7FFFFFFF, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod13) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 3.9614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x1C0000}};
  // 2.9614081257132168796771975168
  s21_decimal decimal_check = {{0xF0000000, 0xC1DAFD9E, 0x5FB031A1, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod14) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -3.9614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x801C0000}};
  // 2.9614081257132168796771975168
  s21_decimal decimal_check = {{0xF0000000, 0xC1DAFD9E, 0x5FB031A1, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod15) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 4294967297
  s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x0}};
  // 4294967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod16) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -4294967297
  s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x80000000}};
  // 4294967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod17) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162495817593524129366015
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
  // 18446744069414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod18) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162495817593524129366015
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80000000}};
  // 18446744069414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod19) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 4294967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x0}};
  // 4294967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod20) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -4294967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000000}};
  // 4294967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod21) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 2147483648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x0}};
  // 2147483647
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod22) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -2147483648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80000000}};
  // 2147483647
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod23) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 8589934591
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x0}};
  // 1073741823
  s21_decimal decimal_check = {{0x3FFFFFFF, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod24) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -8589934591
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x80000000}};
  // 1073741823
  s21_decimal decimal_check = {{0x3FFFFFFF, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod25) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x0}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod26) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod27) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 2
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x0}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod28) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -2
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod29) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.9999999999999999999999999000
  s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 0.4081257132168796771977148000
  s21_decimal decimal_check = {{0x701E3660, 0x755E302F, 0xD2FEFD0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod30) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.9999999999999999999999999000
  s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 0.4081257132168796771977148000
  s21_decimal decimal_check = {{0x701E3660, 0x755E302F, 0xD2FEFD0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod31) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 0.9614081257132168796771975169
  s21_decimal decimal_check = {{0xD0000001, 0x4590F8DC, 0x1F1094E5, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod32) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 0.9614081257132168796771975169
  s21_decimal decimal_check = {{0xD0000001, 0x4590F8DC, 0x1F1094E5, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod33) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 0.9614081257132168796771975169
  s21_decimal decimal_check = {{0xD0000001, 0x4590F8DC, 0x1F1094E5, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod34) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 0.9614081257132168796771975169
  s21_decimal decimal_check = {{0xD0000001, 0x4590F8DC, 0x1F1094E5, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod35) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000008
  s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod36) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000008
  s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod37) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod38) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod39) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000010
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod40) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000010
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod41) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 0.9228162514264337593543950342
  s21_decimal decimal_check = {{0x90000006, 0x4CFCEF58, 0x1DD15B6C, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod42) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 0.9228162514264337593543950342
  s21_decimal decimal_check = {{0x90000006, 0x4CFCEF58, 0x1DD15B6C, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod43) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7.9228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod44) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7.9228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod45) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 60.000000000000000000000000005
  s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x1B0000}};
  // 8.397653123811305200538004140
  s21_decimal decimal_check = {{0x42AAAAAC, 0x7E22E3C, 0x1B226038, 0x1B0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod46) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -60.000000000000000000000000005
  s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x801B0000}};
  // 8.397653123811305200538004140
  s21_decimal decimal_check = {{0x42AAAAAC, 0x7E22E3C, 0x1B226038, 0x1B0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod47) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
  // 0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod48) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod49) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x30000}};
  // 0.000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod50) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80030000}};
  // 0.000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod51) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.019
  s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x30000}};
  // 0.015
  s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod52) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.019
  s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x80030000}};
  // 0.015
  s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod53) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 39614081266355.540835774234624
  s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0xF0000}};
  // 28232649134943.668301643481088
  s21_decimal decimal_check = {{0x5B398000, 0x5B398000, 0x5B398000, 0xF0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod54) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -39614081266355.540835774234624
  s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0x800F0000}};
  // 28232649134943.668301643481088
  s21_decimal decimal_check = {{0x5B398000, 0x5B398000, 0x5B398000, 0xF0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod55) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 42.94967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000}};
  // 41.94967296
  s21_decimal decimal_check = {{0xFA0A1F00, 0x0, 0x0, 0x80000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod56) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -42.94967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80080000}};
  // 41.94967296
  s21_decimal decimal_check = {{0xFA0A1F00, 0x0, 0x0, 0x80000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod57) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 214748.3648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x40000}};
  // 214747.3648
  s21_decimal decimal_check = {{0x7FFFD8F0, 0x0, 0x0, 0x40000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod58) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -214748.3648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80040000}};
  // 214747.3648
  s21_decimal decimal_check = {{0x7FFFD8F0, 0x0, 0x0, 0x40000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod59) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 42.94967295
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};
  // 0.00000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod60) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -42.94967295
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};
  // 0.00000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod61) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999
  s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x40000}};
  // 0.7290
  s21_decimal decimal_check = {{0x1C7A, 0x0, 0x0, 0x40000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod62) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999
  s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x80040000}};
  // 0.7290
  s21_decimal decimal_check = {{0x1C7A, 0x0, 0x0, 0x40000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod63) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x90000}};
  // 0.000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x90000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod64) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80090000}};
  // 0.000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x90000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod65) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 8460.288
  s21_decimal decimal2 = {{0x811800, 0x0, 0x0, 0x30000}};
  // 7044.120
  s21_decimal decimal_check = {{0x6B7C18, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod66) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -8460.288
  s21_decimal decimal2 = {{0x811800, 0x0, 0x0, 0x80030000}};
  // 7044.120
  s21_decimal decimal_check = {{0x6B7C18, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod67) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 8.000
  s21_decimal decimal2 = {{0x1F40, 0x0, 0x0, 0x30000}};
  // 7.000
  s21_decimal decimal_check = {{0x1B58, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod68) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -8.000
  s21_decimal decimal2 = {{0x1F40, 0x0, 0x0, 0x80030000}};
  // 7.000
  s21_decimal decimal_check = {{0x1B58, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod69) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.001
  s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x30000}};
  // 0.091
  s21_decimal decimal_check = {{0x5B, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod70) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.001
  s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x80030000}};
  // 0.091
  s21_decimal decimal_check = {{0x5B, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod71) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  // 0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod72) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod73) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 10
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x0}};
  // 5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod74) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -10
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80000000}};
  // 5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod75) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod76) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod77) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod78) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod79) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 3359055301292796708334.2402749
  s21_decimal decimal2 = {{0x43114BD, 0x948E9182, 0x6C897447, 0x70000}};
  // 2834584564307424183811.2473691
  s21_decimal decimal_check = {{0x9376825B, 0x5BA570D3, 0x5B97224B, 0x70000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod80) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -3359055301292796708334.2402749
  s21_decimal decimal2 = {{0x43114BD, 0x948E9182, 0x6C897447, 0x80070000}};
  // 2834584564307424183811.2473691
  s21_decimal decimal_check = {{0x9376825B, 0x5BA570D3, 0x5B97224B, 0x70000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod81) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -29293803674175591779113420402
  s21_decimal decimal2 = {{0x85B0C672, 0x31FBFF52, 0x5EA74437, 0x80000000}};
  // 20640555165913154035317109531
  s21_decimal decimal_check = {{0xF49E731B, 0x9C08015A, 0x42B17791, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod82) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 29293803674175591779113420402
  s21_decimal decimal2 = {{0x85B0C672, 0x31FBFF52, 0x5EA74437, 0x0}};
  // 20640555165913154035317109531
  s21_decimal decimal_check = {{0xF49E731B, 0x9C08015A, 0x42B17791, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod83) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 25817.443351246080434413985401
  s21_decimal decimal2 = {{0x29675E79, 0x78DCFEE6, 0x536BB048, 0x180000}};
  // 24274.269098408429436559324273
  s21_decimal decimal_check = {{0xAE567471, 0x997FEE25, 0x4E6F346C, 0x180000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod84) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -25817.443351246080434413985401
  s21_decimal decimal2 = {{0x29675E79, 0x78DCFEE6, 0x536BB048, 0x80180000}};
  // 24274.269098408429436559324273
  s21_decimal decimal_check = {{0xAE567471, 0x997FEE25, 0x4E6F346C, 0x180000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod85) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod86) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod87) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033.5
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod88) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033.5
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod89) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950334
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod90) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950334
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod91) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 26409387504754779197847983445
  s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // -0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod92) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -26409387504754779197847983445
  s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod93) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 39614081257132168798919458816
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x80000000, 0x0}};
  // -39614081257132168794624491519
  s21_decimal decimal_check = {
      {0x7FFFFFFF, 0xFFFFFFFF, 0x7FFFFFFF, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod94) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -39614081257132168798919458816
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x80000000, 0x80000000}};
  // -39614081257132168794624491519
  s21_decimal decimal_check = {
      {0x7FFFFFFF, 0xFFFFFFFF, 0x7FFFFFFF, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod95) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 39614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x0}};
  // -39614081257132168796771975167
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0x7FFFFFFF, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod96) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -39614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x80000000}};
  // -39614081257132168796771975167
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0x7FFFFFFF, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod97) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 3.9614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x1C0000}};
  // -2.9614081257132168796771975168
  s21_decimal decimal_check = {
      {0xF0000000, 0xC1DAFD9E, 0x5FB031A1, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod98) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -3.9614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x801C0000}};
  // -2.9614081257132168796771975168
  s21_decimal decimal_check = {
      {0xF0000000, 0xC1DAFD9E, 0x5FB031A1, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod99) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 4294967297
  s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x0}};
  // -4294967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod100) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -4294967297
  s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x80000000}};
  // -4294967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod101) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162495817593524129366015
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
  // -18446744069414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod102) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162495817593524129366015
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80000000}};
  // -18446744069414584320
  s21_decimal decimal_check = {{0x0, 0xFFFFFFFF, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod103) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 4294967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x0}};
  // -4294967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod104) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -4294967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000000}};
  // -4294967295
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod105) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 2147483648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x0}};
  // -2147483647
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod106) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -2147483648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80000000}};
  // -2147483647
  s21_decimal decimal_check = {{0x7FFFFFFF, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod107) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 8589934591
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x0}};
  // -1073741823
  s21_decimal decimal_check = {{0x3FFFFFFF, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod108) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -8589934591
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x80000000}};
  // -1073741823
  s21_decimal decimal_check = {{0x3FFFFFFF, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod109) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x0}};
  // -0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod110) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // -0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod111) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 2
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x0}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod112) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -2
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.9999999999999999999999999000
  s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -0.4081257132168796771977148000
  s21_decimal decimal_check = {{0x701E3660, 0x755E302F, 0xD2FEFD0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod114) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.9999999999999999999999999000
  s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -0.4081257132168796771977148000
  s21_decimal decimal_check = {{0x701E3660, 0x755E302F, 0xD2FEFD0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod115) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -0.9614081257132168796771975169
  s21_decimal decimal_check = {
      {0xD0000001, 0x4590F8DC, 0x1F1094E5, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod116) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -0.9614081257132168796771975169
  s21_decimal decimal_check = {
      {0xD0000001, 0x4590F8DC, 0x1F1094E5, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -0.9614081257132168796771975169
  s21_decimal decimal_check = {
      {0xD0000001, 0x4590F8DC, 0x1F1094E5, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod118) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -0.9614081257132168796771975169
  s21_decimal decimal_check = {
      {0xD0000001, 0x4590F8DC, 0x1F1094E5, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000008
  s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod120) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000008
  s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod122) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000010
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod124) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000010
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -0.9228162514264337593543950342
  s21_decimal decimal_check = {
      {0x90000006, 0x4CFCEF58, 0x1DD15B6C, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod126) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -0.9228162514264337593543950342
  s21_decimal decimal_check = {
      {0x90000006, 0x4CFCEF58, 0x1DD15B6C, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod127) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7.9228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod128) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7.9228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod129) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 60.000000000000000000000000005
  s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x1B0000}};
  // -8.397653123811305200538004140
  s21_decimal decimal_check = {{0x42AAAAAC, 0x7E22E3C, 0x1B226038, 0x801B0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod130) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -60.000000000000000000000000005
  s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x801B0000}};
  // -8.397653123811305200538004140
  s21_decimal decimal_check = {{0x42AAAAAC, 0x7E22E3C, 0x1B226038, 0x801B0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod131) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod132) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod133) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x30000}};
  // -0.000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod134) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80030000}};
  // -0.000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod135) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.019
  s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x30000}};
  // -0.015
  s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod136) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.019
  s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x80030000}};
  // -0.015
  s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod137) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 39614081266355.540835774234624
  s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0xF0000}};
  // -28232649134943.668301643481088
  s21_decimal decimal_check = {
      {0x5B398000, 0x5B398000, 0x5B398000, 0x800F0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod138) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -39614081266355.540835774234624
  s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0x800F0000}};
  // -28232649134943.668301643481088
  s21_decimal decimal_check = {
      {0x5B398000, 0x5B398000, 0x5B398000, 0x800F0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod139) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 42.94967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000}};
  // -41.94967296
  s21_decimal decimal_check = {{0xFA0A1F00, 0x0, 0x0, 0x80080000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod140) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -42.94967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80080000}};
  // -41.94967296
  s21_decimal decimal_check = {{0xFA0A1F00, 0x0, 0x0, 0x80080000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod141) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 214748.3648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x40000}};
  // -214747.3648
  s21_decimal decimal_check = {{0x7FFFD8F0, 0x0, 0x0, 0x80040000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod142) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -214748.3648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80040000}};
  // -214747.3648
  s21_decimal decimal_check = {{0x7FFFD8F0, 0x0, 0x0, 0x80040000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod143) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 42.94967295
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};
  // -0.00000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80080000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod144) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -42.94967295
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};
  // -0.00000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80080000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod145) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.9999
  s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x40000}};
  // -0.7290
  s21_decimal decimal_check = {{0x1C7A, 0x0, 0x0, 0x80040000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod146) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999
  s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x80040000}};
  // -0.7290
  s21_decimal decimal_check = {{0x1C7A, 0x0, 0x0, 0x80040000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod147) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x90000}};
  // -0.000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80090000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod148) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80090000}};
  // -0.000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80090000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod149) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 8460.288
  s21_decimal decimal2 = {{0x811800, 0x0, 0x0, 0x30000}};
  // -7044.120
  s21_decimal decimal_check = {{0x6B7C18, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod150) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -8460.288
  s21_decimal decimal2 = {{0x811800, 0x0, 0x0, 0x80030000}};
  // -7044.120
  s21_decimal decimal_check = {{0x6B7C18, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod151) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 8.000
  s21_decimal decimal2 = {{0x1F40, 0x0, 0x0, 0x30000}};
  // -7.000
  s21_decimal decimal_check = {{0x1B58, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod152) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -8.000
  s21_decimal decimal2 = {{0x1F40, 0x0, 0x0, 0x80030000}};
  // -7.000
  s21_decimal decimal_check = {{0x1B58, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod153) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.001
  s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x30000}};
  // -0.091
  s21_decimal decimal_check = {{0x5B, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod154) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.001
  s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x80030000}};
  // -0.091
  s21_decimal decimal_check = {{0x5B, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod155) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  // -0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod156) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod157) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 10
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x0}};
  // -5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod158) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -10
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80000000}};
  // -5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod159) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod160) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod161) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod162) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod163) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 3359055301292796708334.2402749
  s21_decimal decimal2 = {{0x43114BD, 0x948E9182, 0x6C897447, 0x70000}};
  // -2834584564307424183811.2473691
  s21_decimal decimal_check = {
      {0x9376825B, 0x5BA570D3, 0x5B97224B, 0x80070000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod164) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -3359055301292796708334.2402749
  s21_decimal decimal2 = {{0x43114BD, 0x948E9182, 0x6C897447, 0x80070000}};
  // -2834584564307424183811.2473691
  s21_decimal decimal_check = {
      {0x9376825B, 0x5BA570D3, 0x5B97224B, 0x80070000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod165) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -29293803674175591779113420402
  s21_decimal decimal2 = {{0x85B0C672, 0x31FBFF52, 0x5EA74437, 0x80000000}};
  // -20640555165913154035317109531
  s21_decimal decimal_check = {
      {0xF49E731B, 0x9C08015A, 0x42B17791, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod166) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 29293803674175591779113420402
  s21_decimal decimal2 = {{0x85B0C672, 0x31FBFF52, 0x5EA74437, 0x0}};
  // -20640555165913154035317109531
  s21_decimal decimal_check = {
      {0xF49E731B, 0x9C08015A, 0x42B17791, 0x80000000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod167) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 25817.443351246080434413985401
  s21_decimal decimal2 = {{0x29675E79, 0x78DCFEE6, 0x536BB048, 0x180000}};
  // -24274.269098408429436559324273
  s21_decimal decimal_check = {
      {0xAE567471, 0x997FEE25, 0x4E6F346C, 0x80180000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod168) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -25817.443351246080434413985401
  s21_decimal decimal2 = {{0x29675E79, 0x78DCFEE6, 0x536BB048, 0x80180000}};
  // -24274.269098408429436559324273
  s21_decimal decimal_check = {
      {0xAE567471, 0x997FEE25, 0x4E6F346C, 0x80180000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod169) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod170) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod171) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7922816251426433759354395033.5
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod172) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -7922816251426433759354395033.5
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod173) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 79228162514264337593543950334
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod174) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -79228162514264337593543950334
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod175) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 26409387504754779197847983445
  s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod176) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -26409387504754779197847983445
  s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod177) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 39614081257132168798919458816
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x80000000, 0x0}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod178) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -39614081257132168798919458816
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x80000000, 0x80000000}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod179) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 39614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x0}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod180) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -39614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x80000000}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod181) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 3.9614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x1C0000}};
  // 3.8614081257132168796771975168
  s21_decimal decimal_check = {{0x18000000, 0x602F7FC3, 0x7CC4D1C3, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod182) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -3.9614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x801C0000}};
  // 3.8614081257132168796771975168
  s21_decimal decimal_check = {{0x18000000, 0x602F7FC3, 0x7CC4D1C3, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod183) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 4294967297
  s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x0}};
  // 429496729.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod184) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -4294967297
  s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x80000000}};
  // 429496729.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod185) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 79228162495817593524129366015
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod186) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -79228162495817593524129366015
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod187) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 4294967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x0}};
  // 2576980377.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x5, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod188) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -4294967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000000}};
  // 2576980377.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x5, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod189) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 2147483648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x0}};
  // 429496729.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod190) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -2147483648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80000000}};
  // 429496729.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod191) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 8589934591
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x0}};
  // 1825361100.5
  s21_decimal decimal_check = {{0x3FFFFFFD, 0x4, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod192) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -8589934591
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x80000000}};
  // 1825361100.5
  s21_decimal decimal_check = {{0x3FFFFFFD, 0x4, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod193) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x0}};
  // 3.5
  s21_decimal decimal_check = {{0x23, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod194) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // 3.5
  s21_decimal decimal_check = {{0x23, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod195) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 2
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x0}};
  // 1.5
  s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod196) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -2
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // 1.5
  s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod197) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 1.9999999999999999999999999000
  s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 1.6408125713216879677197714000
  s21_decimal decimal_check = {{0xD8030250, 0x3BF7D56C, 0x35047BC5, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod198) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -1.9999999999999999999999999000
  s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 1.6408125713216879677197714000
  s21_decimal decimal_check = {{0xD8030250, 0x3BF7D56C, 0x35047BC5, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod199) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 1.8961408125713216879677197516
  s21_decimal decimal_check = {{0x64CCCCCC, 0x2A04505E, 0x3D44825A, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod200) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 1.8961408125713216879677197516
  s21_decimal decimal_check = {{0x64CCCCCC, 0x2A04505E, 0x3D44825A, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod201) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 1.0000000000000000000000000001
  s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 0.7077183748573566240645604968
  s21_decimal decimal_check = {{0xFE666668, 0xC39DE9F7, 0x16DE1BF3, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod202) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -1.0000000000000000000000000001
  s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 0.7077183748573566240645604968
  s21_decimal decimal_check = {{0xFE666668, 0xC39DE9F7, 0x16DE1BF3, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod203) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 0.0000000000000000000000000008
  s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod204) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0.0000000000000000000000000008
  s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod205) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod206) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod207) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 0.0000000000000000000000000010
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod208) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0.0000000000000000000000000010
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod209) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 0.2922816251426433759354395034
  s21_decimal decimal_check = {{0x1199999A, 0x7A871869, 0x971B26A, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod210) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 0.2922816251426433759354395034
  s21_decimal decimal_check = {{0x1199999A, 0x7A871869, 0x971B26A, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod211) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7.9228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod212) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -7.9228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod213) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 60.000000000000000000000000005
  s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x1B0000}};
  // 12.839765312381130520053800415
  s21_decimal decimal_check = {{0x19DDDDDF, 0x4B5CA114, 0x297CCE10, 0x1B0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod214) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -60.000000000000000000000000005
  s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x801B0000}};
  // 12.839765312381130520053800415
  s21_decimal decimal_check = {{0x19DDDDDF, 0x4B5CA114, 0x297CCE10, 0x1B0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod215) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 0.5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
  // 0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod216) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0.5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod217) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 0.001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x30000}};
  // 0.000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod218) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0.001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80030000}};
  // 0.000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod219) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 0.019
  s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x30000}};
  // 0.011
  s21_decimal decimal_check = {{0xB, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod220) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0.019
  s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x80030000}};
  // 0.011
  s21_decimal decimal_check = {{0xB, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod221) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 39614081266355.540835774234624
  s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0xF0000}};
  // 34514529926578.799498783735808
  s21_decimal decimal_check = {{0x6F85C000, 0x6F85C000, 0x6F85C000, 0xF0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod222) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -39614081266355.540835774234624
  s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0x800F0000}};
  // 34514529926578.799498783735808
  s21_decimal decimal_check = {{0x6F85C000, 0x6F85C000, 0x6F85C000, 0xF0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod223) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 42.94967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000}};
  // 42.84967296
  s21_decimal decimal_check = {{0xFF676980, 0x0, 0x0, 0x80000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod224) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -42.94967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80080000}};
  // 42.84967296
  s21_decimal decimal_check = {{0xFF676980, 0x0, 0x0, 0x80000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod225) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 214748.3648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x40000}};
  // 214748.2648
  s21_decimal decimal_check = {{0x7FFFFC18, 0x0, 0x0, 0x40000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod226) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -214748.3648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80040000}};
  // 214748.2648
  s21_decimal decimal_check = {{0x7FFFFC18, 0x0, 0x0, 0x40000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod227) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 42.94967295
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};
  // 0.00000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod228) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -42.94967295
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};
  // 0.00000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod229) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 0.9999
  s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x40000}};
  // 0.0729
  s21_decimal decimal_check = {{0x2D9, 0x0, 0x0, 0x40000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod230) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0.9999
  s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x80040000}};
  // 0.0729
  s21_decimal decimal_check = {{0x2D9, 0x0, 0x0, 0x40000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod231) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 1.431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x90000}};
  // 0.000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x90000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod232) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -1.431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80090000}};
  // 0.000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x90000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod233) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 8460.288
  s21_decimal decimal2 = {{0x811800, 0x0, 0x0, 0x30000}};
  // 704.412
  s21_decimal decimal_check = {{0xABF9C, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod234) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -8460.288
  s21_decimal decimal2 = {{0x811800, 0x0, 0x0, 0x80030000}};
  // 704.412
  s21_decimal decimal_check = {{0xABF9C, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod235) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 8.000
  s21_decimal decimal2 = {{0x1F40, 0x0, 0x0, 0x30000}};
  // 1.500
  s21_decimal decimal_check = {{0x5DC, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod236) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -8.000
  s21_decimal decimal2 = {{0x1F40, 0x0, 0x0, 0x80030000}};
  // 1.500
  s21_decimal decimal_check = {{0x5DC, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod237) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 1.001
  s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x30000}};
  // 0.910
  s21_decimal decimal_check = {{0x38E, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod238) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -1.001
  s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x80030000}};
  // 0.910
  s21_decimal decimal_check = {{0x38E, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod239) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  // 0.5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod240) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 0.5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod241) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 10
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x0}};
  // 3.5
  s21_decimal decimal_check = {{0x23, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod242) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -10
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80000000}};
  // 3.5
  s21_decimal decimal_check = {{0x23, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod243) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod244) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod245) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod246) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod247) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 3359055301292796708334.2402749
  s21_decimal decimal2 = {{0x43114BD, 0x948E9182, 0x6C897447, 0x70000}};
  // 619363986560022089214.5487644
  s21_decimal decimal_check = {{0xC25D8F1C, 0xE4D2003B, 0x14034241, 0x70000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod248) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -3359055301292796708334.2402749
  s21_decimal decimal2 = {{0x43114BD, 0x948E9182, 0x6C897447, 0x80070000}};
  // 619363986560022089214.5487644
  s21_decimal decimal_check = {{0xC25D8F1C, 0xE4D2003B, 0x14034241, 0x70000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod249) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -29293803674175591779113420402
  s21_decimal decimal2 = {{0x85B0C672, 0x31FBFF52, 0x5EA74437, 0x80000000}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod250) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 29293803674175591779113420402
  s21_decimal decimal2 = {{0x85B0C672, 0x31FBFF52, 0x5EA74437, 0x0}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod251) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 25817.443351246080434413985401
  s21_decimal decimal2 = {{0x29675E79, 0x78DCFEE6, 0x536BB048, 0x180000}};
  // 20499.637255713099247745722208
  s21_decimal decimal_check = {{0x7B376760, 0x63F44A3E, 0x423CE70A, 0x180000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod252) {
  // 7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -25817.443351246080434413985401
  s21_decimal decimal2 = {{0x29675E79, 0x78DCFEE6, 0x536BB048, 0x80180000}};
  // 20499.637255713099247745722208
  s21_decimal decimal_check = {{0x7B376760, 0x63F44A3E, 0x423CE70A, 0x180000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod253) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod254) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod255) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 7922816251426433759354395033.5
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod256) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -7922816251426433759354395033.5
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod257) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 79228162514264337593543950334
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod258) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -79228162514264337593543950334
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod259) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 26409387504754779197847983445
  s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod260) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -26409387504754779197847983445
  s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod261) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 39614081257132168798919458816
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x80000000, 0x0}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod262) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -39614081257132168798919458816
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x80000000, 0x80000000}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod263) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 39614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x0}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod264) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -39614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x80000000}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod265) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 3.9614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x1C0000}};
  // -3.8614081257132168796771975168
  s21_decimal decimal_check = {
      {0x18000000, 0x602F7FC3, 0x7CC4D1C3, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod266) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -3.9614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x801C0000}};
  // -3.8614081257132168796771975168
  s21_decimal decimal_check = {
      {0x18000000, 0x602F7FC3, 0x7CC4D1C3, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod267) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 4294967297
  s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x0}};
  // -429496729.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod268) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -4294967297
  s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x80000000}};
  // -429496729.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod269) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 79228162495817593524129366015
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod270) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -79228162495817593524129366015
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod271) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 4294967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x0}};
  // -2576980377.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x5, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod272) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -4294967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000000}};
  // -2576980377.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x5, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod273) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 2147483648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x0}};
  // -429496729.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod274) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -2147483648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80000000}};
  // -429496729.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod275) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 8589934591
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x0}};
  // -1825361100.5
  s21_decimal decimal_check = {{0x3FFFFFFD, 0x4, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod276) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -8589934591
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x80000000}};
  // -1825361100.5
  s21_decimal decimal_check = {{0x3FFFFFFD, 0x4, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod277) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x0}};
  // -3.5
  s21_decimal decimal_check = {{0x23, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod278) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // -3.5
  s21_decimal decimal_check = {{0x23, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod279) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 2
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x0}};
  // -1.5
  s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod280) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -2
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // -1.5
  s21_decimal decimal_check = {{0xF, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod281) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 1.9999999999999999999999999000
  s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -1.6408125713216879677197714000
  s21_decimal decimal_check = {
      {0xD8030250, 0x3BF7D56C, 0x35047BC5, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod282) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -1.9999999999999999999999999000
  s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -1.6408125713216879677197714000
  s21_decimal decimal_check = {
      {0xD8030250, 0x3BF7D56C, 0x35047BC5, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod283) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // -1.8961408125713216879677197516
  s21_decimal decimal_check = {
      {0x64CCCCCC, 0x2A04505E, 0x3D44825A, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod284) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // -1.8961408125713216879677197516
  s21_decimal decimal_check = {
      {0x64CCCCCC, 0x2A04505E, 0x3D44825A, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod285) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 1.0000000000000000000000000001
  s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -0.7077183748573566240645604968
  s21_decimal decimal_check = {
      {0xFE666668, 0xC39DE9F7, 0x16DE1BF3, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod286) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -1.0000000000000000000000000001
  s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -0.7077183748573566240645604968
  s21_decimal decimal_check = {
      {0xFE666668, 0xC39DE9F7, 0x16DE1BF3, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod287) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0.0000000000000000000000000008
  s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod288) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0.0000000000000000000000000008
  s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod289) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod290) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod291) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0.0000000000000000000000000010
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod292) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0.0000000000000000000000000010
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod293) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -0.2922816251426433759354395034
  s21_decimal decimal_check = {{0x1199999A, 0x7A871869, 0x971B26A, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod294) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -0.2922816251426433759354395034
  s21_decimal decimal_check = {{0x1199999A, 0x7A871869, 0x971B26A, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod295) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 7.9228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod296) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -7.9228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod297) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 60.000000000000000000000000005
  s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x1B0000}};
  // -12.839765312381130520053800415
  s21_decimal decimal_check = {
      {0x19DDDDDF, 0x4B5CA114, 0x297CCE10, 0x801B0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod298) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -60.000000000000000000000000005
  s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x801B0000}};
  // -12.839765312381130520053800415
  s21_decimal decimal_check = {
      {0x19DDDDDF, 0x4B5CA114, 0x297CCE10, 0x801B0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod299) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0.5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
  // -0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod300) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0.5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // -0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod301) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0.001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x30000}};
  // -0.000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod302) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0.001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80030000}};
  // -0.000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod303) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0.019
  s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x30000}};
  // -0.011
  s21_decimal decimal_check = {{0xB, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod304) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0.019
  s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x80030000}};
  // -0.011
  s21_decimal decimal_check = {{0xB, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod305) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 39614081266355.540835774234624
  s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0xF0000}};
  // -34514529926578.799498783735808
  s21_decimal decimal_check = {
      {0x6F85C000, 0x6F85C000, 0x6F85C000, 0x800F0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod306) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -39614081266355.540835774234624
  s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0x800F0000}};
  // -34514529926578.799498783735808
  s21_decimal decimal_check = {
      {0x6F85C000, 0x6F85C000, 0x6F85C000, 0x800F0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod307) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 42.94967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000}};
  // -42.84967296
  s21_decimal decimal_check = {{0xFF676980, 0x0, 0x0, 0x80080000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod308) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -42.94967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80080000}};
  // -42.84967296
  s21_decimal decimal_check = {{0xFF676980, 0x0, 0x0, 0x80080000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod309) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 214748.3648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x40000}};
  // -214748.2648
  s21_decimal decimal_check = {{0x7FFFFC18, 0x0, 0x0, 0x80040000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod310) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -214748.3648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80040000}};
  // -214748.2648
  s21_decimal decimal_check = {{0x7FFFFC18, 0x0, 0x0, 0x80040000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod311) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 42.94967295
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};
  // -0.00000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80080000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod312) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -42.94967295
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};
  // -0.00000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80080000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod313) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0.9999
  s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x40000}};
  // -0.0729
  s21_decimal decimal_check = {{0x2D9, 0x0, 0x0, 0x80040000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod314) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0.9999
  s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x80040000}};
  // -0.0729
  s21_decimal decimal_check = {{0x2D9, 0x0, 0x0, 0x80040000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod315) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 1.431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x90000}};
  // -0.000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80090000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod316) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -1.431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80090000}};
  // -0.000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80090000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod317) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 8460.288
  s21_decimal decimal2 = {{0x811800, 0x0, 0x0, 0x30000}};
  // -704.412
  s21_decimal decimal_check = {{0xABF9C, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod318) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -8460.288
  s21_decimal decimal2 = {{0x811800, 0x0, 0x0, 0x80030000}};
  // -704.412
  s21_decimal decimal_check = {{0xABF9C, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod319) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 8.000
  s21_decimal decimal2 = {{0x1F40, 0x0, 0x0, 0x30000}};
  // -1.500
  s21_decimal decimal_check = {{0x5DC, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod320) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -8.000
  s21_decimal decimal2 = {{0x1F40, 0x0, 0x0, 0x80030000}};
  // -1.500
  s21_decimal decimal_check = {{0x5DC, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod321) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 1.001
  s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x30000}};
  // -0.910
  s21_decimal decimal_check = {{0x38E, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod322) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -1.001
  s21_decimal decimal2 = {{0x3E9, 0x0, 0x0, 0x80030000}};
  // -0.910
  s21_decimal decimal_check = {{0x38E, 0x0, 0x0, 0x80030000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod323) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  // -0.5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod324) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -0.5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod325) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 10
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x0}};
  // -3.5
  s21_decimal decimal_check = {{0x23, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod326) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -10
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80000000}};
  // -3.5
  s21_decimal decimal_check = {{0x23, 0x0, 0x0, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod327) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod328) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod329) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod330) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // division by zero
  int code_check = TEST_ARITHMETIC_ZERO_DIV;

  test_mod_fail(decimal1, decimal2, code_check);
}

START_TEST(test_mod331) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 3359055301292796708334.2402749
  s21_decimal decimal2 = {{0x43114BD, 0x948E9182, 0x6C897447, 0x70000}};
  // -619363986560022089214.5487644
  s21_decimal decimal_check = {
      {0xC25D8F1C, 0xE4D2003B, 0x14034241, 0x80070000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod332) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -3359055301292796708334.2402749
  s21_decimal decimal2 = {{0x43114BD, 0x948E9182, 0x6C897447, 0x80070000}};
  // -619363986560022089214.5487644
  s21_decimal decimal_check = {
      {0xC25D8F1C, 0xE4D2003B, 0x14034241, 0x80070000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod333) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -29293803674175591779113420402
  s21_decimal decimal2 = {{0x85B0C672, 0x31FBFF52, 0x5EA74437, 0x80000000}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod334) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 29293803674175591779113420402
  s21_decimal decimal2 = {{0x85B0C672, 0x31FBFF52, 0x5EA74437, 0x0}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod335) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 25817.443351246080434413985401
  s21_decimal decimal2 = {{0x29675E79, 0x78DCFEE6, 0x536BB048, 0x180000}};
  // -20499.637255713099247745722208
  s21_decimal decimal_check = {
      {0x7B376760, 0x63F44A3E, 0x423CE70A, 0x80180000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod336) {
  // -7922816251426433759354395033.5
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -25817.443351246080434413985401
  s21_decimal decimal2 = {{0x29675E79, 0x78DCFEE6, 0x536BB048, 0x80180000}};
  // -20499.637255713099247745722208
  s21_decimal decimal_check = {
      {0x7B376760, 0x63F44A3E, 0x423CE70A, 0x80180000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod337) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod338) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod339) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033.5
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7922816251426433759354395032.5
  s21_decimal decimal_check = {{0xFFFFFFF5, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod340) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033.5
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 7922816251426433759354395032.5
  s21_decimal decimal_check = {{0xFFFFFFF5, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod341) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950334
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod342) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950334
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod343) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 26409387504754779197847983445
  s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 26409387504754779197847983444
  s21_decimal decimal_check = {{0x55555554, 0x55555555, 0x55555555, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod344) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -26409387504754779197847983445
  s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 26409387504754779197847983444
  s21_decimal decimal_check = {{0x55555554, 0x55555555, 0x55555555, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod345) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 39614081257132168798919458816
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x80000000, 0x0}};
  // 39614081257132168794624491518
  s21_decimal decimal_check = {{0x7FFFFFFE, 0xFFFFFFFF, 0x7FFFFFFF, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod346) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -39614081257132168798919458816
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x80000000, 0x80000000}};
  // 39614081257132168794624491518
  s21_decimal decimal_check = {{0x7FFFFFFE, 0xFFFFFFFF, 0x7FFFFFFF, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod347) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 39614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x0}};
  // 39614081257132168796771975166
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0x7FFFFFFF, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod348) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -39614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x80000000}};
  // 39614081257132168796771975166
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0x7FFFFFFF, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod349) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 3.9614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x1C0000}};
  // 1.9614081257132168796771975168
  s21_decimal decimal_check = {{0xE0000000, 0x83B5FB3D, 0x3F606343, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod350) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -3.9614081257132168796771975168
  s21_decimal decimal2 = {{0x0, 0x0, 0x80000000, 0x801C0000}};
  // 1.9614081257132168796771975168
  s21_decimal decimal_check = {{0xE0000000, 0x83B5FB3D, 0x3F606343, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod351) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 4294967297
  s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x0}};
  // 4294967294
  s21_decimal decimal_check = {{0xFFFFFFFE, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod352) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -4294967297
  s21_decimal decimal2 = {{0x1, 0x1, 0x0, 0x80000000}};
  // 4294967294
  s21_decimal decimal_check = {{0xFFFFFFFE, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod353) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162495817593524129366015
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x0}};
  // 18446744069414584319
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFE, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod354) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162495817593524129366015
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0xFFFFFFFF, 0x80000000}};
  // 18446744069414584319
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFE, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod355) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 4294967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x0}};
  // 4294967294
  s21_decimal decimal_check = {{0xFFFFFFFE, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod356) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -4294967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000000}};
  // 4294967294
  s21_decimal decimal_check = {{0xFFFFFFFE, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod357) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 2147483648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x0}};
  // 2147483646
  s21_decimal decimal_check = {{0x7FFFFFFE, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod358) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -2147483648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80000000}};
  // 2147483646
  s21_decimal decimal_check = {{0x7FFFFFFE, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod359) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 8589934591
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x0}};
  // 1073741822
  s21_decimal decimal_check = {{0x3FFFFFFE, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod360) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -8589934591
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x1, 0x0, 0x80000000}};
  // 1073741822
  s21_decimal decimal_check = {{0x3FFFFFFE, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod361) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x0}};
  // 4
  s21_decimal decimal_check = {{0x4, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod362) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80000000}};
  // 4
  s21_decimal decimal_check = {{0x4, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod363) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 2
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x0}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod364) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -2
  s21_decimal decimal2 = {{0x2, 0x0, 0x0, 0x80000000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod365) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.9999999999999999999999999000
  s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 1.4081257132168796771977147000
  s21_decimal decimal_check = {{0x801E3278, 0xB3833290, 0x2D7FBE2E, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod366) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.9999999999999999999999999000
  s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 1.4081257132168796771977147000
  s21_decimal decimal_check = {{0x801E3278, 0xB3833290, 0x2D7FBE2E, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod367) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
  // 1.9614081257132168796771975168
  s21_decimal decimal_check = {{0xE0000000, 0x83B5FB3D, 0x3F606343, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod368) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 1.9614081257132168796771975168
  s21_decimal decimal_check = {{0xE0000000, 0x83B5FB3D, 0x3F606343, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod369) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.9999999999999999999999999999
  s21_decimal decimal2 = {{0x1FFFFFFF, 0x7C4A04C2, 0x409F9CBC, 0x801C0000}};
  // 1.9614081257132168796771975168
  s21_decimal decimal_check = {{0xE0000000, 0x83B5FB3D, 0x3F606343, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod370) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -0.9228162514264337593543950342
  s21_decimal decimal_check = {
      {0x90000006, 0x4CFCEF58, 0x1DD15B6C, 0x801C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod371) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000008
  s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod372) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000008
  s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod373) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod374) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod375) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000010
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x1C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod376) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000010
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod377) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 0.9228162514264337593543950341
  s21_decimal decimal_check = {{0x90000005, 0x4CFCEF58, 0x1DD15B6C, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod378) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 0.9228162514264337593543950341
  s21_decimal decimal_check = {{0x90000005, 0x4CFCEF58, 0x1DD15B6C, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod379) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7.9228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 6.9228162514264337593543950335
  s21_decimal decimal_check = {{0xEFFFFFFF, 0xC1DAFD9E, 0xDFB031A1, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod380) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7.9228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 6.9228162514264337593543950335
  s21_decimal decimal_check = {{0xEFFFFFFF, 0xC1DAFD9E, 0xDFB031A1, 0x1C0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod381) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 60.000000000000000000000000005
  s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x1B0000}};
  // 7.397653123811305200538004140
  s21_decimal decimal_check = {{0x5AAAAAAC, 0x6811ADFF, 0x17E731FB, 0x1B0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod382) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -60.000000000000000000000000005
  s21_decimal decimal2 = {{0x60000005, 0x74DE0E46, 0xC1DED635, 0x801B0000}};
  // 7.397653123811305200538004140
  s21_decimal decimal_check = {{0x5AAAAAAC, 0x6811ADFF, 0x17E731FB, 0x1B0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod383) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
  // 0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod384) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.5
  s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
  // 0.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x10000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod385) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x30000}};
  // 0.000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod386) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80030000}};
  // 0.000
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod387) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.019
  s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x30000}};
  // 0.003
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod388) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.019
  s21_decimal decimal2 = {{0x13, 0x0, 0x0, 0x80030000}};
  // 0.003
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x30000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod389) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 39614081266355.540835774234624
  s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0xF0000}};
  // 28232649134942.668301643481088
  s21_decimal decimal_check = {{0xB6730000, 0x5B35F281, 0x5B398000, 0xF0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod390) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -39614081266355.540835774234624
  s21_decimal decimal2 = {{0x80000000, 0x80000000, 0x80000000, 0x800F0000}};
  // 28232649134942.668301643481088
  s21_decimal decimal_check = {{0xB6730000, 0x5B35F281, 0x5B398000, 0xF0000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod391) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 42.94967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80000}};
  // 40.94967296
  s21_decimal decimal_check = {{0xF4143E00, 0x0, 0x0, 0x80000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod392) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -42.94967296
  s21_decimal decimal2 = {{0x0, 0x1, 0x0, 0x80080000}};
  // 40.94967296
  s21_decimal decimal_check = {{0xF4143E00, 0x0, 0x0, 0x80000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod393) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 214748.3648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x40000}};
  // 214746.3648
  s21_decimal decimal_check = {{0x7FFFB1E0, 0x0, 0x0, 0x40000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod394) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -214748.3648
  s21_decimal decimal2 = {{0x80000000, 0x0, 0x0, 0x80040000}};
  // 214746.3648
  s21_decimal decimal_check = {{0x7FFFB1E0, 0x0, 0x0, 0x40000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod395) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 42.94967295
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80000}};
  // 41.94967295
  s21_decimal decimal_check = {{0xFA0A1EFF, 0x0, 0x0, 0x80000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod396) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -42.94967295
  s21_decimal decimal2 = {{0xFFFFFFFF, 0x0, 0x0, 0x80080000}};
  // 41.94967295
  s21_decimal decimal_check = {{0xFA0A1EFF, 0x0, 0x0, 0x80000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod397) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999
  s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x40000}};
  // 0.7289
  s21_decimal decimal_check = {{0x1C79, 0x0, 0x0, 0x40000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod398) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999
  s21_decimal decimal2 = {{0x270F, 0x0, 0x0, 0x80040000}};
  // 0.7289
  s21_decimal decimal_check = {{0x1C79, 0x0, 0x0, 0x40000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod399) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x90000}};
  // 0.431655765
  s21_decimal decimal_check = {{0x19BA8B55, 0x0, 0x0, 0x90000}};

  test_mod(decimal1, decimal2, decimal_check);
}

START_TEST(test_mod400) {
  // 79228162514264337593543950334
  s21_decimal decimal1 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80090000}};
  // 0.431655765
  s21_decimal decimal_check = {{0x19BA8B55, 0x0, 0x0, 0x90000}};

  test_mod(decimal1, decimal2, decimal_check);
}

Suite *mod_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("mod");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_mod1);
  tcase_add_test(tc_core, test_mod2);
  tcase_add_test(tc_core, test_mod3);
  tcase_add_test(tc_core, test_mod4);
  tcase_add_test(tc_core, test_mod5);
  tcase_add_test(tc_core, test_mod6);
  tcase_add_test(tc_core, test_mod7);
  tcase_add_test(tc_core, test_mod8);
  tcase_add_test(tc_core, test_mod9);
  tcase_add_test(tc_core, test_mod10);
  tcase_add_test(tc_core, test_mod11);
  tcase_add_test(tc_core, test_mod12);
  tcase_add_test(tc_core, test_mod13);
  tcase_add_test(tc_core, test_mod14);
  tcase_add_test(tc_core, test_mod15);
  tcase_add_test(tc_core, test_mod16);
  tcase_add_test(tc_core, test_mod17);
  tcase_add_test(tc_core, test_mod18);
  tcase_add_test(tc_core, test_mod19);
  tcase_add_test(tc_core, test_mod20);
  tcase_add_test(tc_core, test_mod21);
  tcase_add_test(tc_core, test_mod22);
  tcase_add_test(tc_core, test_mod23);
  tcase_add_test(tc_core, test_mod24);
  tcase_add_test(tc_core, test_mod25);
  tcase_add_test(tc_core, test_mod26);
  tcase_add_test(tc_core, test_mod27);
  tcase_add_test(tc_core, test_mod28);
  tcase_add_test(tc_core, test_mod29);
  tcase_add_test(tc_core, test_mod30);
  tcase_add_test(tc_core, test_mod31);
  tcase_add_test(tc_core, test_mod32);
  tcase_add_test(tc_core, test_mod33);
  tcase_add_test(tc_core, test_mod34);
  tcase_add_test(tc_core, test_mod35);
  tcase_add_test(tc_core, test_mod36);
  tcase_add_test(tc_core, test_mod37);
  tcase_add_test(tc_core, test_mod38);
  tcase_add_test(tc_core, test_mod39);
  tcase_add_test(tc_core, test_mod40);
  tcase_add_test(tc_core, test_mod41);
  tcase_add_test(tc_core, test_mod42);
  tcase_add_test(tc_core, test_mod43);
  tcase_add_test(tc_core, test_mod44);
  tcase_add_test(tc_core, test_mod45);
  tcase_add_test(tc_core, test_mod46);
  tcase_add_test(tc_core, test_mod47);
  tcase_add_test(tc_core, test_mod48);
  tcase_add_test(tc_core, test_mod49);
  tcase_add_test(tc_core, test_mod50);
  tcase_add_test(tc_core, test_mod51);
  tcase_add_test(tc_core, test_mod52);
  tcase_add_test(tc_core, test_mod53);
  tcase_add_test(tc_core, test_mod54);
  tcase_add_test(tc_core, test_mod55);
  tcase_add_test(tc_core, test_mod56);
  tcase_add_test(tc_core, test_mod57);
  tcase_add_test(tc_core, test_mod58);
  tcase_add_test(tc_core, test_mod59);
  tcase_add_test(tc_core, test_mod60);
  tcase_add_test(tc_core, test_mod61);
  tcase_add_test(tc_core, test_mod62);
  tcase_add_test(tc_core, test_mod63);
  tcase_add_test(tc_core, test_mod64);
  tcase_add_test(tc_core, test_mod65);
  tcase_add_test(tc_core, test_mod66);
  tcase_add_test(tc_core, test_mod67);
  tcase_add_test(tc_core, test_mod68);
  tcase_add_test(tc_core, test_mod69);
  tcase_add_test(tc_core, test_mod70);
  tcase_add_test(tc_core, test_mod71);
  tcase_add_test(tc_core, test_mod72);
  tcase_add_test(tc_core, test_mod73);
  tcase_add_test(tc_core, test_mod74);
  tcase_add_test(tc_core, test_mod75);
  tcase_add_test(tc_core, test_mod76);
  tcase_add_test(tc_core, test_mod77);
  tcase_add_test(tc_core, test_mod78);
  tcase_add_test(tc_core, test_mod79);
  tcase_add_test(tc_core, test_mod80);
  tcase_add_test(tc_core, test_mod81);
  tcase_add_test(tc_core, test_mod82);
  tcase_add_test(tc_core, test_mod83);
  tcase_add_test(tc_core, test_mod84);
  tcase_add_test(tc_core, test_mod85);
  tcase_add_test(tc_core, test_mod86);
  tcase_add_test(tc_core, test_mod87);
  tcase_add_test(tc_core, test_mod88);
  tcase_add_test(tc_core, test_mod89);
  tcase_add_test(tc_core, test_mod90);
  tcase_add_test(tc_core, test_mod91);
  tcase_add_test(tc_core, test_mod92);
  tcase_add_test(tc_core, test_mod93);
  tcase_add_test(tc_core, test_mod94);
  tcase_add_test(tc_core, test_mod95);
  tcase_add_test(tc_core, test_mod96);
  tcase_add_test(tc_core, test_mod97);
  tcase_add_test(tc_core, test_mod98);
  tcase_add_test(tc_core, test_mod99);
  tcase_add_test(tc_core, test_mod100);
  tcase_add_test(tc_core, test_mod101);
  tcase_add_test(tc_core, test_mod102);
  tcase_add_test(tc_core, test_mod103);
  tcase_add_test(tc_core, test_mod104);
  tcase_add_test(tc_core, test_mod105);
  tcase_add_test(tc_core, test_mod106);
  tcase_add_test(tc_core, test_mod107);
  tcase_add_test(tc_core, test_mod108);
  tcase_add_test(tc_core, test_mod109);
  tcase_add_test(tc_core, test_mod110);
  tcase_add_test(tc_core, test_mod111);
  tcase_add_test(tc_core, test_mod112);
  tcase_add_test(tc_core, test_mod113);
  tcase_add_test(tc_core, test_mod114);
  tcase_add_test(tc_core, test_mod115);
  tcase_add_test(tc_core, test_mod116);
  tcase_add_test(tc_core, test_mod117);
  tcase_add_test(tc_core, test_mod118);
  tcase_add_test(tc_core, test_mod119);
  tcase_add_test(tc_core, test_mod120);
  tcase_add_test(tc_core, test_mod121);
  tcase_add_test(tc_core, test_mod122);
  tcase_add_test(tc_core, test_mod123);
  tcase_add_test(tc_core, test_mod124);
  tcase_add_test(tc_core, test_mod125);
  tcase_add_test(tc_core, test_mod126);
  tcase_add_test(tc_core, test_mod127);
  tcase_add_test(tc_core, test_mod128);
  tcase_add_test(tc_core, test_mod129);
  tcase_add_test(tc_core, test_mod130);
  tcase_add_test(tc_core, test_mod131);
  tcase_add_test(tc_core, test_mod132);
  tcase_add_test(tc_core, test_mod133);
  tcase_add_test(tc_core, test_mod134);
  tcase_add_test(tc_core, test_mod135);
  tcase_add_test(tc_core, test_mod136);
  tcase_add_test(tc_core, test_mod137);
  tcase_add_test(tc_core, test_mod138);
  tcase_add_test(tc_core, test_mod139);
  tcase_add_test(tc_core, test_mod140);
  tcase_add_test(tc_core, test_mod141);
  tcase_add_test(tc_core, test_mod142);
  tcase_add_test(tc_core, test_mod143);
  tcase_add_test(tc_core, test_mod144);
  tcase_add_test(tc_core, test_mod145);
  tcase_add_test(tc_core, test_mod146);
  tcase_add_test(tc_core, test_mod147);
  tcase_add_test(tc_core, test_mod148);
  tcase_add_test(tc_core, test_mod149);
  tcase_add_test(tc_core, test_mod150);
  tcase_add_test(tc_core, test_mod151);
  tcase_add_test(tc_core, test_mod152);
  tcase_add_test(tc_core, test_mod153);
  tcase_add_test(tc_core, test_mod154);
  tcase_add_test(tc_core, test_mod155);
  tcase_add_test(tc_core, test_mod156);
  tcase_add_test(tc_core, test_mod157);
  tcase_add_test(tc_core, test_mod158);
  tcase_add_test(tc_core, test_mod159);
  tcase_add_test(tc_core, test_mod160);
  tcase_add_test(tc_core, test_mod161);
  tcase_add_test(tc_core, test_mod162);
  tcase_add_test(tc_core, test_mod163);
  tcase_add_test(tc_core, test_mod164);
  tcase_add_test(tc_core, test_mod165);
  tcase_add_test(tc_core, test_mod166);
  tcase_add_test(tc_core, test_mod167);
  tcase_add_test(tc_core, test_mod168);
  tcase_add_test(tc_core, test_mod169);
  tcase_add_test(tc_core, test_mod170);
  tcase_add_test(tc_core, test_mod171);
  tcase_add_test(tc_core, test_mod172);
  tcase_add_test(tc_core, test_mod173);
  tcase_add_test(tc_core, test_mod174);
  tcase_add_test(tc_core, test_mod175);
  tcase_add_test(tc_core, test_mod176);
  tcase_add_test(tc_core, test_mod177);
  tcase_add_test(tc_core, test_mod178);
  tcase_add_test(tc_core, test_mod179);
  tcase_add_test(tc_core, test_mod180);
  tcase_add_test(tc_core, test_mod181);
  tcase_add_test(tc_core, test_mod182);
  tcase_add_test(tc_core, test_mod183);
  tcase_add_test(tc_core, test_mod184);
  tcase_add_test(tc_core, test_mod185);
  tcase_add_test(tc_core, test_mod186);
  tcase_add_test(tc_core, test_mod187);
  tcase_add_test(tc_core, test_mod188);
  tcase_add_test(tc_core, test_mod189);
  tcase_add_test(tc_core, test_mod190);
  tcase_add_test(tc_core, test_mod191);
  tcase_add_test(tc_core, test_mod192);
  tcase_add_test(tc_core, test_mod193);
  tcase_add_test(tc_core, test_mod194);
  tcase_add_test(tc_core, test_mod195);
  tcase_add_test(tc_core, test_mod196);
  tcase_add_test(tc_core, test_mod197);
  tcase_add_test(tc_core, test_mod198);
  tcase_add_test(tc_core, test_mod199);
  tcase_add_test(tc_core, test_mod200);
  tcase_add_test(tc_core, test_mod201);
  tcase_add_test(tc_core, test_mod202);
  tcase_add_test(tc_core, test_mod203);
  tcase_add_test(tc_core, test_mod204);
  tcase_add_test(tc_core, test_mod205);
  tcase_add_test(tc_core, test_mod206);
  tcase_add_test(tc_core, test_mod207);
  tcase_add_test(tc_core, test_mod208);
  tcase_add_test(tc_core, test_mod209);
  tcase_add_test(tc_core, test_mod210);
  tcase_add_test(tc_core, test_mod211);
  tcase_add_test(tc_core, test_mod212);
  tcase_add_test(tc_core, test_mod213);
  tcase_add_test(tc_core, test_mod214);
  tcase_add_test(tc_core, test_mod215);
  tcase_add_test(tc_core, test_mod216);
  tcase_add_test(tc_core, test_mod217);
  tcase_add_test(tc_core, test_mod218);
  tcase_add_test(tc_core, test_mod219);
  tcase_add_test(tc_core, test_mod220);
  tcase_add_test(tc_core, test_mod221);
  tcase_add_test(tc_core, test_mod222);
  tcase_add_test(tc_core, test_mod223);
  tcase_add_test(tc_core, test_mod224);
  tcase_add_test(tc_core, test_mod225);
  tcase_add_test(tc_core, test_mod226);
  tcase_add_test(tc_core, test_mod227);
  tcase_add_test(tc_core, test_mod228);
  tcase_add_test(tc_core, test_mod229);
  tcase_add_test(tc_core, test_mod230);
  tcase_add_test(tc_core, test_mod231);
  tcase_add_test(tc_core, test_mod232);
  tcase_add_test(tc_core, test_mod233);
  tcase_add_test(tc_core, test_mod234);
  tcase_add_test(tc_core, test_mod235);
  tcase_add_test(tc_core, test_mod236);
  tcase_add_test(tc_core, test_mod237);
  tcase_add_test(tc_core, test_mod238);
  tcase_add_test(tc_core, test_mod239);
  tcase_add_test(tc_core, test_mod240);
  tcase_add_test(tc_core, test_mod241);
  tcase_add_test(tc_core, test_mod242);
  tcase_add_test(tc_core, test_mod243);
  tcase_add_test(tc_core, test_mod244);
  tcase_add_test(tc_core, test_mod245);
  tcase_add_test(tc_core, test_mod246);
  tcase_add_test(tc_core, test_mod247);
  tcase_add_test(tc_core, test_mod248);
  tcase_add_test(tc_core, test_mod249);
  tcase_add_test(tc_core, test_mod250);
  tcase_add_test(tc_core, test_mod251);
  tcase_add_test(tc_core, test_mod252);
  tcase_add_test(tc_core, test_mod253);
  tcase_add_test(tc_core, test_mod254);
  tcase_add_test(tc_core, test_mod255);
  tcase_add_test(tc_core, test_mod256);
  tcase_add_test(tc_core, test_mod257);
  tcase_add_test(tc_core, test_mod258);
  tcase_add_test(tc_core, test_mod259);
  tcase_add_test(tc_core, test_mod260);
  tcase_add_test(tc_core, test_mod261);
  tcase_add_test(tc_core, test_mod262);
  tcase_add_test(tc_core, test_mod263);
  tcase_add_test(tc_core, test_mod264);
  tcase_add_test(tc_core, test_mod265);
  tcase_add_test(tc_core, test_mod266);
  tcase_add_test(tc_core, test_mod267);
  tcase_add_test(tc_core, test_mod268);
  tcase_add_test(tc_core, test_mod269);
  tcase_add_test(tc_core, test_mod270);
  tcase_add_test(tc_core, test_mod271);
  tcase_add_test(tc_core, test_mod272);
  tcase_add_test(tc_core, test_mod273);
  tcase_add_test(tc_core, test_mod274);
  tcase_add_test(tc_core, test_mod275);
  tcase_add_test(tc_core, test_mod276);
  tcase_add_test(tc_core, test_mod277);
  tcase_add_test(tc_core, test_mod278);
  tcase_add_test(tc_core, test_mod279);
  tcase_add_test(tc_core, test_mod280);
  tcase_add_test(tc_core, test_mod281);
  tcase_add_test(tc_core, test_mod282);
  tcase_add_test(tc_core, test_mod283);
  tcase_add_test(tc_core, test_mod284);
  tcase_add_test(tc_core, test_mod285);
  tcase_add_test(tc_core, test_mod286);
  tcase_add_test(tc_core, test_mod287);
  tcase_add_test(tc_core, test_mod288);
  tcase_add_test(tc_core, test_mod289);
  tcase_add_test(tc_core, test_mod290);
  tcase_add_test(tc_core, test_mod291);
  tcase_add_test(tc_core, test_mod292);
  tcase_add_test(tc_core, test_mod293);
  tcase_add_test(tc_core, test_mod294);
  tcase_add_test(tc_core, test_mod295);
  tcase_add_test(tc_core, test_mod296);
  tcase_add_test(tc_core, test_mod297);
  tcase_add_test(tc_core, test_mod298);
  tcase_add_test(tc_core, test_mod299);
  tcase_add_test(tc_core, test_mod300);
  tcase_add_test(tc_core, test_mod301);
  tcase_add_test(tc_core, test_mod302);
  tcase_add_test(tc_core, test_mod303);
  tcase_add_test(tc_core, test_mod304);
  tcase_add_test(tc_core, test_mod305);
  tcase_add_test(tc_core, test_mod306);
  tcase_add_test(tc_core, test_mod307);
  tcase_add_test(tc_core, test_mod308);
  tcase_add_test(tc_core, test_mod309);
  tcase_add_test(tc_core, test_mod310);
  tcase_add_test(tc_core, test_mod311);
  tcase_add_test(tc_core, test_mod312);
  tcase_add_test(tc_core, test_mod313);
  tcase_add_test(tc_core, test_mod314);
  tcase_add_test(tc_core, test_mod315);
  tcase_add_test(tc_core, test_mod316);
  tcase_add_test(tc_core, test_mod317);
  tcase_add_test(tc_core, test_mod318);
  tcase_add_test(tc_core, test_mod319);
  tcase_add_test(tc_core, test_mod320);
  tcase_add_test(tc_core, test_mod321);
  tcase_add_test(tc_core, test_mod322);
  tcase_add_test(tc_core, test_mod323);
  tcase_add_test(tc_core, test_mod324);
  tcase_add_test(tc_core, test_mod325);
  tcase_add_test(tc_core, test_mod326);
  tcase_add_test(tc_core, test_mod327);
  tcase_add_test(tc_core, test_mod328);
  tcase_add_test(tc_core, test_mod329);
  tcase_add_test(tc_core, test_mod330);
  tcase_add_test(tc_core, test_mod331);
  tcase_add_test(tc_core, test_mod332);
  tcase_add_test(tc_core, test_mod333);
  tcase_add_test(tc_core, test_mod334);
  tcase_add_test(tc_core, test_mod335);
  tcase_add_test(tc_core, test_mod336);
  tcase_add_test(tc_core, test_mod337);
  tcase_add_test(tc_core, test_mod338);
  tcase_add_test(tc_core, test_mod339);
  tcase_add_test(tc_core, test_mod340);
  tcase_add_test(tc_core, test_mod341);
  tcase_add_test(tc_core, test_mod342);
  tcase_add_test(tc_core, test_mod343);
  tcase_add_test(tc_core, test_mod344);
  tcase_add_test(tc_core, test_mod345);
  tcase_add_test(tc_core, test_mod346);
  tcase_add_test(tc_core, test_mod347);
  tcase_add_test(tc_core, test_mod348);
  tcase_add_test(tc_core, test_mod349);
  tcase_add_test(tc_core, test_mod350);
  tcase_add_test(tc_core, test_mod351);
  tcase_add_test(tc_core, test_mod352);
  tcase_add_test(tc_core, test_mod353);
  tcase_add_test(tc_core, test_mod354);
  tcase_add_test(tc_core, test_mod355);
  tcase_add_test(tc_core, test_mod356);
  tcase_add_test(tc_core, test_mod357);
  tcase_add_test(tc_core, test_mod358);
  tcase_add_test(tc_core, test_mod359);
  tcase_add_test(tc_core, test_mod360);
  tcase_add_test(tc_core, test_mod361);
  tcase_add_test(tc_core, test_mod362);
  tcase_add_test(tc_core, test_mod363);
  tcase_add_test(tc_core, test_mod364);
  tcase_add_test(tc_core, test_mod365);
  tcase_add_test(tc_core, test_mod366);
  tcase_add_test(tc_core, test_mod367);
  tcase_add_test(tc_core, test_mod368);
  tcase_add_test(tc_core, test_mod369);
  tcase_add_test(tc_core, test_mod370);
  tcase_add_test(tc_core, test_mod371);
  tcase_add_test(tc_core, test_mod372);
  tcase_add_test(tc_core, test_mod373);
  tcase_add_test(tc_core, test_mod374);
  tcase_add_test(tc_core, test_mod375);
  tcase_add_test(tc_core, test_mod376);
  tcase_add_test(tc_core, test_mod377);
  tcase_add_test(tc_core, test_mod378);
  tcase_add_test(tc_core, test_mod379);
  tcase_add_test(tc_core, test_mod380);
  tcase_add_test(tc_core, test_mod381);
  tcase_add_test(tc_core, test_mod382);
  tcase_add_test(tc_core, test_mod383);
  tcase_add_test(tc_core, test_mod384);
  tcase_add_test(tc_core, test_mod385);
  tcase_add_test(tc_core, test_mod386);
  tcase_add_test(tc_core, test_mod387);
  tcase_add_test(tc_core, test_mod388);
  tcase_add_test(tc_core, test_mod389);
  tcase_add_test(tc_core, test_mod390);
  tcase_add_test(tc_core, test_mod391);
  tcase_add_test(tc_core, test_mod392);
  tcase_add_test(tc_core, test_mod393);
  tcase_add_test(tc_core, test_mod394);
  tcase_add_test(tc_core, test_mod395);
  tcase_add_test(tc_core, test_mod396);
  tcase_add_test(tc_core, test_mod397);
  tcase_add_test(tc_core, test_mod398);
  tcase_add_test(tc_core, test_mod399);
  tcase_add_test(tc_core, test_mod400);

  suite_add_tcase(s, tc_core);
  return s;
}

void test_mod(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check) {
  s21_decimal result;
  int code = s21_mod(decimal1, decimal2, &result);
  ck_assert_int_eq(s21_is_equal(result, check), TRUE);
  ck_assert_int_eq(code, TEST_ARITHMETIC_OK);
}

void test_mod_fail(s21_decimal decimal1, s21_decimal decimal2, int code_check) {
  s21_decimal result;
  int code = s21_mod(decimal1, decimal2, &result);
  ck_assert_int_eq(code, code_check);
}