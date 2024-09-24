#include "../test.h"

START_TEST(test_truncate_1) {
  // 79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_2) {
  // -79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_3) {
  // 7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7922816251426433759354395033
  s21_decimal decimal_check = {{0x99999999, 0x99999999, 0x19999999, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_4) {
  // -7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -7922816251426433759354395033
  s21_decimal decimal_check = {
      {0x99999999, 0x99999999, 0x19999999, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_5) {
  // 792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
  // 792281625142643375935439503
  s21_decimal decimal_check = {{0x28F5C28F, 0xF5C28F5C, 0x28F5C28, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_6) {
  // -792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};
  // -792281625142643375935439503
  s21_decimal decimal_check = {{0x28F5C28F, 0xF5C28F5C, 0x28F5C28, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_7) {
  // 79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};
  // 79228162514264337593543950
  s21_decimal decimal_check = {{0x9DB22D0E, 0x4BC6A7EF, 0x418937, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_8) {
  // -79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};
  // -79228162514264337593543950
  s21_decimal decimal_check = {{0x9DB22D0E, 0x4BC6A7EF, 0x418937, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_9) {
  // 7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};
  // 7922816251426433759354395
  s21_decimal decimal_check = {{0x295E9E1B, 0xBAC710CB, 0x68DB8, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_10) {
  // -7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};
  // -7922816251426433759354395
  s21_decimal decimal_check = {{0x295E9E1B, 0xBAC710CB, 0x68DB8, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_11) {
  // 792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};
  // 792281625142643375935439
  s21_decimal decimal_check = {{0x84230FCF, 0xAC471B47, 0xA7C5, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_12) {
  // -792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};
  // -792281625142643375935439
  s21_decimal decimal_check = {{0x84230FCF, 0xAC471B47, 0xA7C5, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_13) {
  // 79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};
  // 79228162514264337593543
  s21_decimal decimal_check = {{0x8D36B4C7, 0xF7A0B5ED, 0x10C6, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_14) {
  // -79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};
  // -79228162514264337593543
  s21_decimal decimal_check = {{0x8D36B4C7, 0xF7A0B5ED, 0x10C6, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_15) {
  // 7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};
  // 7922816251426433759354
  s21_decimal decimal_check = {{0xF485787A, 0x7F29ABCA, 0x1AD, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_16) {
  // -7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};
  // -7922816251426433759354
  s21_decimal decimal_check = {{0xF485787A, 0x7F29ABCA, 0x1AD, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_17) {
  // 792281625142643375935.43950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};
  // 792281625142643375935
  s21_decimal decimal_check = {{0x1873BF3F, 0xF31DC461, 0x2A, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_18) {
  // -792281625142643375935.43950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};
  // -792281625142643375935
  s21_decimal decimal_check = {{0x1873BF3F, 0xF31DC461, 0x2A, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_19) {
  // 79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};
  // 79228162514264337593
  s21_decimal decimal_check = {{0xB5A52CB9, 0x4B82FA09, 0x4, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_20) {
  // -79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};
  // -79228162514264337593
  s21_decimal decimal_check = {{0xB5A52CB9, 0x4B82FA09, 0x4, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_21) {
  // 7922816251426433759.3543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};
  // 7922816251426433759
  s21_decimal decimal_check = {{0x5EF6EADF, 0x6DF37F67, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_22) {
  // -7922816251426433759.3543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};
  // -7922816251426433759
  s21_decimal decimal_check = {{0x5EF6EADF, 0x6DF37F67, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_23) {
  // 792281625142643375.93543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};
  // 792281625142643375
  s21_decimal decimal_check = {{0xBCB24AAF, 0xAFEBFF0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_24) {
  // -792281625142643375.93543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};
  // -792281625142643375
  s21_decimal decimal_check = {{0xBCB24AAF, 0xAFEBFF0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_25) {
  // 79228162514264337.593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};
  // 79228162514264337
  s21_decimal decimal_check = {{0x12DEA111, 0x1197998, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_26) {
  // -79228162514264337.593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};
  // -79228162514264337
  s21_decimal decimal_check = {{0x12DEA111, 0x1197998, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_27) {
  // 7922816251426433.7593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};
  // 7922816251426433
  s21_decimal decimal_check = {{0x68497681, 0x1C25C2, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_28) {
  // -7922816251426433.7593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};
  // -7922816251426433
  s21_decimal decimal_check = {{0x68497681, 0x1C25C2, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_29) {
  // 792281625142643.37593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // 792281625142643
  s21_decimal decimal_check = {{0x70D42573, 0x2D093, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_30) {
  // -792281625142643.37593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // -792281625142643
  s21_decimal decimal_check = {{0x70D42573, 0x2D093, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_31) {
  // 79228162514264.337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};
  // 79228162514264
  s21_decimal decimal_check = {{0xBE7B9D58, 0x480E, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_32) {
  // -79228162514264.337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};
  // -79228162514264
  s21_decimal decimal_check = {{0xBE7B9D58, 0x480E, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_33) {
  // 7922816251426.4337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};
  // 7922816251426
  s21_decimal decimal_check = {{0xACA5F622, 0x734, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_34) {
  // -7922816251426.4337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};
  // -7922816251426
  s21_decimal decimal_check = {{0xACA5F622, 0x734, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_35) {
  // 792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};
  // 792281625142
  s21_decimal decimal_check = {{0x77AA3236, 0xB8, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_36) {
  // -792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};
  // -792281625142
  s21_decimal decimal_check = {{0x77AA3236, 0xB8, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_37) {
  // 79228162514.264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};
  // 79228162514
  s21_decimal decimal_check = {{0x725DD1D2, 0x12, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_38) {
  // -79228162514.264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};
  // -79228162514
  s21_decimal decimal_check = {{0x725DD1D2, 0x12, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_39) {
  // 7922816251.4264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};
  // 7922816251
  s21_decimal decimal_check = {{0xD83C94FB, 0x1, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_40) {
  // -7922816251.4264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};
  // -7922816251
  s21_decimal decimal_check = {{0xD83C94FB, 0x1, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_41) {
  // 792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  // 792281625
  s21_decimal decimal_check = {{0x2F394219, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_42) {
  // -792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  // -792281625
  s21_decimal decimal_check = {{0x2F394219, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_43) {
  // 79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  // 79228162
  s21_decimal decimal_check = {{0x4B8ED02, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_44) {
  // -79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  // -79228162
  s21_decimal decimal_check = {{0x4B8ED02, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_45) {
  // 7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  // 7922816
  s21_decimal decimal_check = {{0x78E480, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_46) {
  // -7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  // -7922816
  s21_decimal decimal_check = {{0x78E480, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_47) {
  // 792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  // 792281
  s21_decimal decimal_check = {{0xC16D9, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_48) {
  // -792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  // -792281
  s21_decimal decimal_check = {{0xC16D9, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_49) {
  // 79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  // 79228
  s21_decimal decimal_check = {{0x1357C, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_50) {
  // -79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  // -79228
  s21_decimal decimal_check = {{0x1357C, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_51) {
  // 7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  // 7922
  s21_decimal decimal_check = {{0x1EF2, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_52) {
  // -7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  // -7922
  s21_decimal decimal_check = {{0x1EF2, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_53) {
  // 792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  // 792
  s21_decimal decimal_check = {{0x318, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_54) {
  // -792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  // -792
  s21_decimal decimal_check = {{0x318, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_55) {
  // 79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  // 79
  s21_decimal decimal_check = {{0x4F, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_56) {
  // -79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  // -79
  s21_decimal decimal_check = {{0x4F, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_57) {
  // 7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 7
  s21_decimal decimal_check = {{0x7, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_58) {
  // -7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -7
  s21_decimal decimal_check = {{0x7, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_59) {
  // 79228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_60) {
  // -79228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_61) {
  // 7922816251426433759354395033.4
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // 7922816251426433759354395033
  s21_decimal decimal_check = {{0x99999999, 0x99999999, 0x19999999, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_62) {
  // -7922816251426433759354395033.4
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // -7922816251426433759354395033
  s21_decimal decimal_check = {
      {0x99999999, 0x99999999, 0x19999999, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_63) {
  // 792281625142643375935439503.34
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
  // 792281625142643375935439503
  s21_decimal decimal_check = {{0x28F5C28F, 0xF5C28F5C, 0x28F5C28, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_64) {
  // -792281625142643375935439503.34
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};
  // -792281625142643375935439503
  s21_decimal decimal_check = {{0x28F5C28F, 0xF5C28F5C, 0x28F5C28, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_65) {
  // 79228162514264337593543950.334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};
  // 79228162514264337593543950
  s21_decimal decimal_check = {{0x9DB22D0E, 0x4BC6A7EF, 0x418937, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_66) {
  // -79228162514264337593543950.334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};
  // -79228162514264337593543950
  s21_decimal decimal_check = {{0x9DB22D0E, 0x4BC6A7EF, 0x418937, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_67) {
  // 7922816251426433759354395.0334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};
  // 7922816251426433759354395
  s21_decimal decimal_check = {{0x295E9E1B, 0xBAC710CB, 0x68DB8, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_68) {
  // -7922816251426433759354395.0334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};
  // -7922816251426433759354395
  s21_decimal decimal_check = {{0x295E9E1B, 0xBAC710CB, 0x68DB8, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_69) {
  // 792281625142643375935439.50334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};
  // 792281625142643375935439
  s21_decimal decimal_check = {{0x84230FCF, 0xAC471B47, 0xA7C5, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_70) {
  // -792281625142643375935439.50334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};
  // -792281625142643375935439
  s21_decimal decimal_check = {{0x84230FCF, 0xAC471B47, 0xA7C5, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_71) {
  // 79228162514264337593543.950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};
  // 79228162514264337593543
  s21_decimal decimal_check = {{0x8D36B4C7, 0xF7A0B5ED, 0x10C6, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_72) {
  // -79228162514264337593543.950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};
  // -79228162514264337593543
  s21_decimal decimal_check = {{0x8D36B4C7, 0xF7A0B5ED, 0x10C6, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_73) {
  // 7922816251426433759354.3950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};
  // 7922816251426433759354
  s21_decimal decimal_check = {{0xF485787A, 0x7F29ABCA, 0x1AD, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_74) {
  // -7922816251426433759354.3950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};
  // -7922816251426433759354
  s21_decimal decimal_check = {{0xF485787A, 0x7F29ABCA, 0x1AD, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_75) {
  // 792281625142643375935.43950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};
  // 792281625142643375935
  s21_decimal decimal_check = {{0x1873BF3F, 0xF31DC461, 0x2A, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_76) {
  // -792281625142643375935.43950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};
  // -792281625142643375935
  s21_decimal decimal_check = {{0x1873BF3F, 0xF31DC461, 0x2A, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_77) {
  // 79228162514264337593.543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};
  // 79228162514264337593
  s21_decimal decimal_check = {{0xB5A52CB9, 0x4B82FA09, 0x4, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_78) {
  // -79228162514264337593.543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};
  // -79228162514264337593
  s21_decimal decimal_check = {{0xB5A52CB9, 0x4B82FA09, 0x4, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_79) {
  // 7922816251426433759.3543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};
  // 7922816251426433759
  s21_decimal decimal_check = {{0x5EF6EADF, 0x6DF37F67, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_80) {
  // -7922816251426433759.3543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};
  // -7922816251426433759
  s21_decimal decimal_check = {{0x5EF6EADF, 0x6DF37F67, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_81) {
  // 792281625142643375.93543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};
  // 792281625142643375
  s21_decimal decimal_check = {{0xBCB24AAF, 0xAFEBFF0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_82) {
  // -792281625142643375.93543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};
  // -792281625142643375
  s21_decimal decimal_check = {{0xBCB24AAF, 0xAFEBFF0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_83) {
  // 79228162514264337.593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};
  // 79228162514264337
  s21_decimal decimal_check = {{0x12DEA111, 0x1197998, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_84) {
  // -79228162514264337.593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};
  // -79228162514264337
  s21_decimal decimal_check = {{0x12DEA111, 0x1197998, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_85) {
  // 7922816251426433.7593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};
  // 7922816251426433
  s21_decimal decimal_check = {{0x68497681, 0x1C25C2, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_86) {
  // -7922816251426433.7593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};
  // -7922816251426433
  s21_decimal decimal_check = {{0x68497681, 0x1C25C2, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_87) {
  // 792281625142643.37593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // 792281625142643
  s21_decimal decimal_check = {{0x70D42573, 0x2D093, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_88) {
  // -792281625142643.37593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // -792281625142643
  s21_decimal decimal_check = {{0x70D42573, 0x2D093, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_89) {
  // 79228162514264.337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};
  // 79228162514264
  s21_decimal decimal_check = {{0xBE7B9D58, 0x480E, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_90) {
  // -79228162514264.337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};
  // -79228162514264
  s21_decimal decimal_check = {{0xBE7B9D58, 0x480E, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_91) {
  // 7922816251426.4337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};
  // 7922816251426
  s21_decimal decimal_check = {{0xACA5F622, 0x734, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_92) {
  // -7922816251426.4337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};
  // -7922816251426
  s21_decimal decimal_check = {{0xACA5F622, 0x734, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_93) {
  // 792281625142.64337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};
  // 792281625142
  s21_decimal decimal_check = {{0x77AA3236, 0xB8, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_94) {
  // -792281625142.64337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};
  // -792281625142
  s21_decimal decimal_check = {{0x77AA3236, 0xB8, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_95) {
  // 79228162514.264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};
  // 79228162514
  s21_decimal decimal_check = {{0x725DD1D2, 0x12, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_96) {
  // -79228162514.264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};
  // -79228162514
  s21_decimal decimal_check = {{0x725DD1D2, 0x12, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_97) {
  // 7922816251.4264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};
  // 7922816251
  s21_decimal decimal_check = {{0xD83C94FB, 0x1, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_98) {
  // -7922816251.4264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};
  // -7922816251
  s21_decimal decimal_check = {{0xD83C94FB, 0x1, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_99) {
  // 792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  // 792281625
  s21_decimal decimal_check = {{0x2F394219, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_100) {
  // -792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  // -792281625
  s21_decimal decimal_check = {{0x2F394219, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_101) {
  // 79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  // 79228162
  s21_decimal decimal_check = {{0x4B8ED02, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_102) {
  // -79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  // -79228162
  s21_decimal decimal_check = {{0x4B8ED02, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_103) {
  // 7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  // 7922816
  s21_decimal decimal_check = {{0x78E480, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_104) {
  // -7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  // -7922816
  s21_decimal decimal_check = {{0x78E480, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_105) {
  // 792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  // 792281
  s21_decimal decimal_check = {{0xC16D9, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_106) {
  // -792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  // -792281
  s21_decimal decimal_check = {{0xC16D9, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_107) {
  // 79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  // 79228
  s21_decimal decimal_check = {{0x1357C, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_108) {
  // -79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  // -79228
  s21_decimal decimal_check = {{0x1357C, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_109) {
  // 7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  // 7922
  s21_decimal decimal_check = {{0x1EF2, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_110) {
  // -7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  // -7922
  s21_decimal decimal_check = {{0x1EF2, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_111) {
  // 792.28162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  // 792
  s21_decimal decimal_check = {{0x318, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_112) {
  // -792.28162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  // -792
  s21_decimal decimal_check = {{0x318, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_113) {
  // 79.228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  // 79
  s21_decimal decimal_check = {{0x4F, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_114) {
  // -79.228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  // -79
  s21_decimal decimal_check = {{0x4F, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_115) {
  // 7.9228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // 7
  s21_decimal decimal_check = {{0x7, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_116) {
  // -7.9228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // -7
  s21_decimal decimal_check = {{0x7, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_117) {
  // 52818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_118) {
  // -52818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal_check = {
      {0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_119) {
  // 5281877500950955839569596689.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 5281877500950955839569596689
  s21_decimal decimal_check = {{0x11111111, 0x11111111, 0x11111111, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_120) {
  // -5281877500950955839569596689.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -5281877500950955839569596689
  s21_decimal decimal_check = {
      {0x11111111, 0x11111111, 0x11111111, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_121) {
  // 5281877500950955.8395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};
  // 5281877500950955
  s21_decimal decimal_check = {{0xF030F9AB, 0x12C3D6, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_122) {
  // -5281877500950955.8395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};
  // -5281877500950955
  s21_decimal decimal_check = {{0xF030F9AB, 0x12C3D6, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_123) {
  // 5.2818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  // 5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_124) {
  // -5.2818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  // -5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_125) {
  // 52818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_126) {
  // -52818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_127) {
  // 5281877500950955839283265536.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 5281877500950955839283265536
  s21_decimal decimal_check = {{0x0, 0x11111111, 0x11111111, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_128) {
  // -5281877500950955839283265536.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -5281877500950955839283265536
  s21_decimal decimal_check = {{0x0, 0x11111111, 0x11111111, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_129) {
  // 5281877500950955.8392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};
  // 5281877500950955
  s21_decimal decimal_check = {{0xF030F9AB, 0x12C3D6, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_130) {
  // -5281877500950955.8392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};
  // -5281877500950955
  s21_decimal decimal_check = {{0xF030F9AB, 0x12C3D6, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_131) {
  // 5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  // 5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_132) {
  // -5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  // -5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_133) {
  // 52818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x0}};
  // 52818774997211729016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_134) {
  // -52818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80000000}};
  // -52818774997211729016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_135) {
  // 5281877499721172901608624401.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x10000}};
  // 5281877499721172901608624401
  s21_decimal decimal_check = {{0x11111111, 0x0, 0x11111111, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_136) {
  // -5281877499721172901608624401.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80010000}};
  // -5281877499721172901608624401
  s21_decimal decimal_check = {{0x11111111, 0x0, 0x11111111, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_137) {
  // 5281877499721172.9016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0xD0000}};
  // 5281877499721172
  s21_decimal decimal_check = {{0xF01E35D4, 0x12C3D6, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_138) {
  // -5281877499721172.9016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x800D0000}};
  // -5281877499721172
  s21_decimal decimal_check = {{0xF01E35D4, 0x12C3D6, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_139) {
  // 5.2818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x1C0000}};
  // 5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_140) {
  // -5.2818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x801C0000}};
  // -5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_141) {
  // 52818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x0}};
  // 52818774997211729013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_142) {
  // -52818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80000000}};
  // -52818774997211729013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_143) {
  // 5281877499721172901322293248.0
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x10000}};
  // 5281877499721172901322293248
  s21_decimal decimal_check = {{0x0, 0x0, 0x11111111, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_144) {
  // -5281877499721172901322293248.0
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80010000}};
  // -5281877499721172901322293248
  s21_decimal decimal_check = {{0x0, 0x0, 0x11111111, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_145) {
  // 5281877499721172.9013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0xD0000}};
  // 5281877499721172
  s21_decimal decimal_check = {{0xF01E35D4, 0x12C3D6, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_146) {
  // -5281877499721172.9013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x800D0000}};
  // -5281877499721172
  s21_decimal decimal_check = {{0xF01E35D4, 0x12C3D6, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_147) {
  // 5.2818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x1C0000}};
  // 5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_148) {
  // -5.2818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x801C0000}};
  // -5
  s21_decimal decimal_check = {{0x5, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_149) {
  // 12297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x0}};
  // 12297829382473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_150) {
  // -12297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80000000}};
  // -12297829382473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_151) {
  // 1229782938247303441.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x10000}};
  // 1229782938247303441
  s21_decimal decimal_check = {{0x11111111, 0x11111111, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_152) {
  // -1229782938247303441.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80010000}};
  // -1229782938247303441
  s21_decimal decimal_check = {{0x11111111, 0x11111111, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_153) {
  // 122978293.82473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0xB0000}};
  // 122978293
  s21_decimal decimal_check = {{0x7547FF5, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_154) {
  // -122978293.82473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x800B0000}};
  // -122978293
  s21_decimal decimal_check = {{0x7547FF5, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_155) {
  // 1.2297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_156) {
  // -1.2297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_157) {
  // 12297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x0}};
  // 12297829379609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_158) {
  // -12297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80000000}};
  // -12297829379609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_159) {
  // 1229782937960972288.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x10000}};
  // 1229782937960972288
  s21_decimal decimal_check = {{0x0, 0x11111111, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_160) {
  // -1229782937960972288.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80010000}};
  // -1229782937960972288
  s21_decimal decimal_check = {{0x0, 0x11111111, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_161) {
  // 122978293.79609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0xB0000}};
  // 122978293
  s21_decimal decimal_check = {{0x7547FF5, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_162) {
  // -122978293.79609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x800B0000}};
  // -122978293
  s21_decimal decimal_check = {{0x7547FF5, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_163) {
  // 1.2297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x130000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_164) {
  // -1.2297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_165) {
  // 2863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x0}};
  // 2863311530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_166) {
  // -2863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80000000}};
  // -2863311530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_167) {
  // 286331153.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x10000}};
  // 286331153
  s21_decimal decimal_check = {{0x11111111, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_168) {
  // -286331153.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80010000}};
  // -286331153
  s21_decimal decimal_check = {{0x11111111, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_169) {
  // 286331.1530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x40000}};
  // 286331
  s21_decimal decimal_check = {{0x45E7B, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_170) {
  // -286331.1530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80040000}};
  // -286331
  s21_decimal decimal_check = {{0x45E7B, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_171) {
  // 2.863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x90000}};
  // 2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_172) {
  // -2.863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80090000}};
  // -2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_173) {
  // 26409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // 26409387504754779197847983445
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x55555555, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_174) {
  // -26409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // -26409387504754779197847983445
  s21_decimal decimal_check = {
      {0x55555555, 0x55555555, 0x55555555, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_175) {
  // 2640938750475477919784798344.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x10000}};
  // 2640938750475477919784798344
  s21_decimal decimal_check = {{0x88888888, 0x88888888, 0x8888888, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_176) {
  // -2640938750475477919784798344.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80010000}};
  // -2640938750475477919784798344
  s21_decimal decimal_check = {{0x88888888, 0x88888888, 0x8888888, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_177) {
  // 2640938750475477.9197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0xD0000}};
  // 2640938750475477
  s21_decimal decimal_check = {{0x78187CD5, 0x961EB, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_178) {
  // -2640938750475477.9197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x800D0000}};
  // -2640938750475477
  s21_decimal decimal_check = {{0x78187CD5, 0x961EB, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_179) {
  // 2.6409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x1C0000}};
  // 2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_180) {
  // -2.6409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x801C0000}};
  // -2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_181) {
  // 26409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x0}};
  // 26409387504754779196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_182) {
  // -26409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x80000000}};
  // -26409387504754779196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_183) {
  // 2640938750475477919641632768.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x10000}};
  // 2640938750475477919641632768
  s21_decimal decimal_check = {{0x80000000, 0x88888888, 0x8888888, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_184) {
  // -2640938750475477919641632768.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x80010000}};
  // -2640938750475477919641632768
  s21_decimal decimal_check = {{0x80000000, 0x88888888, 0x8888888, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_185) {
  // 2640938750475477.9196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0xD0000}};
  // 2640938750475477
  s21_decimal decimal_check = {{0x78187CD5, 0x961EB, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_186) {
  // -2640938750475477.9196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x800D0000}};
  // -2640938750475477
  s21_decimal decimal_check = {{0x78187CD5, 0x961EB, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_187) {
  // 2.6409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x1C0000}};
  // 2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_188) {
  // -2.6409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x801C0000}};
  // -2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_189) {
  // 26409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // 26409387498605864508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_190) {
  // -26409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // -26409387498605864508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_191) {
  // 2640938749860586450804312200.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x10000}};
  // 2640938749860586450804312200
  s21_decimal decimal_check = {{0x8888888, 0x80000000, 0x8888888, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_192) {
  // -2640938749860586450804312200.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x80010000}};
  // -2640938749860586450804312200
  s21_decimal decimal_check = {{0x8888888, 0x80000000, 0x8888888, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_193) {
  // 2640938749860586.4508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0xD0000}};
  // 2640938749860586
  s21_decimal decimal_check = {{0x780F1AEA, 0x961EB, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_194) {
  // -2640938749860586.4508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x800D0000}};
  // -2640938749860586
  s21_decimal decimal_check = {{0x780F1AEA, 0x961EB, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_195) {
  // 2.6409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x1C0000}};
  // 2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_196) {
  // -2.6409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x801C0000}};
  // -2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_197) {
  // 26409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x0}};
  // 26409387498605864506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_198) {
  // -26409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x80000000}};
  // -26409387498605864506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_199) {
  // 2640938749860586450661146624.0
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x10000}};
  // 2640938749860586450661146624
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x8888888, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_200) {
  // -2640938749860586450661146624.0
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x80010000}};
  // -2640938749860586450661146624
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x8888888, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_201) {
  // 2640938749860586.4506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0xD0000}};
  // 2640938749860586
  s21_decimal decimal_check = {{0x780F1AEA, 0x961EB, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_202) {
  // -2640938749860586.4506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x800D0000}};
  // -2640938749860586
  s21_decimal decimal_check = {{0x780F1AEA, 0x961EB, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_203) {
  // 2.6409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x1C0000}};
  // 2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_204) {
  // -2.6409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x801C0000}};
  // -2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_205) {
  // 6148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // 6148914691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_206) {
  // -6148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // -6148914691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_207) {
  // 614891469123651720.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x10000}};
  // 614891469123651720
  s21_decimal decimal_check = {{0x88888888, 0x8888888, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_208) {
  // -614891469123651720.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80010000}};
  // -614891469123651720
  s21_decimal decimal_check = {{0x88888888, 0x8888888, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_209) {
  // 6148914.691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0xC0000}};
  // 6148914
  s21_decimal decimal_check = {{0x5DD332, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_210) {
  // -6148914.691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x800C0000}};
  // -6148914
  s21_decimal decimal_check = {{0x5DD332, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_211) {
  // 6.148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x120000}};
  // 6
  s21_decimal decimal_check = {{0x6, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_212) {
  // -6.148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80120000}};
  // -6
  s21_decimal decimal_check = {{0x6, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_213) {
  // 6148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x0}};
  // 6148914689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_214) {
  // -6148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // -6148914689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_215) {
  // 614891468980486144.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x10000}};
  // 614891468980486144
  s21_decimal decimal_check = {{0x80000000, 0x8888888, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_216) {
  // -614891468980486144.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80010000}};
  // -614891468980486144
  s21_decimal decimal_check = {{0x80000000, 0x8888888, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_217) {
  // 6148914.689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0xC0000}};
  // 6148914
  s21_decimal decimal_check = {{0x5DD332, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_218) {
  // -6148914.689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x800C0000}};
  // -6148914
  s21_decimal decimal_check = {{0x5DD332, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_219) {
  // 6.148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x120000}};
  // 6
  s21_decimal decimal_check = {{0x6, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_220) {
  // -6.148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80120000}};
  // -6
  s21_decimal decimal_check = {{0x6, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_221) {
  // 1431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x0}};
  // 1431655765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_222) {
  // -1431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -1431655765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_223) {
  // 143165576.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x10000}};
  // 143165576
  s21_decimal decimal_check = {{0x8888888, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_224) {
  // -143165576.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80010000}};
  // -143165576
  s21_decimal decimal_check = {{0x8888888, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_225) {
  // 143165.5765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x40000}};
  // 143165
  s21_decimal decimal_check = {{0x22F3D, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_226) {
  // -143165.5765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80040000}};
  // -143165
  s21_decimal decimal_check = {{0x22F3D, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_227) {
  // 1.431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x90000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_228) {
  // -1.431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80090000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_229) {
  // 18446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x0}};
  // 18446744078004518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_230) {
  // -18446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80000000}};
  // -18446744078004518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_231) {
  // 1844674407800451891.3
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x10000}};
  // 1844674407800451891
  s21_decimal decimal_check = {{0xB3333333, 0x19999999, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_232) {
  // -1844674407800451891.3
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80010000}};
  // -1844674407800451891
  s21_decimal decimal_check = {{0xB3333333, 0x19999999, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_233) {
  // 184467440780.04518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80000}};
  // 184467440780
  s21_decimal decimal_check = {{0xF31DC48C, 0x2A, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_234) {
  // -184467440780.04518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80080000}};
  // -184467440780
  s21_decimal decimal_check = {{0xF31DC48C, 0x2A, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_235) {
  // 1.8446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x130000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_236) {
  // -1.8446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80130000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_237) {
  // 18446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x0}};
  // 18446744078004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_238) {
  // -18446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80000000}};
  // -18446744078004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_239) {
  // 1844674407800451891.2
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x10000}};
  // 1844674407800451891
  s21_decimal decimal_check = {{0xB3333333, 0x19999999, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_240) {
  // -1844674407800451891.2
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80010000}};
  // -1844674407800451891
  s21_decimal decimal_check = {{0xB3333333, 0x19999999, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_241) {
  // 18446744078.004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x90000}};
  // 18446744078
  s21_decimal decimal_check = {{0x4B82FA0E, 0x4, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_242) {
  // -18446744078.004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80090000}};
  // -18446744078
  s21_decimal decimal_check = {{0x4B82FA0E, 0x4, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_243) {
  // 1.8446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x130000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_244) {
  // -1.8446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80130000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_245) {
  // 18446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x0}};
  // 18446744073709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_246) {
  // -18446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80000000}};
  // -18446744073709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_247) {
  // 1844674407370955161.7
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x10000}};
  // 1844674407370955161
  s21_decimal decimal_check = {{0x99999999, 0x19999999, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_248) {
  // -1844674407370955161.7
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80010000}};
  // -1844674407370955161
  s21_decimal decimal_check = {{0x99999999, 0x19999999, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_249) {
  // 1844674407.3709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0xA0000}};
  // 1844674407
  s21_decimal decimal_check = {{0x6DF37F67, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_250) {
  // -1844674407.3709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x800A0000}};
  // -1844674407
  s21_decimal decimal_check = {{0x6DF37F67, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_251) {
  // 1.8446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x130000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_252) {
  // -1.8446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80130000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_253) {
  // 18446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x0}};
  // 18446744073709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_254) {
  // -18446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80000000}};
  // -18446744073709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_255) {
  // 1844674407370955161.6
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x10000}};
  // 1844674407370955161
  s21_decimal decimal_check = {{0x99999999, 0x19999999, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_256) {
  // -1844674407370955161.6
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80010000}};
  // -1844674407370955161
  s21_decimal decimal_check = {{0x99999999, 0x19999999, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_257) {
  // 184467440.73709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0xB0000}};
  // 184467440
  s21_decimal decimal_check = {{0xAFEBFF0, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_258) {
  // -184467440.73709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x800B0000}};
  // -184467440
  s21_decimal decimal_check = {{0xAFEBFF0, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_259) {
  // 1.8446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x130000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_260) {
  // -1.8446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80130000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_261) {
  // 4294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x0}};
  // 4294967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_262) {
  // -4294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80000000}};
  // -4294967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_263) {
  // 429496729.7
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x10000}};
  // 429496729
  s21_decimal decimal_check = {{0x19999999, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_264) {
  // -429496729.7
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80010000}};
  // -429496729
  s21_decimal decimal_check = {{0x19999999, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_265) {
  // 42949672.97
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x20000}};
  // 42949672
  s21_decimal decimal_check = {{0x28F5C28, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_266) {
  // -42949672.97
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80020000}};
  // -42949672
  s21_decimal decimal_check = {{0x28F5C28, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_267) {
  // 429496.7297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x40000}};
  // 429496
  s21_decimal decimal_check = {{0x68DB8, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_268) {
  // -429496.7297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80040000}};
  // -429496
  s21_decimal decimal_check = {{0x68DB8, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_269) {
  // 4.294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x90000}};
  // 4
  s21_decimal decimal_check = {{0x4, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_270) {
  // -4.294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80090000}};
  // -4
  s21_decimal decimal_check = {{0x4, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_271) {
  // 42.94967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80000}};
  // 42
  s21_decimal decimal_check = {{0x2A, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_272) {
  // -42.94967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80080000}};
  // -42
  s21_decimal decimal_check = {{0x2A, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_273) {
  // 4294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x0}};
  // 4294967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_274) {
  // -4294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80000000}};
  // -4294967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_275) {
  // 429496729.6
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x10000}};
  // 429496729
  s21_decimal decimal_check = {{0x19999999, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_276) {
  // -429496729.6
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80010000}};
  // -429496729
  s21_decimal decimal_check = {{0x19999999, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_277) {
  // 42949672.96
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x20000}};
  // 42949672
  s21_decimal decimal_check = {{0x28F5C28, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_278) {
  // -42949672.96
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80020000}};
  // -42949672
  s21_decimal decimal_check = {{0x28F5C28, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_279) {
  // 4294967.296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x30000}};
  // 4294967
  s21_decimal decimal_check = {{0x418937, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_280) {
  // -4294967.296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80030000}};
  // -4294967
  s21_decimal decimal_check = {{0x418937, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_281) {
  // 4.294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x90000}};
  // 4
  s21_decimal decimal_check = {{0x4, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_282) {
  // -4.294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80090000}};
  // -4
  s21_decimal decimal_check = {{0x4, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_283) {
  // 42.94967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80000}};
  // 42
  s21_decimal decimal_check = {{0x2A, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_284) {
  // -42.94967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80080000}};
  // -42
  s21_decimal decimal_check = {{0x2A, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_285) {
  // 1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x0}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_286) {
  // -1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x80000000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_287) {
  // 0.1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x10000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_288) {
  // -0.1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x80010000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_289) {
  // 0.0000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0xD0000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_290) {
  // -0.0000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x800D0000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_291) {
  // 0.00000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0xE0000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_292) {
  // -0.00000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x800E0000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_293) {
  // 0.000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x1B0000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_294) {
  // -0.000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x801B0000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_295) {
  // 0.0000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_296) {
  // -0.0000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 0
  s21_decimal decimal_check = {{0x0, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_297) {
  // 39614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x0}};
  // 39614081266355540835774234624
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x80000000, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_298) {
  // -39614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80000000}};
  // -39614081266355540835774234624
  s21_decimal decimal_check = {
      {0x80000000, 0x80000000, 0x80000000, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_299) {
  // 3961408126635554083577423462.4
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x10000}};
  // 3961408126635554083577423462
  s21_decimal decimal_check = {{0xA6666666, 0xD9999999, 0xCCCCCCC, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_300) {
  // -3961408126635554083577423462.4
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80010000}};
  // -3961408126635554083577423462
  s21_decimal decimal_check = {{0xA6666666, 0xD9999999, 0xCCCCCCC, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_301) {
  // 39614081266355.540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0xF0000}};
  // 39614081266355
  s21_decimal decimal_check = {{0x5F3DF2B3, 0x2407, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_302) {
  // -39614081266355.540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x800F0000}};
  // -39614081266355
  s21_decimal decimal_check = {{0x5F3DF2B3, 0x2407, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_303) {
  // 3.9614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x1C0000}};
  // 3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_304) {
  // -3.9614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x801C0000}};
  // -3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_305) {
  // 39614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x0}};
  // 39614081266355540833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_306) {
  // -39614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x80000000}};
  // -39614081266355540833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_307) {
  // 3961408126635554083362675097.6
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x10000}};
  // 3961408126635554083362675097
  s21_decimal decimal_check = {{0x99999999, 0xD9999999, 0xCCCCCCC, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_308) {
  // -3961408126635554083362675097.6
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x80010000}};
  // -3961408126635554083362675097
  s21_decimal decimal_check = {{0x99999999, 0xD9999999, 0xCCCCCCC, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_309) {
  // 3961408126635554.0833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0xD0000}};
  // 3961408126635554
  s21_decimal decimal_check = {{0x3432CE22, 0xE12E1, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_310) {
  // -3961408126635554.0833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x800D0000}};
  // -3961408126635554
  s21_decimal decimal_check = {{0x3432CE22, 0xE12E1, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_311) {
  // 3.9614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x1C0000}};
  // 3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_312) {
  // -3.9614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x801C0000}};
  // -3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_313) {
  // 39614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x0}};
  // 39614081257132168798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_314) {
  // -39614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x80000000}};
  // -39614081257132168798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_315) {
  // 3961408125713216879891945881.6
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x10000}};
  // 3961408125713216879891945881
  s21_decimal decimal_check = {{0xD9999999, 0xCCCCCCCC, 0xCCCCCCC, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_316) {
  // -3961408125713216879891945881.6
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x80010000}};
  // -3961408125713216879891945881
  s21_decimal decimal_check = {{0xD9999999, 0xCCCCCCCC, 0xCCCCCCC, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_317) {
  // 39614081257132168.798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0xC0000}};
  // 39614081257132168
  s21_decimal decimal_check = {{0x96F5088, 0x8CBCCC, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_318) {
  // -39614081257132168.798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x800C0000}};
  // -39614081257132168
  s21_decimal decimal_check = {{0x96F5088, 0x8CBCCC, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_319) {
  // 3.9614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x1C0000}};
  // 3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_320) {
  // -3.9614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x801C0000}};
  // -3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_321) {
  // 39614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x0}};
  // 39614081257132168796771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_322) {
  // -39614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x80000000}};
  // -39614081257132168796771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_323) {
  // 3961408125713216879677197516.8
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x10000}};
  // 3961408125713216879677197516
  s21_decimal decimal_check = {{0xCCCCCCCC, 0xCCCCCCCC, 0xCCCCCCC, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_324) {
  // -3961408125713216879677197516.8
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x80010000}};
  // -3961408125713216879677197516
  s21_decimal decimal_check = {{0xCCCCCCCC, 0xCCCCCCCC, 0xCCCCCCC, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_325) {
  // 396140812571321687.96771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0xB0000}};
  // 396140812571321687
  s21_decimal decimal_check = {{0x5E592557, 0x57F5FF8, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_326) {
  // -396140812571321687.96771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x800B0000}};
  // -396140812571321687
  s21_decimal decimal_check = {{0x5E592557, 0x57F5FF8, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_327) {
  // 3.9614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x1C0000}};
  // 3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_328) {
  // -3.9614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x801C0000}};
  // -3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_329) {
  // 9223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x0}};
  // 9223372039002259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_330) {
  // -9223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80000000}};
  // -9223372039002259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_331) {
  // 922337203900225945.6
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x10000}};
  // 922337203900225945
  s21_decimal decimal_check = {{0xD9999999, 0xCCCCCCC, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_332) {
  // -922337203900225945.6
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80010000}};
  // -922337203900225945
  s21_decimal decimal_check = {{0xD9999999, 0xCCCCCCC, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_333) {
  // 922337203900.2259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x70000}};
  // 922337203900
  s21_decimal decimal_check = {{0xBF94D6BC, 0xD6, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_334) {
  // -922337203900.2259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80070000}};
  // -922337203900
  s21_decimal decimal_check = {{0xBF94D6BC, 0xD6, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_335) {
  // 9.223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x120000}};
  // 9
  s21_decimal decimal_check = {{0x9, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_336) {
  // -9.223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80120000}};
  // -9
  s21_decimal decimal_check = {{0x9, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_337) {
  // 9223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x0}};
  // 9223372036854775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_338) {
  // -9223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80000000}};
  // -9223372036854775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_339) {
  // 922337203685477580.8
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x10000}};
  // 922337203685477580
  s21_decimal decimal_check = {{0xCCCCCCCC, 0xCCCCCCC, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_340) {
  // -922337203685477580.8
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80010000}};
  // -922337203685477580
  s21_decimal decimal_check = {{0xCCCCCCCC, 0xCCCCCCC, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_341) {
  // 92233720368.54775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80000}};
  // 92233720368
  s21_decimal decimal_check = {{0x798EE230, 0x15, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_342) {
  // -92233720368.54775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80080000}};
  // -92233720368
  s21_decimal decimal_check = {{0x798EE230, 0x15, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_343) {
  // 9.223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x120000}};
  // 9
  s21_decimal decimal_check = {{0x9, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_344) {
  // -9.223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80120000}};
  // -9
  s21_decimal decimal_check = {{0x9, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_345) {
  // 2147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x0}};
  // 2147483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_346) {
  // -2147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80000000}};
  // -2147483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_347) {
  // 214748364.8
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x10000}};
  // 214748364
  s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_348) {
  // -214748364.8
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80010000}};
  // -214748364
  s21_decimal decimal_check = {{0xCCCCCCC, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_349) {
  // 21474836.48
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x20000}};
  // 21474836
  s21_decimal decimal_check = {{0x147AE14, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_350) {
  // -21474836.48
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80020000}};
  // -21474836
  s21_decimal decimal_check = {{0x147AE14, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_351) {
  // 214748.3648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x40000}};
  // 214748
  s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_352) {
  // -214748.3648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80040000}};
  // -214748
  s21_decimal decimal_check = {{0x346DC, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_353) {
  // 21.47483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80000}};
  // 21
  s21_decimal decimal_check = {{0x15, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_354) {
  // -21.47483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80080000}};
  // -21
  s21_decimal decimal_check = {{0x15, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_355) {
  // 2.147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x90000}};
  // 2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_356) {
  // -2.147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80090000}};
  // -2
  s21_decimal decimal_check = {{0x2, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_357) {
  // 156064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x0}};
  // 156064767562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_358) {
  // -156064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80000000}};
  // -156064767562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_359) {
  // 15606476756221269530542694.4
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x10000}};
  // 15606476756221269530542694
  s21_decimal decimal_check = {{0x99A68266, 0xCCD9B599, 0xCE8CC, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_360) {
  // -15606476756221269530542694.4
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80010000}};
  // -15606476756221269530542694
  s21_decimal decimal_check = {{0x99A68266, 0xCCD9B599, 0xCE8CC, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_361) {
  // 1560647.67562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x140000}};
  // 1560647
  s21_decimal decimal_check = {{0x17D047, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_362) {
  // -1560647.67562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80140000}};
  // -1560647
  s21_decimal decimal_check = {{0x17D047, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_363) {
  // 1.56064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x1A0000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_364) {
  // -1.56064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x801A0000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_365) {
  // 156064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x0}};
  // 156064767562212695296966656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_366) {
  // -156064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x80000000}};
  // -156064767562212695296966656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_367) {
  // 15606476756221269529696665.6
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x10000}};
  // 15606476756221269529696665
  s21_decimal decimal_check = {{0x99999999, 0xCCD9B599, 0xCE8CC, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_368) {
  // -15606476756221269529696665.6
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x80010000}};
  // -15606476756221269529696665
  s21_decimal decimal_check = {{0x99999999, 0xCCD9B599, 0xCE8CC, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_369) {
  // 15606476756221269529696.6656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x40000}};
  // 15606476756221269529696
  s21_decimal decimal_check = {{0x27525460, 0x75F7320, 0x34E, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_370) {
  // -15606476756221269529696.6656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x80040000}};
  // -15606476756221269529696
  s21_decimal decimal_check = {{0x27525460, 0x75F7320, 0x34E, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_371) {
  // 1.56064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x1A0000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_372) {
  // -1.56064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x801A0000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_373) {
  // 156064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x0}};
  // 156064767525876035030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_374) {
  // -156064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x80000000}};
  // -156064767525876035030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_375) {
  // 15606476752587603503068569.6
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x10000}};
  // 15606476752587603503068569
  s21_decimal decimal_check = {{0xCCD9B599, 0xCCCCCCCC, 0xCE8CC, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_376) {
  // -15606476752587603503068569.6
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x80010000}};
  // -15606476752587603503068569
  s21_decimal decimal_check = {{0xCCD9B599, 0xCCCCCCCC, 0xCE8CC, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_377) {
  // 1560647675258760.35030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0xB0000}};
  // 1560647675258760
  s21_decimal decimal_check = {{0x9A4DA788, 0x58B66, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_378) {
  // -1560647675258760.35030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x800B0000}};
  // -1560647675258760
  s21_decimal decimal_check = {{0x9A4DA788, 0x58B66, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_379) {
  // 1.56064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x1A0000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_380) {
  // -1.56064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x801A0000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_381) {
  // 156064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x0}};
  // 156064767525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_382) {
  // -156064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x80000000}};
  // -156064767525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_383) {
  // 15606476752587603502222540.8
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x10000}};
  // 15606476752587603502222540
  s21_decimal decimal_check = {{0xCCCCCCCC, 0xCCCCCCCC, 0xCE8CC, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_384) {
  // -15606476752587603502222540.8
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x80010000}};
  // -15606476752587603502222540
  s21_decimal decimal_check = {{0xCCCCCCCC, 0xCCCCCCCC, 0xCE8CC, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_385) {
  // 15606476.7525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x130000}};
  // 15606476
  s21_decimal decimal_check = {{0xEE22CC, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_386) {
  // -15606476.7525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x80130000}};
  // -15606476
  s21_decimal decimal_check = {{0xEE22CC, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_387) {
  // 1.56064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x1A0000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_388) {
  // -1.56064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x801A0000}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_389) {
  // 36336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x0}};
  // 36336660283201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_390) {
  // -36336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80000000}};
  // -36336660283201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_391) {
  // 3633666028320153.6
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x10000}};
  // 3633666028320153
  s21_decimal decimal_check = {{0xCCD9B599, 0xCE8CC, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_392) {
  // -3633666028320153.6
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80010000}};
  // -3633666028320153
  s21_decimal decimal_check = {{0xCCD9B599, 0xCE8CC, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_393) {
  // 363366602.83201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80000}};
  // 363366602
  s21_decimal decimal_check = {{0x15A888CA, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_394) {
  // -363366602.83201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80080000}};
  // -363366602
  s21_decimal decimal_check = {{0x15A888CA, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_395) {
  // 3.6336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x100000}};
  // 3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_396) {
  // -3.6336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // -3
  s21_decimal decimal_check = {{0x3, 0x0, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_397) {
  // 36336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x0}};
  // 36336660274741248
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_398) {
  // -36336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80000000}};
  // -36336660274741248
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_399) {
  // 3633666027474124.8
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x10000}};
  // 3633666027474124
  s21_decimal decimal_check = {{0xCCCCCCCC, 0xCE8CC, 0x0, 0x0}};

  test_truncate(decimal, decimal_check);
}

START_TEST(test_truncate_400) {
  // -3633666027474124.8
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80010000}};
  // -3633666027474124
  s21_decimal decimal_check = {{0xCCCCCCCC, 0xCE8CC, 0x0, 0x80000000}};

  test_truncate(decimal, decimal_check);
}

Suite *truncate_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("truncate_suite");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_truncate_1);
  tcase_add_test(tc_core, test_truncate_2);
  tcase_add_test(tc_core, test_truncate_3);
  tcase_add_test(tc_core, test_truncate_4);
  tcase_add_test(tc_core, test_truncate_5);
  tcase_add_test(tc_core, test_truncate_6);
  tcase_add_test(tc_core, test_truncate_7);
  tcase_add_test(tc_core, test_truncate_8);
  tcase_add_test(tc_core, test_truncate_9);
  tcase_add_test(tc_core, test_truncate_10);
  tcase_add_test(tc_core, test_truncate_11);
  tcase_add_test(tc_core, test_truncate_12);
  tcase_add_test(tc_core, test_truncate_13);
  tcase_add_test(tc_core, test_truncate_14);
  tcase_add_test(tc_core, test_truncate_15);
  tcase_add_test(tc_core, test_truncate_16);
  tcase_add_test(tc_core, test_truncate_17);
  tcase_add_test(tc_core, test_truncate_18);
  tcase_add_test(tc_core, test_truncate_19);
  tcase_add_test(tc_core, test_truncate_20);
  tcase_add_test(tc_core, test_truncate_21);
  tcase_add_test(tc_core, test_truncate_22);
  tcase_add_test(tc_core, test_truncate_23);
  tcase_add_test(tc_core, test_truncate_24);
  tcase_add_test(tc_core, test_truncate_25);
  tcase_add_test(tc_core, test_truncate_26);
  tcase_add_test(tc_core, test_truncate_27);
  tcase_add_test(tc_core, test_truncate_28);
  tcase_add_test(tc_core, test_truncate_29);
  tcase_add_test(tc_core, test_truncate_30);
  tcase_add_test(tc_core, test_truncate_31);
  tcase_add_test(tc_core, test_truncate_32);
  tcase_add_test(tc_core, test_truncate_33);
  tcase_add_test(tc_core, test_truncate_34);
  tcase_add_test(tc_core, test_truncate_35);
  tcase_add_test(tc_core, test_truncate_36);
  tcase_add_test(tc_core, test_truncate_37);
  tcase_add_test(tc_core, test_truncate_38);
  tcase_add_test(tc_core, test_truncate_39);
  tcase_add_test(tc_core, test_truncate_40);
  tcase_add_test(tc_core, test_truncate_41);
  tcase_add_test(tc_core, test_truncate_42);
  tcase_add_test(tc_core, test_truncate_43);
  tcase_add_test(tc_core, test_truncate_44);
  tcase_add_test(tc_core, test_truncate_45);
  tcase_add_test(tc_core, test_truncate_46);
  tcase_add_test(tc_core, test_truncate_47);
  tcase_add_test(tc_core, test_truncate_48);
  tcase_add_test(tc_core, test_truncate_49);
  tcase_add_test(tc_core, test_truncate_50);
  tcase_add_test(tc_core, test_truncate_51);
  tcase_add_test(tc_core, test_truncate_52);
  tcase_add_test(tc_core, test_truncate_53);
  tcase_add_test(tc_core, test_truncate_54);
  tcase_add_test(tc_core, test_truncate_55);
  tcase_add_test(tc_core, test_truncate_56);
  tcase_add_test(tc_core, test_truncate_57);
  tcase_add_test(tc_core, test_truncate_58);
  tcase_add_test(tc_core, test_truncate_59);
  tcase_add_test(tc_core, test_truncate_60);
  tcase_add_test(tc_core, test_truncate_61);
  tcase_add_test(tc_core, test_truncate_62);
  tcase_add_test(tc_core, test_truncate_63);
  tcase_add_test(tc_core, test_truncate_64);
  tcase_add_test(tc_core, test_truncate_65);
  tcase_add_test(tc_core, test_truncate_66);
  tcase_add_test(tc_core, test_truncate_67);
  tcase_add_test(tc_core, test_truncate_68);
  tcase_add_test(tc_core, test_truncate_69);
  tcase_add_test(tc_core, test_truncate_70);
  tcase_add_test(tc_core, test_truncate_71);
  tcase_add_test(tc_core, test_truncate_72);
  tcase_add_test(tc_core, test_truncate_73);
  tcase_add_test(tc_core, test_truncate_74);
  tcase_add_test(tc_core, test_truncate_75);
  tcase_add_test(tc_core, test_truncate_76);
  tcase_add_test(tc_core, test_truncate_77);
  tcase_add_test(tc_core, test_truncate_78);
  tcase_add_test(tc_core, test_truncate_79);
  tcase_add_test(tc_core, test_truncate_80);
  tcase_add_test(tc_core, test_truncate_81);
  tcase_add_test(tc_core, test_truncate_82);
  tcase_add_test(tc_core, test_truncate_83);
  tcase_add_test(tc_core, test_truncate_84);
  tcase_add_test(tc_core, test_truncate_85);
  tcase_add_test(tc_core, test_truncate_86);
  tcase_add_test(tc_core, test_truncate_87);
  tcase_add_test(tc_core, test_truncate_88);
  tcase_add_test(tc_core, test_truncate_89);
  tcase_add_test(tc_core, test_truncate_90);
  tcase_add_test(tc_core, test_truncate_91);
  tcase_add_test(tc_core, test_truncate_92);
  tcase_add_test(tc_core, test_truncate_93);
  tcase_add_test(tc_core, test_truncate_94);
  tcase_add_test(tc_core, test_truncate_95);
  tcase_add_test(tc_core, test_truncate_96);
  tcase_add_test(tc_core, test_truncate_97);
  tcase_add_test(tc_core, test_truncate_98);
  tcase_add_test(tc_core, test_truncate_99);
  tcase_add_test(tc_core, test_truncate_100);
  tcase_add_test(tc_core, test_truncate_101);
  tcase_add_test(tc_core, test_truncate_102);
  tcase_add_test(tc_core, test_truncate_103);
  tcase_add_test(tc_core, test_truncate_104);
  tcase_add_test(tc_core, test_truncate_105);
  tcase_add_test(tc_core, test_truncate_106);
  tcase_add_test(tc_core, test_truncate_107);
  tcase_add_test(tc_core, test_truncate_108);
  tcase_add_test(tc_core, test_truncate_109);
  tcase_add_test(tc_core, test_truncate_110);
  tcase_add_test(tc_core, test_truncate_111);
  tcase_add_test(tc_core, test_truncate_112);
  tcase_add_test(tc_core, test_truncate_113);
  tcase_add_test(tc_core, test_truncate_114);
  tcase_add_test(tc_core, test_truncate_115);
  tcase_add_test(tc_core, test_truncate_116);
  tcase_add_test(tc_core, test_truncate_117);
  tcase_add_test(tc_core, test_truncate_118);
  tcase_add_test(tc_core, test_truncate_119);
  tcase_add_test(tc_core, test_truncate_120);
  tcase_add_test(tc_core, test_truncate_121);
  tcase_add_test(tc_core, test_truncate_122);
  tcase_add_test(tc_core, test_truncate_123);
  tcase_add_test(tc_core, test_truncate_124);
  tcase_add_test(tc_core, test_truncate_125);
  tcase_add_test(tc_core, test_truncate_126);
  tcase_add_test(tc_core, test_truncate_127);
  tcase_add_test(tc_core, test_truncate_128);
  tcase_add_test(tc_core, test_truncate_129);
  tcase_add_test(tc_core, test_truncate_130);
  tcase_add_test(tc_core, test_truncate_131);
  tcase_add_test(tc_core, test_truncate_132);
  tcase_add_test(tc_core, test_truncate_133);
  tcase_add_test(tc_core, test_truncate_134);
  tcase_add_test(tc_core, test_truncate_135);
  tcase_add_test(tc_core, test_truncate_136);
  tcase_add_test(tc_core, test_truncate_137);
  tcase_add_test(tc_core, test_truncate_138);
  tcase_add_test(tc_core, test_truncate_139);
  tcase_add_test(tc_core, test_truncate_140);
  tcase_add_test(tc_core, test_truncate_141);
  tcase_add_test(tc_core, test_truncate_142);
  tcase_add_test(tc_core, test_truncate_143);
  tcase_add_test(tc_core, test_truncate_144);
  tcase_add_test(tc_core, test_truncate_145);
  tcase_add_test(tc_core, test_truncate_146);
  tcase_add_test(tc_core, test_truncate_147);
  tcase_add_test(tc_core, test_truncate_148);
  tcase_add_test(tc_core, test_truncate_149);
  tcase_add_test(tc_core, test_truncate_150);
  tcase_add_test(tc_core, test_truncate_151);
  tcase_add_test(tc_core, test_truncate_152);
  tcase_add_test(tc_core, test_truncate_153);
  tcase_add_test(tc_core, test_truncate_154);
  tcase_add_test(tc_core, test_truncate_155);
  tcase_add_test(tc_core, test_truncate_156);
  tcase_add_test(tc_core, test_truncate_157);
  tcase_add_test(tc_core, test_truncate_158);
  tcase_add_test(tc_core, test_truncate_159);
  tcase_add_test(tc_core, test_truncate_160);
  tcase_add_test(tc_core, test_truncate_161);
  tcase_add_test(tc_core, test_truncate_162);
  tcase_add_test(tc_core, test_truncate_163);
  tcase_add_test(tc_core, test_truncate_164);
  tcase_add_test(tc_core, test_truncate_165);
  tcase_add_test(tc_core, test_truncate_166);
  tcase_add_test(tc_core, test_truncate_167);
  tcase_add_test(tc_core, test_truncate_168);
  tcase_add_test(tc_core, test_truncate_169);
  tcase_add_test(tc_core, test_truncate_170);
  tcase_add_test(tc_core, test_truncate_171);
  tcase_add_test(tc_core, test_truncate_172);
  tcase_add_test(tc_core, test_truncate_173);
  tcase_add_test(tc_core, test_truncate_174);
  tcase_add_test(tc_core, test_truncate_175);
  tcase_add_test(tc_core, test_truncate_176);
  tcase_add_test(tc_core, test_truncate_177);
  tcase_add_test(tc_core, test_truncate_178);
  tcase_add_test(tc_core, test_truncate_179);
  tcase_add_test(tc_core, test_truncate_180);
  tcase_add_test(tc_core, test_truncate_181);
  tcase_add_test(tc_core, test_truncate_182);
  tcase_add_test(tc_core, test_truncate_183);
  tcase_add_test(tc_core, test_truncate_184);
  tcase_add_test(tc_core, test_truncate_185);
  tcase_add_test(tc_core, test_truncate_186);
  tcase_add_test(tc_core, test_truncate_187);
  tcase_add_test(tc_core, test_truncate_188);
  tcase_add_test(tc_core, test_truncate_189);
  tcase_add_test(tc_core, test_truncate_190);
  tcase_add_test(tc_core, test_truncate_191);
  tcase_add_test(tc_core, test_truncate_192);
  tcase_add_test(tc_core, test_truncate_193);
  tcase_add_test(tc_core, test_truncate_194);
  tcase_add_test(tc_core, test_truncate_195);
  tcase_add_test(tc_core, test_truncate_196);
  tcase_add_test(tc_core, test_truncate_197);
  tcase_add_test(tc_core, test_truncate_198);
  tcase_add_test(tc_core, test_truncate_199);
  tcase_add_test(tc_core, test_truncate_200);
  tcase_add_test(tc_core, test_truncate_201);
  tcase_add_test(tc_core, test_truncate_202);
  tcase_add_test(tc_core, test_truncate_203);
  tcase_add_test(tc_core, test_truncate_204);
  tcase_add_test(tc_core, test_truncate_205);
  tcase_add_test(tc_core, test_truncate_206);
  tcase_add_test(tc_core, test_truncate_207);
  tcase_add_test(tc_core, test_truncate_208);
  tcase_add_test(tc_core, test_truncate_209);
  tcase_add_test(tc_core, test_truncate_210);
  tcase_add_test(tc_core, test_truncate_211);
  tcase_add_test(tc_core, test_truncate_212);
  tcase_add_test(tc_core, test_truncate_213);
  tcase_add_test(tc_core, test_truncate_214);
  tcase_add_test(tc_core, test_truncate_215);
  tcase_add_test(tc_core, test_truncate_216);
  tcase_add_test(tc_core, test_truncate_217);
  tcase_add_test(tc_core, test_truncate_218);
  tcase_add_test(tc_core, test_truncate_219);
  tcase_add_test(tc_core, test_truncate_220);
  tcase_add_test(tc_core, test_truncate_221);
  tcase_add_test(tc_core, test_truncate_222);
  tcase_add_test(tc_core, test_truncate_223);
  tcase_add_test(tc_core, test_truncate_224);
  tcase_add_test(tc_core, test_truncate_225);
  tcase_add_test(tc_core, test_truncate_226);
  tcase_add_test(tc_core, test_truncate_227);
  tcase_add_test(tc_core, test_truncate_228);
  tcase_add_test(tc_core, test_truncate_229);
  tcase_add_test(tc_core, test_truncate_230);
  tcase_add_test(tc_core, test_truncate_231);
  tcase_add_test(tc_core, test_truncate_232);
  tcase_add_test(tc_core, test_truncate_233);
  tcase_add_test(tc_core, test_truncate_234);
  tcase_add_test(tc_core, test_truncate_235);
  tcase_add_test(tc_core, test_truncate_236);
  tcase_add_test(tc_core, test_truncate_237);
  tcase_add_test(tc_core, test_truncate_238);
  tcase_add_test(tc_core, test_truncate_239);
  tcase_add_test(tc_core, test_truncate_240);
  tcase_add_test(tc_core, test_truncate_241);
  tcase_add_test(tc_core, test_truncate_242);
  tcase_add_test(tc_core, test_truncate_243);
  tcase_add_test(tc_core, test_truncate_244);
  tcase_add_test(tc_core, test_truncate_245);
  tcase_add_test(tc_core, test_truncate_246);
  tcase_add_test(tc_core, test_truncate_247);
  tcase_add_test(tc_core, test_truncate_248);
  tcase_add_test(tc_core, test_truncate_249);
  tcase_add_test(tc_core, test_truncate_250);
  tcase_add_test(tc_core, test_truncate_251);
  tcase_add_test(tc_core, test_truncate_252);
  tcase_add_test(tc_core, test_truncate_253);
  tcase_add_test(tc_core, test_truncate_254);
  tcase_add_test(tc_core, test_truncate_255);
  tcase_add_test(tc_core, test_truncate_256);
  tcase_add_test(tc_core, test_truncate_257);
  tcase_add_test(tc_core, test_truncate_258);
  tcase_add_test(tc_core, test_truncate_259);
  tcase_add_test(tc_core, test_truncate_260);
  tcase_add_test(tc_core, test_truncate_261);
  tcase_add_test(tc_core, test_truncate_262);
  tcase_add_test(tc_core, test_truncate_263);
  tcase_add_test(tc_core, test_truncate_264);
  tcase_add_test(tc_core, test_truncate_265);
  tcase_add_test(tc_core, test_truncate_266);
  tcase_add_test(tc_core, test_truncate_267);
  tcase_add_test(tc_core, test_truncate_268);
  tcase_add_test(tc_core, test_truncate_269);
  tcase_add_test(tc_core, test_truncate_270);
  tcase_add_test(tc_core, test_truncate_271);
  tcase_add_test(tc_core, test_truncate_272);
  tcase_add_test(tc_core, test_truncate_273);
  tcase_add_test(tc_core, test_truncate_274);
  tcase_add_test(tc_core, test_truncate_275);
  tcase_add_test(tc_core, test_truncate_276);
  tcase_add_test(tc_core, test_truncate_277);
  tcase_add_test(tc_core, test_truncate_278);
  tcase_add_test(tc_core, test_truncate_279);
  tcase_add_test(tc_core, test_truncate_280);
  tcase_add_test(tc_core, test_truncate_281);
  tcase_add_test(tc_core, test_truncate_282);
  tcase_add_test(tc_core, test_truncate_283);
  tcase_add_test(tc_core, test_truncate_284);
  tcase_add_test(tc_core, test_truncate_285);
  tcase_add_test(tc_core, test_truncate_286);
  tcase_add_test(tc_core, test_truncate_287);
  tcase_add_test(tc_core, test_truncate_288);
  tcase_add_test(tc_core, test_truncate_289);
  tcase_add_test(tc_core, test_truncate_290);
  tcase_add_test(tc_core, test_truncate_291);
  tcase_add_test(tc_core, test_truncate_292);
  tcase_add_test(tc_core, test_truncate_293);
  tcase_add_test(tc_core, test_truncate_294);
  tcase_add_test(tc_core, test_truncate_295);
  tcase_add_test(tc_core, test_truncate_296);
  tcase_add_test(tc_core, test_truncate_297);
  tcase_add_test(tc_core, test_truncate_298);
  tcase_add_test(tc_core, test_truncate_299);
  tcase_add_test(tc_core, test_truncate_300);
  tcase_add_test(tc_core, test_truncate_301);
  tcase_add_test(tc_core, test_truncate_302);
  tcase_add_test(tc_core, test_truncate_303);
  tcase_add_test(tc_core, test_truncate_304);
  tcase_add_test(tc_core, test_truncate_305);
  tcase_add_test(tc_core, test_truncate_306);
  tcase_add_test(tc_core, test_truncate_307);
  tcase_add_test(tc_core, test_truncate_308);
  tcase_add_test(tc_core, test_truncate_309);
  tcase_add_test(tc_core, test_truncate_310);
  tcase_add_test(tc_core, test_truncate_311);
  tcase_add_test(tc_core, test_truncate_312);
  tcase_add_test(tc_core, test_truncate_313);
  tcase_add_test(tc_core, test_truncate_314);
  tcase_add_test(tc_core, test_truncate_315);
  tcase_add_test(tc_core, test_truncate_316);
  tcase_add_test(tc_core, test_truncate_317);
  tcase_add_test(tc_core, test_truncate_318);
  tcase_add_test(tc_core, test_truncate_319);
  tcase_add_test(tc_core, test_truncate_320);
  tcase_add_test(tc_core, test_truncate_321);
  tcase_add_test(tc_core, test_truncate_322);
  tcase_add_test(tc_core, test_truncate_323);
  tcase_add_test(tc_core, test_truncate_324);
  tcase_add_test(tc_core, test_truncate_325);
  tcase_add_test(tc_core, test_truncate_326);
  tcase_add_test(tc_core, test_truncate_327);
  tcase_add_test(tc_core, test_truncate_328);
  tcase_add_test(tc_core, test_truncate_329);
  tcase_add_test(tc_core, test_truncate_330);
  tcase_add_test(tc_core, test_truncate_331);
  tcase_add_test(tc_core, test_truncate_332);
  tcase_add_test(tc_core, test_truncate_333);
  tcase_add_test(tc_core, test_truncate_334);
  tcase_add_test(tc_core, test_truncate_335);
  tcase_add_test(tc_core, test_truncate_336);
  tcase_add_test(tc_core, test_truncate_337);
  tcase_add_test(tc_core, test_truncate_338);
  tcase_add_test(tc_core, test_truncate_339);
  tcase_add_test(tc_core, test_truncate_340);
  tcase_add_test(tc_core, test_truncate_341);
  tcase_add_test(tc_core, test_truncate_342);
  tcase_add_test(tc_core, test_truncate_343);
  tcase_add_test(tc_core, test_truncate_344);
  tcase_add_test(tc_core, test_truncate_345);
  tcase_add_test(tc_core, test_truncate_346);
  tcase_add_test(tc_core, test_truncate_347);
  tcase_add_test(tc_core, test_truncate_348);
  tcase_add_test(tc_core, test_truncate_349);
  tcase_add_test(tc_core, test_truncate_350);
  tcase_add_test(tc_core, test_truncate_351);
  tcase_add_test(tc_core, test_truncate_352);
  tcase_add_test(tc_core, test_truncate_353);
  tcase_add_test(tc_core, test_truncate_354);
  tcase_add_test(tc_core, test_truncate_355);
  tcase_add_test(tc_core, test_truncate_356);
  tcase_add_test(tc_core, test_truncate_357);
  tcase_add_test(tc_core, test_truncate_358);
  tcase_add_test(tc_core, test_truncate_359);
  tcase_add_test(tc_core, test_truncate_360);
  tcase_add_test(tc_core, test_truncate_361);
  tcase_add_test(tc_core, test_truncate_362);
  tcase_add_test(tc_core, test_truncate_363);
  tcase_add_test(tc_core, test_truncate_364);
  tcase_add_test(tc_core, test_truncate_365);
  tcase_add_test(tc_core, test_truncate_366);
  tcase_add_test(tc_core, test_truncate_367);
  tcase_add_test(tc_core, test_truncate_368);
  tcase_add_test(tc_core, test_truncate_369);
  tcase_add_test(tc_core, test_truncate_370);
  tcase_add_test(tc_core, test_truncate_371);
  tcase_add_test(tc_core, test_truncate_372);
  tcase_add_test(tc_core, test_truncate_373);
  tcase_add_test(tc_core, test_truncate_374);
  tcase_add_test(tc_core, test_truncate_375);
  tcase_add_test(tc_core, test_truncate_376);
  tcase_add_test(tc_core, test_truncate_377);
  tcase_add_test(tc_core, test_truncate_378);
  tcase_add_test(tc_core, test_truncate_379);
  tcase_add_test(tc_core, test_truncate_380);
  tcase_add_test(tc_core, test_truncate_381);
  tcase_add_test(tc_core, test_truncate_382);
  tcase_add_test(tc_core, test_truncate_383);
  tcase_add_test(tc_core, test_truncate_384);
  tcase_add_test(tc_core, test_truncate_385);
  tcase_add_test(tc_core, test_truncate_386);
  tcase_add_test(tc_core, test_truncate_387);
  tcase_add_test(tc_core, test_truncate_388);
  tcase_add_test(tc_core, test_truncate_389);
  tcase_add_test(tc_core, test_truncate_390);
  tcase_add_test(tc_core, test_truncate_391);
  tcase_add_test(tc_core, test_truncate_392);
  tcase_add_test(tc_core, test_truncate_393);
  tcase_add_test(tc_core, test_truncate_394);
  tcase_add_test(tc_core, test_truncate_395);
  tcase_add_test(tc_core, test_truncate_396);
  tcase_add_test(tc_core, test_truncate_397);
  tcase_add_test(tc_core, test_truncate_398);
  tcase_add_test(tc_core, test_truncate_399);
  tcase_add_test(tc_core, test_truncate_400);

  suite_add_tcase(s, tc_core);
  return s;
}

void test_truncate(s21_decimal decimal, s21_decimal decimal_check) {
  s21_decimal result;

  int code = s21_truncate(decimal, &result);
  int sign_check = s21_get_sign(decimal_check);
  int sign_result = s21_get_sign(result);

  ck_assert_int_eq(code, OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), TRUE);
  ck_assert_int_eq(sign_check, sign_result);
}