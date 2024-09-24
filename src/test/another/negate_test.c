#include "../test.h"

START_TEST(test_negate_1) {
  // 79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_2) {
  // -79228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_3) {
  // 7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -7922816251426433759354395033.5
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_4) {
  // -7922816251426433759354395033.5
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 7922816251426433759354395033.5
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_5) {
  // 792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
  // -792281625142643375935439503.35
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_6) {
  // -792281625142643375935439503.35
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};
  // 792281625142643375935439503.35
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_7) {
  // 79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};
  // -79228162514264337593543950.335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_8) {
  // -79228162514264337593543950.335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};
  // 79228162514264337593543950.335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_9) {
  // 7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};
  // -7922816251426433759354395.0335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_10) {
  // -7922816251426433759354395.0335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};
  // 7922816251426433759354395.0335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_11) {
  // 792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};
  // -792281625142643375935439.50335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_12) {
  // -792281625142643375935439.50335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};
  // 792281625142643375935439.50335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_13) {
  // 79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};
  // -79228162514264337593543.950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_14) {
  // -79228162514264337593543.950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};
  // 79228162514264337593543.950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_15) {
  // 7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};
  // -7922816251426433759354.3950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_16) {
  // -7922816251426433759354.3950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};
  // 7922816251426433759354.3950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_17) {
  // 792281625142643375935.43950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};
  // -792281625142643375935.43950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_18) {
  // -792281625142643375935.43950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};
  // 792281625142643375935.43950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_19) {
  // 79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};
  // -79228162514264337593.543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_20) {
  // -79228162514264337593.543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};
  // 79228162514264337593.543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_21) {
  // 7922816251426433759.3543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};
  // -7922816251426433759.3543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_22) {
  // -7922816251426433759.3543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};
  // 7922816251426433759.3543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_23) {
  // 792281625142643375.93543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};
  // -792281625142643375.93543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_24) {
  // -792281625142643375.93543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};
  // 792281625142643375.93543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_25) {
  // 79228162514264337.593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};
  // -79228162514264337.593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_26) {
  // -79228162514264337.593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};
  // 79228162514264337.593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_27) {
  // 7922816251426433.7593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};
  // -7922816251426433.7593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_28) {
  // -7922816251426433.7593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};
  // 7922816251426433.7593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_29) {
  // 792281625142643.37593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // -792281625142643.37593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_30) {
  // -792281625142643.37593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // 792281625142643.37593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_31) {
  // 79228162514264.337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};
  // -79228162514264.337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_32) {
  // -79228162514264.337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};
  // 79228162514264.337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_33) {
  // 7922816251426.4337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};
  // -7922816251426.4337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_34) {
  // -7922816251426.4337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};
  // 7922816251426.4337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_35) {
  // 792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};
  // -792281625142.64337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_36) {
  // -792281625142.64337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};
  // 792281625142.64337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_37) {
  // 79228162514.264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};
  // -79228162514.264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_38) {
  // -79228162514.264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};
  // 79228162514.264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_39) {
  // 7922816251.4264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};
  // -7922816251.4264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_40) {
  // -7922816251.4264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};
  // 7922816251.4264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_41) {
  // 792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  // -792281625.14264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_42) {
  // -792281625.14264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  // 792281625.14264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_43) {
  // 79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  // -79228162.514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_44) {
  // -79228162.514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  // 79228162.514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_45) {
  // 7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  // -7922816.2514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_46) {
  // -7922816.2514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  // 7922816.2514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_47) {
  // 792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  // -792281.62514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_48) {
  // -792281.62514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  // 792281.62514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_49) {
  // 79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  // -79228.162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_50) {
  // -79228.162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  // 79228.162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_51) {
  // 7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  // -7922.8162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_52) {
  // -7922.8162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  // 7922.8162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_53) {
  // 792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  // -792.28162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_54) {
  // -792.28162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  // 792.28162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_55) {
  // 79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  // -79.228162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_56) {
  // -79.228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  // 79.228162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_57) {
  // 7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -7.9228162514264337593543950335
  s21_decimal decimal_check = {
      {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_58) {
  // -7.9228162514264337593543950335
  s21_decimal decimal = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 7.9228162514264337593543950335
  s21_decimal decimal_check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_59) {
  // 79228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_60) {
  // -79228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_61) {
  // 7922816251426433759354395033.4
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // -7922816251426433759354395033.4
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_62) {
  // -7922816251426433759354395033.4
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 7922816251426433759354395033.4
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_63) {
  // 792281625142643375935439503.34
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};
  // -792281625142643375935439503.34
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_64) {
  // -792281625142643375935439503.34
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80020000}};
  // 792281625142643375935439503.34
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x20000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_65) {
  // 79228162514264337593543950.334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};
  // -79228162514264337593543950.334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_66) {
  // -79228162514264337593543950.334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80030000}};
  // 79228162514264337593543950.334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x30000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_67) {
  // 7922816251426433759354395.0334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};
  // -7922816251426433759354395.0334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_68) {
  // -7922816251426433759354395.0334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80040000}};
  // 7922816251426433759354395.0334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x40000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_69) {
  // 792281625142643375935439.50334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};
  // -792281625142643375935439.50334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_70) {
  // -792281625142643375935439.50334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80050000}};
  // 792281625142643375935439.50334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x50000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_71) {
  // 79228162514264337593543.950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};
  // -79228162514264337593543.950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_72) {
  // -79228162514264337593543.950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80060000}};
  // 79228162514264337593543.950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x60000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_73) {
  // 7922816251426433759354.3950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};
  // -7922816251426433759354.3950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_74) {
  // -7922816251426433759354.3950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80070000}};
  // 7922816251426433759354.3950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x70000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_75) {
  // 792281625142643375935.43950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};
  // -792281625142643375935.43950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_76) {
  // -792281625142643375935.43950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80080000}};
  // 792281625142643375935.43950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_77) {
  // 79228162514264337593.543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};
  // -79228162514264337593.543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_78) {
  // -79228162514264337593.543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80090000}};
  // 79228162514264337593.543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x90000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_79) {
  // 7922816251426433759.3543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};
  // -7922816251426433759.3543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_80) {
  // -7922816251426433759.3543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800A0000}};
  // 7922816251426433759.3543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xA0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_81) {
  // 792281625142643375.93543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};
  // -792281625142643375.93543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_82) {
  // -792281625142643375.93543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800B0000}};
  // 792281625142643375.93543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xB0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_83) {
  // 79228162514264337.593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};
  // -79228162514264337.593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_84) {
  // -79228162514264337.593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800C0000}};
  // 79228162514264337.593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xC0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_85) {
  // 7922816251426433.7593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};
  // -7922816251426433.7593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_86) {
  // -7922816251426433.7593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800D0000}};
  // 7922816251426433.7593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xD0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_87) {
  // 792281625142643.37593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};
  // -792281625142643.37593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_88) {
  // -792281625142643.37593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800E0000}};
  // 792281625142643.37593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xE0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_89) {
  // 79228162514264.337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};
  // -79228162514264.337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_90) {
  // -79228162514264.337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x800F0000}};
  // 79228162514264.337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xF0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_91) {
  // 7922816251426.4337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};
  // -7922816251426.4337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_92) {
  // -7922816251426.4337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80100000}};
  // 7922816251426.4337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x100000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_93) {
  // 792281625142.64337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};
  // -792281625142.64337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_94) {
  // -792281625142.64337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80110000}};
  // 792281625142.64337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x110000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_95) {
  // 79228162514.264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};
  // -79228162514.264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_96) {
  // -79228162514.264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80120000}};
  // 79228162514.264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x120000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_97) {
  // 7922816251.4264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};
  // -7922816251.4264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_98) {
  // -7922816251.4264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80130000}};
  // 7922816251.4264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_99) {
  // 792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};
  // -792281625.14264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_100) {
  // -792281625.14264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80140000}};
  // 792281625.14264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x140000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_101) {
  // 79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};
  // -79228162.514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_102) {
  // -79228162.514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80150000}};
  // 79228162.514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x150000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_103) {
  // 7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};
  // -7922816.2514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_104) {
  // -7922816.2514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80160000}};
  // 7922816.2514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x160000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_105) {
  // 792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};
  // -792281.62514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_106) {
  // -792281.62514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80170000}};
  // 792281.62514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x170000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_107) {
  // 79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};
  // -79228.162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_108) {
  // -79228.162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80180000}};
  // 79228.162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x180000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_109) {
  // 7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};
  // -7922.8162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_110) {
  // -7922.8162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80190000}};
  // 7922.8162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x190000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_111) {
  // 792.28162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};
  // -792.28162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_112) {
  // -792.28162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801A0000}};
  // 792.28162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_113) {
  // 79.228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};
  // -79.228162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_114) {
  // -79.228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801B0000}};
  // 79.228162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1B0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_115) {
  // 7.9228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
  // -7.9228162514264337593543950334
  s21_decimal decimal_check = {
      {0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_116) {
  // -7.9228162514264337593543950334
  s21_decimal decimal = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x801C0000}};
  // 7.9228162514264337593543950334
  s21_decimal decimal_check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_117) {
  // 52818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal_check = {
      {0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_118) {
  // -52818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_119) {
  // 5281877500950955839569596689.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal_check = {
      {0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_120) {
  // -5281877500950955839569596689.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_121) {
  // 5281877500950955.8395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};
  // -5281877500950955.8395695966890
  s21_decimal decimal_check = {
      {0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_122) {
  // -5281877500950955.8395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};
  // 5281877500950955.8395695966890
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_123) {
  // 5.2818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  // -5.2818775009509558395695966890
  s21_decimal decimal_check = {
      {0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_124) {
  // -5.2818775009509558395695966890
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  // 5.2818775009509558395695966890
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_125) {
  // 52818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_126) {
  // -52818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_127) {
  // 5281877500950955839283265536.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -5281877500950955839283265536.0
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_128) {
  // -5281877500950955839283265536.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 5281877500950955839283265536.0
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_129) {
  // 5281877500950955.8392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};
  // -5281877500950955.8392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_130) {
  // -5281877500950955.8392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x800D0000}};
  // 5281877500950955.8392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0xD0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_131) {
  // 5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};
  // -5.2818775009509558392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_132) {
  // -5.2818775009509558392832655360
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x801C0000}};
  // 5.2818775009509558392832655360
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0xAAAAAAAA, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_133) {
  // 52818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x0}};
  // -52818774997211729016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_134) {
  // -52818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80000000}};
  // 52818774997211729016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_135) {
  // 5281877499721172901608624401.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x10000}};
  // -5281877499721172901608624401.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_136) {
  // -5281877499721172901608624401.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x80010000}};
  // 5281877499721172901608624401.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_137) {
  // 5281877499721172.9016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0xD0000}};
  // -5281877499721172.9016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x800D0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_138) {
  // -5281877499721172.9016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x800D0000}};
  // 5281877499721172.9016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0xD0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_139) {
  // 5.2818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x1C0000}};
  // -5.2818774997211729016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_140) {
  // -5.2818774997211729016086244010
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x801C0000}};
  // 5.2818774997211729016086244010
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0xAAAAAAAA, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_141) {
  // 52818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x0}};
  // -52818774997211729013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_142) {
  // -52818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80000000}};
  // 52818774997211729013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_143) {
  // 5281877499721172901322293248.0
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x10000}};
  // -5281877499721172901322293248.0
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_144) {
  // -5281877499721172901322293248.0
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x80010000}};
  // 5281877499721172901322293248.0
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_145) {
  // 5281877499721172.9013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0xD0000}};
  // -5281877499721172.9013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x800D0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_146) {
  // -5281877499721172.9013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x800D0000}};
  // 5281877499721172.9013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0xD0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_147) {
  // 5.2818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x1C0000}};
  // -5.2818774997211729013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_148) {
  // -5.2818774997211729013222932480
  s21_decimal decimal = {{0x0, 0x0, 0xAAAAAAAA, 0x801C0000}};
  // 5.2818774997211729013222932480
  s21_decimal decimal_check = {{0x0, 0x0, 0xAAAAAAAA, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_149) {
  // 12297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x0}};
  // -12297829382473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_150) {
  // -12297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80000000}};
  // 12297829382473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_151) {
  // 1229782938247303441.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x10000}};
  // -1229782938247303441.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_152) {
  // -1229782938247303441.0
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80010000}};
  // 1229782938247303441.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_153) {
  // 122978293.82473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0xB0000}};
  // -122978293.82473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x800B0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_154) {
  // -122978293.82473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x800B0000}};
  // 122978293.82473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0xB0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_155) {
  // 1.2297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -1.2297829382473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_156) {
  // -1.2297829382473034410
  s21_decimal decimal = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 1.2297829382473034410
  s21_decimal decimal_check = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_157) {
  // 12297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x0}};
  // -12297829379609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_158) {
  // -12297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80000000}};
  // 12297829379609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_159) {
  // 1229782937960972288.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x10000}};
  // -1229782937960972288.0
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_160) {
  // -1229782937960972288.0
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80010000}};
  // 1229782937960972288.0
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_161) {
  // 122978293.79609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0xB0000}};
  // -122978293.79609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x800B0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_162) {
  // -122978293.79609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x800B0000}};
  // 122978293.79609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0xB0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_163) {
  // 1.2297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x130000}};
  // -1.2297829379609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x80130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_164) {
  // -1.2297829379609722880
  s21_decimal decimal = {{0x0, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 1.2297829379609722880
  s21_decimal decimal_check = {{0x0, 0xAAAAAAAA, 0x0, 0x130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_165) {
  // 2863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x0}};
  // -2863311530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_166) {
  // -2863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80000000}};
  // 2863311530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_167) {
  // 286331153.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x10000}};
  // -286331153.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_168) {
  // -286331153.0
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80010000}};
  // 286331153.0
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_169) {
  // 286331.1530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x40000}};
  // -286331.1530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x80040000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_170) {
  // -286331.1530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80040000}};
  // 286331.1530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x40000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_171) {
  // 2.863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x90000}};
  // -2.863311530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x80090000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_172) {
  // -2.863311530
  s21_decimal decimal = {{0xAAAAAAAA, 0x0, 0x0, 0x80090000}};
  // 2.863311530
  s21_decimal decimal_check = {{0xAAAAAAAA, 0x0, 0x0, 0x90000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_173) {
  // 26409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
  // -26409387504754779197847983445
  s21_decimal decimal_check = {
      {0x55555555, 0x55555555, 0x55555555, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_174) {
  // -26409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80000000}};
  // 26409387504754779197847983445
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x55555555, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_175) {
  // 2640938750475477919784798344.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x10000}};
  // -2640938750475477919784798344.5
  s21_decimal decimal_check = {
      {0x55555555, 0x55555555, 0x55555555, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_176) {
  // -2640938750475477919784798344.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x80010000}};
  // 2640938750475477919784798344.5
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x55555555, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_177) {
  // 2640938750475477.9197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0xD0000}};
  // -2640938750475477.9197847983445
  s21_decimal decimal_check = {
      {0x55555555, 0x55555555, 0x55555555, 0x800D0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_178) {
  // -2640938750475477.9197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x800D0000}};
  // 2640938750475477.9197847983445
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x55555555, 0xD0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_179) {
  // 2.6409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x1C0000}};
  // -2.6409387504754779197847983445
  s21_decimal decimal_check = {
      {0x55555555, 0x55555555, 0x55555555, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_180) {
  // -2.6409387504754779197847983445
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x55555555, 0x801C0000}};
  // 2.6409387504754779197847983445
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x55555555, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_181) {
  // 26409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x0}};
  // -26409387504754779196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_182) {
  // -26409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x80000000}};
  // 26409387504754779196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_183) {
  // 2640938750475477919641632768.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x10000}};
  // -2640938750475477919641632768.0
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_184) {
  // -2640938750475477919641632768.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x80010000}};
  // 2640938750475477919641632768.0
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_185) {
  // 2640938750475477.9196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0xD0000}};
  // -2640938750475477.9196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x800D0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_186) {
  // -2640938750475477.9196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x800D0000}};
  // 2640938750475477.9196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0xD0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_187) {
  // 2.6409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x1C0000}};
  // -2.6409387504754779196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_188) {
  // -2.6409387504754779196416327680
  s21_decimal decimal = {{0x0, 0x55555555, 0x55555555, 0x801C0000}};
  // 2.6409387504754779196416327680
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x55555555, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_189) {
  // 26409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x0}};
  // -26409387498605864508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_190) {
  // -26409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
  // 26409387498605864508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_191) {
  // 2640938749860586450804312200.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x10000}};
  // -2640938749860586450804312200.5
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_192) {
  // -2640938749860586450804312200.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x80010000}};
  // 2640938749860586450804312200.5
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_193) {
  // 2640938749860586.4508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0xD0000}};
  // -2640938749860586.4508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x800D0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_194) {
  // -2640938749860586.4508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x800D0000}};
  // 2640938749860586.4508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0xD0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_195) {
  // 2.6409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x1C0000}};
  // -2.6409387498605864508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_196) {
  // -2.6409387498605864508043122005
  s21_decimal decimal = {{0x55555555, 0x0, 0x55555555, 0x801C0000}};
  // 2.6409387498605864508043122005
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x55555555, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_197) {
  // 26409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x0}};
  // -26409387498605864506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_198) {
  // -26409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x80000000}};
  // 26409387498605864506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_199) {
  // 2640938749860586450661146624.0
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x10000}};
  // -2640938749860586450661146624.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_200) {
  // -2640938749860586450661146624.0
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x80010000}};
  // 2640938749860586450661146624.0
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_201) {
  // 2640938749860586.4506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0xD0000}};
  // -2640938749860586.4506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x800D0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_202) {
  // -2640938749860586.4506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x800D0000}};
  // 2640938749860586.4506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0xD0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_203) {
  // 2.6409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x1C0000}};
  // -2.6409387498605864506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_204) {
  // -2.6409387498605864506611466240
  s21_decimal decimal = {{0x0, 0x0, 0x55555555, 0x801C0000}};
  // 2.6409387498605864506611466240
  s21_decimal decimal_check = {{0x0, 0x0, 0x55555555, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_205) {
  // 6148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x0}};
  // -6148914691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_206) {
  // -6148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
  // 6148914691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_207) {
  // 614891469123651720.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x10000}};
  // -614891469123651720.5
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_208) {
  // -614891469123651720.5
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80010000}};
  // 614891469123651720.5
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_209) {
  // 6148914.691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0xC0000}};
  // -6148914.691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x800C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_210) {
  // -6148914.691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x800C0000}};
  // 6148914.691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0xC0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_211) {
  // 6.148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x120000}};
  // -6.148914691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x80120000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_212) {
  // -6.148914691236517205
  s21_decimal decimal = {{0x55555555, 0x55555555, 0x0, 0x80120000}};
  // 6.148914691236517205
  s21_decimal decimal_check = {{0x55555555, 0x55555555, 0x0, 0x120000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_213) {
  // 6148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x0}};
  // -6148914689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_214) {
  // -6148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80000000}};
  // 6148914689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_215) {
  // 614891468980486144.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x10000}};
  // -614891468980486144.0
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_216) {
  // -614891468980486144.0
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80010000}};
  // 614891468980486144.0
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_217) {
  // 6148914.689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0xC0000}};
  // -6148914.689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x800C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_218) {
  // -6148914.689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x800C0000}};
  // 6148914.689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0xC0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_219) {
  // 6.148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x120000}};
  // -6.148914689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x80120000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_220) {
  // -6.148914689804861440
  s21_decimal decimal = {{0x0, 0x55555555, 0x0, 0x80120000}};
  // 6.148914689804861440
  s21_decimal decimal_check = {{0x0, 0x55555555, 0x0, 0x120000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_221) {
  // 1431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x0}};
  // -1431655765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_222) {
  // -1431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 1431655765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_223) {
  // 143165576.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x10000}};
  // -143165576.5
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_224) {
  // -143165576.5
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80010000}};
  // 143165576.5
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_225) {
  // 143165.5765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x40000}};
  // -143165.5765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x80040000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_226) {
  // -143165.5765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80040000}};
  // 143165.5765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x40000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_227) {
  // 1.431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x90000}};
  // -1.431655765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x80090000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_228) {
  // -1.431655765
  s21_decimal decimal = {{0x55555555, 0x0, 0x0, 0x80090000}};
  // 1.431655765
  s21_decimal decimal_check = {{0x55555555, 0x0, 0x0, 0x90000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_229) {
  // 18446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x0}};
  // -18446744078004518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_230) {
  // -18446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80000000}};
  // 18446744078004518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_231) {
  // 1844674407800451891.3
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x10000}};
  // -1844674407800451891.3
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_232) {
  // -1844674407800451891.3
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80010000}};
  // 1844674407800451891.3
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_233) {
  // 184467440780.04518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80000}};
  // -184467440780.04518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x80080000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_234) {
  // -184467440780.04518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80080000}};
  // 184467440780.04518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x80000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_235) {
  // 1.8446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x130000}};
  // -1.8446744078004518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x80130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_236) {
  // -1.8446744078004518913
  s21_decimal decimal = {{0x1, 0x1, 0x1, 0x80130000}};
  // 1.8446744078004518913
  s21_decimal decimal_check = {{0x1, 0x1, 0x1, 0x130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_237) {
  // 18446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x0}};
  // -18446744078004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_238) {
  // -18446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80000000}};
  // 18446744078004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_239) {
  // 1844674407800451891.2
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x10000}};
  // -1844674407800451891.2
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_240) {
  // -1844674407800451891.2
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80010000}};
  // 1844674407800451891.2
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_241) {
  // 18446744078.004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x90000}};
  // -18446744078.004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x80090000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_242) {
  // -18446744078.004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80090000}};
  // 18446744078.004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x90000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_243) {
  // 1.8446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x130000}};
  // -1.8446744078004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x80130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_244) {
  // -1.8446744078004518912
  s21_decimal decimal = {{0x0, 0x1, 0x1, 0x80130000}};
  // 1.8446744078004518912
  s21_decimal decimal_check = {{0x0, 0x1, 0x1, 0x130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_245) {
  // 18446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x0}};
  // -18446744073709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_246) {
  // -18446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80000000}};
  // 18446744073709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_247) {
  // 1844674407370955161.7
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x10000}};
  // -1844674407370955161.7
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_248) {
  // -1844674407370955161.7
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80010000}};
  // 1844674407370955161.7
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_249) {
  // 1844674407.3709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0xA0000}};
  // -1844674407.3709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x800A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_250) {
  // -1844674407.3709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x800A0000}};
  // 1844674407.3709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0xA0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_251) {
  // 1.8446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x130000}};
  // -1.8446744073709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x80130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_252) {
  // -1.8446744073709551617
  s21_decimal decimal = {{0x1, 0x0, 0x1, 0x80130000}};
  // 1.8446744073709551617
  s21_decimal decimal_check = {{0x1, 0x0, 0x1, 0x130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_253) {
  // 18446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x0}};
  // -18446744073709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_254) {
  // -18446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80000000}};
  // 18446744073709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_255) {
  // 1844674407370955161.6
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x10000}};
  // -1844674407370955161.6
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_256) {
  // -1844674407370955161.6
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80010000}};
  // 1844674407370955161.6
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_257) {
  // 184467440.73709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0xB0000}};
  // -184467440.73709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x800B0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_258) {
  // -184467440.73709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x800B0000}};
  // 184467440.73709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0xB0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_259) {
  // 1.8446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x130000}};
  // -1.8446744073709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x80130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_260) {
  // -1.8446744073709551616
  s21_decimal decimal = {{0x0, 0x0, 0x1, 0x80130000}};
  // 1.8446744073709551616
  s21_decimal decimal_check = {{0x0, 0x0, 0x1, 0x130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_261) {
  // 4294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x0}};
  // -4294967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_262) {
  // -4294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80000000}};
  // 4294967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_263) {
  // 429496729.7
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x10000}};
  // -429496729.7
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_264) {
  // -429496729.7
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80010000}};
  // 429496729.7
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_265) {
  // 42949672.97
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x20000}};
  // -42949672.97
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80020000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_266) {
  // -42949672.97
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80020000}};
  // 42949672.97
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x20000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_267) {
  // 429496.7297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x40000}};
  // -429496.7297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80040000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_268) {
  // -429496.7297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80040000}};
  // 429496.7297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x40000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_269) {
  // 4.294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x90000}};
  // -4.294967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80090000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_270) {
  // -4.294967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80090000}};
  // 4.294967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x90000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_271) {
  // 42.94967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80000}};
  // -42.94967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80080000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_272) {
  // -42.94967297
  s21_decimal decimal = {{0x1, 0x1, 0x0, 0x80080000}};
  // 42.94967297
  s21_decimal decimal_check = {{0x1, 0x1, 0x0, 0x80000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_273) {
  // 4294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x0}};
  // -4294967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_274) {
  // -4294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80000000}};
  // 4294967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_275) {
  // 429496729.6
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x10000}};
  // -429496729.6
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_276) {
  // -429496729.6
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80010000}};
  // 429496729.6
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_277) {
  // 42949672.96
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x20000}};
  // -42949672.96
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80020000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_278) {
  // -42949672.96
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80020000}};
  // 42949672.96
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x20000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_279) {
  // 4294967.296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x30000}};
  // -4294967.296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80030000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_280) {
  // -4294967.296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80030000}};
  // 4294967.296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x30000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_281) {
  // 4.294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x90000}};
  // -4.294967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80090000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_282) {
  // -4.294967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80090000}};
  // 4.294967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x90000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_283) {
  // 42.94967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80000}};
  // -42.94967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80080000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_284) {
  // -42.94967296
  s21_decimal decimal = {{0x0, 0x1, 0x0, 0x80080000}};
  // 42.94967296
  s21_decimal decimal_check = {{0x0, 0x1, 0x0, 0x80000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_285) {
  // 1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x0}};
  // -1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_286) {
  // -1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x80000000}};
  // 1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_287) {
  // 0.1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x10000}};
  // -0.1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_288) {
  // -0.1
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x80010000}};
  // 0.1
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_289) {
  // 0.0000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0xD0000}};
  // -0.0000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x800D0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_290) {
  // -0.0000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x800D0000}};
  // 0.0000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0xD0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_291) {
  // 0.00000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0xE0000}};
  // -0.00000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x800E0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_292) {
  // -0.00000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x800E0000}};
  // 0.00000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0xE0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_293) {
  // 0.000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x1B0000}};
  // -0.000000000000000000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x801B0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_294) {
  // -0.000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x801B0000}};
  // 0.000000000000000000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x1B0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_295) {
  // 0.0000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_296) {
  // -0.0000000000000000000000000001
  s21_decimal decimal = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal_check = {{0x1, 0x0, 0x0, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_297) {
  // 39614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x0}};
  // -39614081266355540835774234624
  s21_decimal decimal_check = {
      {0x80000000, 0x80000000, 0x80000000, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_298) {
  // -39614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80000000}};
  // 39614081266355540835774234624
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x80000000, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_299) {
  // 3961408126635554083577423462.4
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x10000}};
  // -3961408126635554083577423462.4
  s21_decimal decimal_check = {
      {0x80000000, 0x80000000, 0x80000000, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_300) {
  // -3961408126635554083577423462.4
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x80010000}};
  // 3961408126635554083577423462.4
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x80000000, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_301) {
  // 39614081266355.540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0xF0000}};
  // -39614081266355.540835774234624
  s21_decimal decimal_check = {
      {0x80000000, 0x80000000, 0x80000000, 0x800F0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_302) {
  // -39614081266355.540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x800F0000}};
  // 39614081266355.540835774234624
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x80000000, 0xF0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_303) {
  // 3.9614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x1C0000}};
  // -3.9614081266355540835774234624
  s21_decimal decimal_check = {
      {0x80000000, 0x80000000, 0x80000000, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_304) {
  // -3.9614081266355540835774234624
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x80000000, 0x801C0000}};
  // 3.9614081266355540835774234624
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x80000000, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_305) {
  // 39614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x0}};
  // -39614081266355540833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_306) {
  // -39614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x80000000}};
  // 39614081266355540833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_307) {
  // 3961408126635554083362675097.6
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x10000}};
  // -3961408126635554083362675097.6
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_308) {
  // -3961408126635554083362675097.6
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x80010000}};
  // 3961408126635554083362675097.6
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_309) {
  // 3961408126635554.0833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0xD0000}};
  // -3961408126635554.0833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x800D0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_310) {
  // -3961408126635554.0833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x800D0000}};
  // 3961408126635554.0833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0xD0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_311) {
  // 3.9614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x1C0000}};
  // -3.9614081266355540833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_312) {
  // -3.9614081266355540833626750976
  s21_decimal decimal = {{0x0, 0x80000000, 0x80000000, 0x801C0000}};
  // 3.9614081266355540833626750976
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x80000000, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_313) {
  // 39614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x0}};
  // -39614081257132168798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_314) {
  // -39614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x80000000}};
  // 39614081257132168798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_315) {
  // 3961408125713216879891945881.6
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x10000}};
  // -3961408125713216879891945881.6
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_316) {
  // -3961408125713216879891945881.6
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x80010000}};
  // 3961408125713216879891945881.6
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_317) {
  // 39614081257132168.798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0xC0000}};
  // -39614081257132168.798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x800C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_318) {
  // -39614081257132168.798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x800C0000}};
  // 39614081257132168.798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0xC0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_319) {
  // 3.9614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x1C0000}};
  // -3.9614081257132168798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_320) {
  // -3.9614081257132168798919458816
  s21_decimal decimal = {{0x80000000, 0x0, 0x80000000, 0x801C0000}};
  // 3.9614081257132168798919458816
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x80000000, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_321) {
  // 39614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x0}};
  // -39614081257132168796771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_322) {
  // -39614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x80000000}};
  // 39614081257132168796771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_323) {
  // 3961408125713216879677197516.8
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x10000}};
  // -3961408125713216879677197516.8
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_324) {
  // -3961408125713216879677197516.8
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x80010000}};
  // 3961408125713216879677197516.8
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_325) {
  // 396140812571321687.96771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0xB0000}};
  // -396140812571321687.96771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x800B0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_326) {
  // -396140812571321687.96771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x800B0000}};
  // 396140812571321687.96771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0xB0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_327) {
  // 3.9614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x1C0000}};
  // -3.9614081257132168796771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x801C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_328) {
  // -3.9614081257132168796771975168
  s21_decimal decimal = {{0x0, 0x0, 0x80000000, 0x801C0000}};
  // 3.9614081257132168796771975168
  s21_decimal decimal_check = {{0x0, 0x0, 0x80000000, 0x1C0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_329) {
  // 9223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x0}};
  // -9223372039002259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_330) {
  // -9223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80000000}};
  // 9223372039002259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_331) {
  // 922337203900225945.6
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x10000}};
  // -922337203900225945.6
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_332) {
  // -922337203900225945.6
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80010000}};
  // 922337203900225945.6
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_333) {
  // 922337203900.2259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x70000}};
  // -922337203900.2259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x80070000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_334) {
  // -922337203900.2259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80070000}};
  // 922337203900.2259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x70000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_335) {
  // 9.223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x120000}};
  // -9.223372039002259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x80120000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_336) {
  // -9.223372039002259456
  s21_decimal decimal = {{0x80000000, 0x80000000, 0x0, 0x80120000}};
  // 9.223372039002259456
  s21_decimal decimal_check = {{0x80000000, 0x80000000, 0x0, 0x120000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_337) {
  // 9223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x0}};
  // -9223372036854775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_338) {
  // -9223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80000000}};
  // 9223372036854775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_339) {
  // 922337203685477580.8
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x10000}};
  // -922337203685477580.8
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_340) {
  // -922337203685477580.8
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80010000}};
  // 922337203685477580.8
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_341) {
  // 92233720368.54775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80000}};
  // -92233720368.54775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x80080000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_342) {
  // -92233720368.54775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80080000}};
  // 92233720368.54775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x80000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_343) {
  // 9.223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x120000}};
  // -9.223372036854775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x80120000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_344) {
  // -9.223372036854775808
  s21_decimal decimal = {{0x0, 0x80000000, 0x0, 0x80120000}};
  // 9.223372036854775808
  s21_decimal decimal_check = {{0x0, 0x80000000, 0x0, 0x120000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_345) {
  // 2147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x0}};
  // -2147483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_346) {
  // -2147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80000000}};
  // 2147483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_347) {
  // 214748364.8
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x10000}};
  // -214748364.8
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_348) {
  // -214748364.8
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80010000}};
  // 214748364.8
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_349) {
  // 21474836.48
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x20000}};
  // -21474836.48
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80020000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_350) {
  // -21474836.48
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80020000}};
  // 21474836.48
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x20000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_351) {
  // 214748.3648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x40000}};
  // -214748.3648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80040000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_352) {
  // -214748.3648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80040000}};
  // 214748.3648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x40000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_353) {
  // 21.47483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80000}};
  // -21.47483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80080000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_354) {
  // -21.47483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80080000}};
  // 21.47483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_355) {
  // 2.147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x90000}};
  // -2.147483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x80090000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_356) {
  // -2.147483648
  s21_decimal decimal = {{0x80000000, 0x0, 0x0, 0x80090000}};
  // 2.147483648
  s21_decimal decimal_check = {{0x80000000, 0x0, 0x0, 0x90000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_357) {
  // 156064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x0}};
  // -156064767562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_358) {
  // -156064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80000000}};
  // 156064767562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_359) {
  // 15606476756221269530542694.4
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x10000}};
  // -15606476756221269530542694.4
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_360) {
  // -15606476756221269530542694.4
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80010000}};
  // 15606476756221269530542694.4
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_361) {
  // 1560647.67562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x140000}};
  // -1560647.67562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x80140000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_362) {
  // -1560647.67562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x80140000}};
  // 1560647.67562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x140000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_363) {
  // 1.56064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x1A0000}};
  // -1.56064767562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x801A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_364) {
  // -1.56064767562212695305426944
  s21_decimal decimal = {{0x811800, 0x811800, 0x811800, 0x801A0000}};
  // 1.56064767562212695305426944
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x811800, 0x1A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_365) {
  // 156064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x0}};
  // -156064767562212695296966656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_366) {
  // -156064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x80000000}};
  // 156064767562212695296966656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_367) {
  // 15606476756221269529696665.6
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x10000}};
  // -15606476756221269529696665.6
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_368) {
  // -15606476756221269529696665.6
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x80010000}};
  // 15606476756221269529696665.6
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_369) {
  // 15606476756221269529696.6656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x40000}};
  // -15606476756221269529696.6656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x80040000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_370) {
  // -15606476756221269529696.6656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x80040000}};
  // 15606476756221269529696.6656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x40000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_371) {
  // 1.56064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x1A0000}};
  // -1.56064767562212695296966656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x801A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_372) {
  // -1.56064767562212695296966656
  s21_decimal decimal = {{0x0, 0x811800, 0x811800, 0x801A0000}};
  // 1.56064767562212695296966656
  s21_decimal decimal_check = {{0x0, 0x811800, 0x811800, 0x1A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_373) {
  // 156064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x0}};
  // -156064767525876035030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_374) {
  // -156064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x80000000}};
  // 156064767525876035030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_375) {
  // 15606476752587603503068569.6
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x10000}};
  // -15606476752587603503068569.6
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_376) {
  // -15606476752587603503068569.6
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x80010000}};
  // 15606476752587603503068569.6
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_377) {
  // 1560647675258760.35030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0xB0000}};
  // -1560647675258760.35030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x800B0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_378) {
  // -1560647675258760.35030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x800B0000}};
  // 1560647675258760.35030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0xB0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_379) {
  // 1.56064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x1A0000}};
  // -1.56064767525876035030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x801A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_380) {
  // -1.56064767525876035030685696
  s21_decimal decimal = {{0x811800, 0x0, 0x811800, 0x801A0000}};
  // 1.56064767525876035030685696
  s21_decimal decimal_check = {{0x811800, 0x0, 0x811800, 0x1A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_381) {
  // 156064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x0}};
  // -156064767525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_382) {
  // -156064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x80000000}};
  // 156064767525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_383) {
  // 15606476752587603502222540.8
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x10000}};
  // -15606476752587603502222540.8
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_384) {
  // -15606476752587603502222540.8
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x80010000}};
  // 15606476752587603502222540.8
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_385) {
  // 15606476.7525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x130000}};
  // -15606476.7525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x80130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_386) {
  // -15606476.7525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x80130000}};
  // 15606476.7525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x130000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_387) {
  // 1.56064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x1A0000}};
  // -1.56064767525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x801A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_388) {
  // -1.56064767525876035022225408
  s21_decimal decimal = {{0x0, 0x0, 0x811800, 0x801A0000}};
  // 1.56064767525876035022225408
  s21_decimal decimal_check = {{0x0, 0x0, 0x811800, 0x1A0000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_389) {
  // 36336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x0}};
  // -36336660283201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_390) {
  // -36336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80000000}};
  // 36336660283201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_391) {
  // 3633666028320153.6
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x10000}};
  // -3633666028320153.6
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_392) {
  // -3633666028320153.6
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80010000}};
  // 3633666028320153.6
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_393) {
  // 363366602.83201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80000}};
  // -363366602.83201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x80080000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_394) {
  // -363366602.83201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80080000}};
  // 363366602.83201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x80000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_395) {
  // 3.6336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x100000}};
  // -3.6336660283201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x80100000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_396) {
  // -3.6336660283201536
  s21_decimal decimal = {{0x811800, 0x811800, 0x0, 0x80100000}};
  // 3.6336660283201536
  s21_decimal decimal_check = {{0x811800, 0x811800, 0x0, 0x100000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_397) {
  // 36336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x0}};
  // -36336660274741248
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x80000000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_398) {
  // -36336660274741248
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80000000}};
  // 36336660274741248
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x0}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_399) {
  // 3633666027474124.8
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x10000}};
  // -3633666027474124.8
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x80010000}};

  test_negate(decimal, decimal_check);
}

START_TEST(test_negate_400) {
  // -3633666027474124.8
  s21_decimal decimal = {{0x0, 0x811800, 0x0, 0x80010000}};
  // 3633666027474124.8
  s21_decimal decimal_check = {{0x0, 0x811800, 0x0, 0x10000}};

  test_negate(decimal, decimal_check);
}

Suite *negate_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("negate_suite");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_negate_1);
  tcase_add_test(tc_core, test_negate_2);
  tcase_add_test(tc_core, test_negate_3);
  tcase_add_test(tc_core, test_negate_4);
  tcase_add_test(tc_core, test_negate_5);
  tcase_add_test(tc_core, test_negate_6);
  tcase_add_test(tc_core, test_negate_7);
  tcase_add_test(tc_core, test_negate_8);
  tcase_add_test(tc_core, test_negate_9);
  tcase_add_test(tc_core, test_negate_10);
  tcase_add_test(tc_core, test_negate_11);
  tcase_add_test(tc_core, test_negate_12);
  tcase_add_test(tc_core, test_negate_13);
  tcase_add_test(tc_core, test_negate_14);
  tcase_add_test(tc_core, test_negate_15);
  tcase_add_test(tc_core, test_negate_16);
  tcase_add_test(tc_core, test_negate_17);
  tcase_add_test(tc_core, test_negate_18);
  tcase_add_test(tc_core, test_negate_19);
  tcase_add_test(tc_core, test_negate_20);
  tcase_add_test(tc_core, test_negate_21);
  tcase_add_test(tc_core, test_negate_22);
  tcase_add_test(tc_core, test_negate_23);
  tcase_add_test(tc_core, test_negate_24);
  tcase_add_test(tc_core, test_negate_25);
  tcase_add_test(tc_core, test_negate_26);
  tcase_add_test(tc_core, test_negate_27);
  tcase_add_test(tc_core, test_negate_28);
  tcase_add_test(tc_core, test_negate_29);
  tcase_add_test(tc_core, test_negate_30);
  tcase_add_test(tc_core, test_negate_31);
  tcase_add_test(tc_core, test_negate_32);
  tcase_add_test(tc_core, test_negate_33);
  tcase_add_test(tc_core, test_negate_34);
  tcase_add_test(tc_core, test_negate_35);
  tcase_add_test(tc_core, test_negate_36);
  tcase_add_test(tc_core, test_negate_37);
  tcase_add_test(tc_core, test_negate_38);
  tcase_add_test(tc_core, test_negate_39);
  tcase_add_test(tc_core, test_negate_40);
  tcase_add_test(tc_core, test_negate_41);
  tcase_add_test(tc_core, test_negate_42);
  tcase_add_test(tc_core, test_negate_43);
  tcase_add_test(tc_core, test_negate_44);
  tcase_add_test(tc_core, test_negate_45);
  tcase_add_test(tc_core, test_negate_46);
  tcase_add_test(tc_core, test_negate_47);
  tcase_add_test(tc_core, test_negate_48);
  tcase_add_test(tc_core, test_negate_49);
  tcase_add_test(tc_core, test_negate_50);
  tcase_add_test(tc_core, test_negate_51);
  tcase_add_test(tc_core, test_negate_52);
  tcase_add_test(tc_core, test_negate_53);
  tcase_add_test(tc_core, test_negate_54);
  tcase_add_test(tc_core, test_negate_55);
  tcase_add_test(tc_core, test_negate_56);
  tcase_add_test(tc_core, test_negate_57);
  tcase_add_test(tc_core, test_negate_58);
  tcase_add_test(tc_core, test_negate_59);
  tcase_add_test(tc_core, test_negate_60);
  tcase_add_test(tc_core, test_negate_61);
  tcase_add_test(tc_core, test_negate_62);
  tcase_add_test(tc_core, test_negate_63);
  tcase_add_test(tc_core, test_negate_64);
  tcase_add_test(tc_core, test_negate_65);
  tcase_add_test(tc_core, test_negate_66);
  tcase_add_test(tc_core, test_negate_67);
  tcase_add_test(tc_core, test_negate_68);
  tcase_add_test(tc_core, test_negate_69);
  tcase_add_test(tc_core, test_negate_70);
  tcase_add_test(tc_core, test_negate_71);
  tcase_add_test(tc_core, test_negate_72);
  tcase_add_test(tc_core, test_negate_73);
  tcase_add_test(tc_core, test_negate_74);
  tcase_add_test(tc_core, test_negate_75);
  tcase_add_test(tc_core, test_negate_76);
  tcase_add_test(tc_core, test_negate_77);
  tcase_add_test(tc_core, test_negate_78);
  tcase_add_test(tc_core, test_negate_79);
  tcase_add_test(tc_core, test_negate_80);
  tcase_add_test(tc_core, test_negate_81);
  tcase_add_test(tc_core, test_negate_82);
  tcase_add_test(tc_core, test_negate_83);
  tcase_add_test(tc_core, test_negate_84);
  tcase_add_test(tc_core, test_negate_85);
  tcase_add_test(tc_core, test_negate_86);
  tcase_add_test(tc_core, test_negate_87);
  tcase_add_test(tc_core, test_negate_88);
  tcase_add_test(tc_core, test_negate_89);
  tcase_add_test(tc_core, test_negate_90);
  tcase_add_test(tc_core, test_negate_91);
  tcase_add_test(tc_core, test_negate_92);
  tcase_add_test(tc_core, test_negate_93);
  tcase_add_test(tc_core, test_negate_94);
  tcase_add_test(tc_core, test_negate_95);
  tcase_add_test(tc_core, test_negate_96);
  tcase_add_test(tc_core, test_negate_97);
  tcase_add_test(tc_core, test_negate_98);
  tcase_add_test(tc_core, test_negate_99);
  tcase_add_test(tc_core, test_negate_100);
  tcase_add_test(tc_core, test_negate_101);
  tcase_add_test(tc_core, test_negate_102);
  tcase_add_test(tc_core, test_negate_103);
  tcase_add_test(tc_core, test_negate_104);
  tcase_add_test(tc_core, test_negate_105);
  tcase_add_test(tc_core, test_negate_106);
  tcase_add_test(tc_core, test_negate_107);
  tcase_add_test(tc_core, test_negate_108);
  tcase_add_test(tc_core, test_negate_109);
  tcase_add_test(tc_core, test_negate_110);
  tcase_add_test(tc_core, test_negate_111);
  tcase_add_test(tc_core, test_negate_112);
  tcase_add_test(tc_core, test_negate_113);
  tcase_add_test(tc_core, test_negate_114);
  tcase_add_test(tc_core, test_negate_115);
  tcase_add_test(tc_core, test_negate_116);
  tcase_add_test(tc_core, test_negate_117);
  tcase_add_test(tc_core, test_negate_118);
  tcase_add_test(tc_core, test_negate_119);
  tcase_add_test(tc_core, test_negate_120);
  tcase_add_test(tc_core, test_negate_121);
  tcase_add_test(tc_core, test_negate_122);
  tcase_add_test(tc_core, test_negate_123);
  tcase_add_test(tc_core, test_negate_124);
  tcase_add_test(tc_core, test_negate_125);
  tcase_add_test(tc_core, test_negate_126);
  tcase_add_test(tc_core, test_negate_127);
  tcase_add_test(tc_core, test_negate_128);
  tcase_add_test(tc_core, test_negate_129);
  tcase_add_test(tc_core, test_negate_130);
  tcase_add_test(tc_core, test_negate_131);
  tcase_add_test(tc_core, test_negate_132);
  tcase_add_test(tc_core, test_negate_133);
  tcase_add_test(tc_core, test_negate_134);
  tcase_add_test(tc_core, test_negate_135);
  tcase_add_test(tc_core, test_negate_136);
  tcase_add_test(tc_core, test_negate_137);
  tcase_add_test(tc_core, test_negate_138);
  tcase_add_test(tc_core, test_negate_139);
  tcase_add_test(tc_core, test_negate_140);
  tcase_add_test(tc_core, test_negate_141);
  tcase_add_test(tc_core, test_negate_142);
  tcase_add_test(tc_core, test_negate_143);
  tcase_add_test(tc_core, test_negate_144);
  tcase_add_test(tc_core, test_negate_145);
  tcase_add_test(tc_core, test_negate_146);
  tcase_add_test(tc_core, test_negate_147);
  tcase_add_test(tc_core, test_negate_148);
  tcase_add_test(tc_core, test_negate_149);
  tcase_add_test(tc_core, test_negate_150);
  tcase_add_test(tc_core, test_negate_151);
  tcase_add_test(tc_core, test_negate_152);
  tcase_add_test(tc_core, test_negate_153);
  tcase_add_test(tc_core, test_negate_154);
  tcase_add_test(tc_core, test_negate_155);
  tcase_add_test(tc_core, test_negate_156);
  tcase_add_test(tc_core, test_negate_157);
  tcase_add_test(tc_core, test_negate_158);
  tcase_add_test(tc_core, test_negate_159);
  tcase_add_test(tc_core, test_negate_160);
  tcase_add_test(tc_core, test_negate_161);
  tcase_add_test(tc_core, test_negate_162);
  tcase_add_test(tc_core, test_negate_163);
  tcase_add_test(tc_core, test_negate_164);
  tcase_add_test(tc_core, test_negate_165);
  tcase_add_test(tc_core, test_negate_166);
  tcase_add_test(tc_core, test_negate_167);
  tcase_add_test(tc_core, test_negate_168);
  tcase_add_test(tc_core, test_negate_169);
  tcase_add_test(tc_core, test_negate_170);
  tcase_add_test(tc_core, test_negate_171);
  tcase_add_test(tc_core, test_negate_172);
  tcase_add_test(tc_core, test_negate_173);
  tcase_add_test(tc_core, test_negate_174);
  tcase_add_test(tc_core, test_negate_175);
  tcase_add_test(tc_core, test_negate_176);
  tcase_add_test(tc_core, test_negate_177);
  tcase_add_test(tc_core, test_negate_178);
  tcase_add_test(tc_core, test_negate_179);
  tcase_add_test(tc_core, test_negate_180);
  tcase_add_test(tc_core, test_negate_181);
  tcase_add_test(tc_core, test_negate_182);
  tcase_add_test(tc_core, test_negate_183);
  tcase_add_test(tc_core, test_negate_184);
  tcase_add_test(tc_core, test_negate_185);
  tcase_add_test(tc_core, test_negate_186);
  tcase_add_test(tc_core, test_negate_187);
  tcase_add_test(tc_core, test_negate_188);
  tcase_add_test(tc_core, test_negate_189);
  tcase_add_test(tc_core, test_negate_190);
  tcase_add_test(tc_core, test_negate_191);
  tcase_add_test(tc_core, test_negate_192);
  tcase_add_test(tc_core, test_negate_193);
  tcase_add_test(tc_core, test_negate_194);
  tcase_add_test(tc_core, test_negate_195);
  tcase_add_test(tc_core, test_negate_196);
  tcase_add_test(tc_core, test_negate_197);
  tcase_add_test(tc_core, test_negate_198);
  tcase_add_test(tc_core, test_negate_199);
  tcase_add_test(tc_core, test_negate_200);
  tcase_add_test(tc_core, test_negate_201);
  tcase_add_test(tc_core, test_negate_202);
  tcase_add_test(tc_core, test_negate_203);
  tcase_add_test(tc_core, test_negate_204);
  tcase_add_test(tc_core, test_negate_205);
  tcase_add_test(tc_core, test_negate_206);
  tcase_add_test(tc_core, test_negate_207);
  tcase_add_test(tc_core, test_negate_208);
  tcase_add_test(tc_core, test_negate_209);
  tcase_add_test(tc_core, test_negate_210);
  tcase_add_test(tc_core, test_negate_211);
  tcase_add_test(tc_core, test_negate_212);
  tcase_add_test(tc_core, test_negate_213);
  tcase_add_test(tc_core, test_negate_214);
  tcase_add_test(tc_core, test_negate_215);
  tcase_add_test(tc_core, test_negate_216);
  tcase_add_test(tc_core, test_negate_217);
  tcase_add_test(tc_core, test_negate_218);
  tcase_add_test(tc_core, test_negate_219);
  tcase_add_test(tc_core, test_negate_220);
  tcase_add_test(tc_core, test_negate_221);
  tcase_add_test(tc_core, test_negate_222);
  tcase_add_test(tc_core, test_negate_223);
  tcase_add_test(tc_core, test_negate_224);
  tcase_add_test(tc_core, test_negate_225);
  tcase_add_test(tc_core, test_negate_226);
  tcase_add_test(tc_core, test_negate_227);
  tcase_add_test(tc_core, test_negate_228);
  tcase_add_test(tc_core, test_negate_229);
  tcase_add_test(tc_core, test_negate_230);
  tcase_add_test(tc_core, test_negate_231);
  tcase_add_test(tc_core, test_negate_232);
  tcase_add_test(tc_core, test_negate_233);
  tcase_add_test(tc_core, test_negate_234);
  tcase_add_test(tc_core, test_negate_235);
  tcase_add_test(tc_core, test_negate_236);
  tcase_add_test(tc_core, test_negate_237);
  tcase_add_test(tc_core, test_negate_238);
  tcase_add_test(tc_core, test_negate_239);
  tcase_add_test(tc_core, test_negate_240);
  tcase_add_test(tc_core, test_negate_241);
  tcase_add_test(tc_core, test_negate_242);
  tcase_add_test(tc_core, test_negate_243);
  tcase_add_test(tc_core, test_negate_244);
  tcase_add_test(tc_core, test_negate_245);
  tcase_add_test(tc_core, test_negate_246);
  tcase_add_test(tc_core, test_negate_247);
  tcase_add_test(tc_core, test_negate_248);
  tcase_add_test(tc_core, test_negate_249);
  tcase_add_test(tc_core, test_negate_250);
  tcase_add_test(tc_core, test_negate_251);
  tcase_add_test(tc_core, test_negate_252);
  tcase_add_test(tc_core, test_negate_253);
  tcase_add_test(tc_core, test_negate_254);
  tcase_add_test(tc_core, test_negate_255);
  tcase_add_test(tc_core, test_negate_256);
  tcase_add_test(tc_core, test_negate_257);
  tcase_add_test(tc_core, test_negate_258);
  tcase_add_test(tc_core, test_negate_259);
  tcase_add_test(tc_core, test_negate_260);
  tcase_add_test(tc_core, test_negate_261);
  tcase_add_test(tc_core, test_negate_262);
  tcase_add_test(tc_core, test_negate_263);
  tcase_add_test(tc_core, test_negate_264);
  tcase_add_test(tc_core, test_negate_265);
  tcase_add_test(tc_core, test_negate_266);
  tcase_add_test(tc_core, test_negate_267);
  tcase_add_test(tc_core, test_negate_268);
  tcase_add_test(tc_core, test_negate_269);
  tcase_add_test(tc_core, test_negate_270);
  tcase_add_test(tc_core, test_negate_271);
  tcase_add_test(tc_core, test_negate_272);
  tcase_add_test(tc_core, test_negate_273);
  tcase_add_test(tc_core, test_negate_274);
  tcase_add_test(tc_core, test_negate_275);
  tcase_add_test(tc_core, test_negate_276);
  tcase_add_test(tc_core, test_negate_277);
  tcase_add_test(tc_core, test_negate_278);
  tcase_add_test(tc_core, test_negate_279);
  tcase_add_test(tc_core, test_negate_280);
  tcase_add_test(tc_core, test_negate_281);
  tcase_add_test(tc_core, test_negate_282);
  tcase_add_test(tc_core, test_negate_283);
  tcase_add_test(tc_core, test_negate_284);
  tcase_add_test(tc_core, test_negate_285);
  tcase_add_test(tc_core, test_negate_286);
  tcase_add_test(tc_core, test_negate_287);
  tcase_add_test(tc_core, test_negate_288);
  tcase_add_test(tc_core, test_negate_289);
  tcase_add_test(tc_core, test_negate_290);
  tcase_add_test(tc_core, test_negate_291);
  tcase_add_test(tc_core, test_negate_292);
  tcase_add_test(tc_core, test_negate_293);
  tcase_add_test(tc_core, test_negate_294);
  tcase_add_test(tc_core, test_negate_295);
  tcase_add_test(tc_core, test_negate_296);
  tcase_add_test(tc_core, test_negate_297);
  tcase_add_test(tc_core, test_negate_298);
  tcase_add_test(tc_core, test_negate_299);
  tcase_add_test(tc_core, test_negate_300);
  tcase_add_test(tc_core, test_negate_301);
  tcase_add_test(tc_core, test_negate_302);
  tcase_add_test(tc_core, test_negate_303);
  tcase_add_test(tc_core, test_negate_304);
  tcase_add_test(tc_core, test_negate_305);
  tcase_add_test(tc_core, test_negate_306);
  tcase_add_test(tc_core, test_negate_307);
  tcase_add_test(tc_core, test_negate_308);
  tcase_add_test(tc_core, test_negate_309);
  tcase_add_test(tc_core, test_negate_310);
  tcase_add_test(tc_core, test_negate_311);
  tcase_add_test(tc_core, test_negate_312);
  tcase_add_test(tc_core, test_negate_313);
  tcase_add_test(tc_core, test_negate_314);
  tcase_add_test(tc_core, test_negate_315);
  tcase_add_test(tc_core, test_negate_316);
  tcase_add_test(tc_core, test_negate_317);
  tcase_add_test(tc_core, test_negate_318);
  tcase_add_test(tc_core, test_negate_319);
  tcase_add_test(tc_core, test_negate_320);
  tcase_add_test(tc_core, test_negate_321);
  tcase_add_test(tc_core, test_negate_322);
  tcase_add_test(tc_core, test_negate_323);
  tcase_add_test(tc_core, test_negate_324);
  tcase_add_test(tc_core, test_negate_325);
  tcase_add_test(tc_core, test_negate_326);
  tcase_add_test(tc_core, test_negate_327);
  tcase_add_test(tc_core, test_negate_328);
  tcase_add_test(tc_core, test_negate_329);
  tcase_add_test(tc_core, test_negate_330);
  tcase_add_test(tc_core, test_negate_331);
  tcase_add_test(tc_core, test_negate_332);
  tcase_add_test(tc_core, test_negate_333);
  tcase_add_test(tc_core, test_negate_334);
  tcase_add_test(tc_core, test_negate_335);
  tcase_add_test(tc_core, test_negate_336);
  tcase_add_test(tc_core, test_negate_337);
  tcase_add_test(tc_core, test_negate_338);
  tcase_add_test(tc_core, test_negate_339);
  tcase_add_test(tc_core, test_negate_340);
  tcase_add_test(tc_core, test_negate_341);
  tcase_add_test(tc_core, test_negate_342);
  tcase_add_test(tc_core, test_negate_343);
  tcase_add_test(tc_core, test_negate_344);
  tcase_add_test(tc_core, test_negate_345);
  tcase_add_test(tc_core, test_negate_346);
  tcase_add_test(tc_core, test_negate_347);
  tcase_add_test(tc_core, test_negate_348);
  tcase_add_test(tc_core, test_negate_349);
  tcase_add_test(tc_core, test_negate_350);
  tcase_add_test(tc_core, test_negate_351);
  tcase_add_test(tc_core, test_negate_352);
  tcase_add_test(tc_core, test_negate_353);
  tcase_add_test(tc_core, test_negate_354);
  tcase_add_test(tc_core, test_negate_355);
  tcase_add_test(tc_core, test_negate_356);
  tcase_add_test(tc_core, test_negate_357);
  tcase_add_test(tc_core, test_negate_358);
  tcase_add_test(tc_core, test_negate_359);
  tcase_add_test(tc_core, test_negate_360);
  tcase_add_test(tc_core, test_negate_361);
  tcase_add_test(tc_core, test_negate_362);
  tcase_add_test(tc_core, test_negate_363);
  tcase_add_test(tc_core, test_negate_364);
  tcase_add_test(tc_core, test_negate_365);
  tcase_add_test(tc_core, test_negate_366);
  tcase_add_test(tc_core, test_negate_367);
  tcase_add_test(tc_core, test_negate_368);
  tcase_add_test(tc_core, test_negate_369);
  tcase_add_test(tc_core, test_negate_370);
  tcase_add_test(tc_core, test_negate_371);
  tcase_add_test(tc_core, test_negate_372);
  tcase_add_test(tc_core, test_negate_373);
  tcase_add_test(tc_core, test_negate_374);
  tcase_add_test(tc_core, test_negate_375);
  tcase_add_test(tc_core, test_negate_376);
  tcase_add_test(tc_core, test_negate_377);
  tcase_add_test(tc_core, test_negate_378);
  tcase_add_test(tc_core, test_negate_379);
  tcase_add_test(tc_core, test_negate_380);
  tcase_add_test(tc_core, test_negate_381);
  tcase_add_test(tc_core, test_negate_382);
  tcase_add_test(tc_core, test_negate_383);
  tcase_add_test(tc_core, test_negate_384);
  tcase_add_test(tc_core, test_negate_385);
  tcase_add_test(tc_core, test_negate_386);
  tcase_add_test(tc_core, test_negate_387);
  tcase_add_test(tc_core, test_negate_388);
  tcase_add_test(tc_core, test_negate_389);
  tcase_add_test(tc_core, test_negate_390);
  tcase_add_test(tc_core, test_negate_391);
  tcase_add_test(tc_core, test_negate_392);
  tcase_add_test(tc_core, test_negate_393);
  tcase_add_test(tc_core, test_negate_394);
  tcase_add_test(tc_core, test_negate_395);
  tcase_add_test(tc_core, test_negate_396);
  tcase_add_test(tc_core, test_negate_397);
  tcase_add_test(tc_core, test_negate_398);
  tcase_add_test(tc_core, test_negate_399);
  tcase_add_test(tc_core, test_negate_400);

  suite_add_tcase(s, tc_core);
  return s;
}

void test_negate(s21_decimal decimal, s21_decimal decimal_check) {
  s21_decimal result;

  int code = s21_negate(decimal, &result);
  int sign_check = s21_get_sign(decimal_check);
  int sign_result = s21_get_sign(result);

  ck_assert_int_eq(code, OK);
  ck_assert_int_eq(s21_is_equal(result, decimal_check), TRUE);
  ck_assert_int_eq(sign_check, sign_result);
}