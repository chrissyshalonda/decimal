#include "test.h"

START_TEST(test_add1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = TEST_ARITHMETIC_BIG;

  test_add_fail(decimal1, decimal2, check);
}

START_TEST(test_add2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal check = {{0x0, 0x0, 0x0, 0x0}};

  test_add(decimal1, decimal2, check);
}

START_TEST(test_add3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950334
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // overflow
  int check = TEST_ARITHMETIC_BIG;

  test_add_fail(decimal1, decimal2, check);
}

START_TEST(test_add4) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950334
  s21_decimal decimal2 = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1
  s21_decimal check = {{0x1, 0x0, 0x0, 0x0}};

  test_add(decimal1, decimal2, check);
}

START_TEST(test_add5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // overflow
  int check = TEST_ARITHMETIC_BIG;

  test_add_fail(decimal1, decimal2, check);
}

START_TEST(test_add6) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 71305346262837903834189555302
  s21_decimal check = {{0x66666666, 0x66666666, 0xE6666666, 0x0}};

  test_add(decimal1, decimal2, check);
}

START_TEST(test_add7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033.5
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x10000}};
  // overflow
  int check = TEST_ARITHMETIC_BIG;

  test_add_fail(decimal1, decimal2, check);
}

START_TEST(test_add8) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033.5
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80010000}};
  // 71305346262837903834189555302
  s21_decimal check = {{0x66666666, 0x66666666, 0xE6666666, 0x0}};

  test_add(decimal1, decimal2, check);
}

START_TEST(test_add9) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
    // overflow
    int check = TEST_ARITHMETIC_BIG;

    test_add_fail(decimal1, decimal2, check);
}

START_TEST(test_add10) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -7922816251426433759354395034
    s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999,
    0x80000000}};
    // 71305346262837903834189555301
    s21_decimal check = {{0x66666665, 0x66666666, 0xE6666666, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add11) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999, 0x0}};
    // overflow
    int check = TEST_ARITHMETIC_BIG;

    test_add_fail(decimal1, decimal2, check);
}

START_TEST(test_add12) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -7922816251426433759354395035
    s21_decimal decimal2 = {{0x9999999B, 0x99999999, 0x19999999,
    0x80000000}};
    // 71305346262837903834189555300
    s21_decimal check = {{0x66666664, 0x66666666, 0xE6666666, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add13) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
    // overflow
    int check = TEST_ARITHMETIC_BIG;

    test_add_fail(decimal1, decimal2, check);
}

START_TEST(test_add14) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -1
    s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
    // 79228162514264337593543950334
    s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add15) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x10000}};
    // overflow
    int check = TEST_ARITHMETIC_BIG;

    test_add_fail(decimal1, decimal2, check);
}

START_TEST(test_add16) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -0.5
    s21_decimal decimal2 = {{0x5, 0x0, 0x0, 0x80010000}};
    // 79228162514264337593543950334
    s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add17) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // 79228162514264337593543950335
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add18) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // -0.4999999999999999999999999999
    s21_decimal decimal2 = {{0x87FFFFFF, 0x1F128130, 0x1027E72F,
    0x801C0000}};
    // 79228162514264337593543950335
    s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

    test_add(decimal1, decimal2, check);
}

START_TEST(test_add19) {
    // 79228162514264337593543950335
    s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
    // 0.5000000000000000000000000001
    s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F, 0x1C0000}};
    // overflow
    int check = TEST_ARITHMETIC_BIG;

    test_add_fail(decimal1, decimal2, check);
}

// START_TEST(test_add20) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -0.5000000000000000000000000001
//     s21_decimal decimal2 = {{0x88000001, 0x1F128130, 0x1027E72F,
//     0x801C0000}};
//     // 79228162514264337593543950334
//     s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add21) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 1.9999999999999999999999999000
//     s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC, 0x1C0000}};
//     // overflow
//     int check = TEST_ARITHMETIC_BIG;

//     test_add_fail(decimal1, decimal2, check);
// }

// START_TEST(test_add22) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -1.9999999999999999999999999000
//     s21_decimal decimal2 = {{0x1FFFFC18, 0x7C4A04C2, 0x409F9CBC,
//     0x801C0000}};
//     // 79228162514264337593543950333
//     s21_decimal check = {{0xFFFFFFFD, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add23) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 1.0000000000000000000000000001
//     s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E, 0x1C0000}};
//     // overflow
//     int check = TEST_ARITHMETIC_BIG;

//     test_add_fail(decimal1, decimal2, check);
// }

// START_TEST(test_add24) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -1.0000000000000000000000000001
//     s21_decimal decimal2 = {{0x10000001, 0x3E250261, 0x204FCE5E,
//     0x801C0000}};
//     // 79228162514264337593543950334
//     s21_decimal check = {{0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add25) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 26409387504754779197847983445
//     s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555, 0x0}};
//     // overflow
//     int check = TEST_ARITHMETIC_BIG;

//     test_add_fail(decimal1, decimal2, check);
// }

// START_TEST(test_add26) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -26409387504754779197847983445
//     s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x55555555,
//     0x80000000}};
//     // 52818775009509558395695966890
//     s21_decimal check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add27) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 26409387498605864508043122005
//     s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x0}};
//     // overflow
//     int check = TEST_ARITHMETIC_BIG;

//     test_add_fail(decimal1, decimal2, check);
// }

// START_TEST(test_add28) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -26409387498605864508043122005
//     s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80000000}};
//     // 52818775015658473085500828330
//     s21_decimal check = {{0xAAAAAAAA, 0xFFFFFFFF, 0xAAAAAAAA, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add29) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 6148914691236517205
//     s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x0}};
//     // overflow
//     int check = TEST_ARITHMETIC_BIG;

//     test_add_fail(decimal1, decimal2, check);
// }

// START_TEST(test_add30) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -6148914691236517205
//     s21_decimal decimal2 = {{0x55555555, 0x55555555, 0x0, 0x80000000}};
//     // 79228162508115422902307433130
//     s21_decimal check = {{0xAAAAAAAA, 0xAAAAAAAA, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add31) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 6148914689804861440
//     s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x0}};
//     // overflow
//     int check = TEST_ARITHMETIC_BIG;

//     test_add_fail(decimal1, decimal2, check);
// }

// START_TEST(test_add32) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -6148914689804861440
//     s21_decimal decimal2 = {{0x0, 0x55555555, 0x0, 0x80000000}};
//     // 79228162508115422903739088895
//     s21_decimal check = {{0xFFFFFFFF, 0xAAAAAAAA, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add33) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 1431655765
//     s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
//     // overflow
//     int check = TEST_ARITHMETIC_BIG;

//     test_add_fail(decimal1, decimal2, check);
// }

// START_TEST(test_add34) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -1431655765
//     s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
//     // 79228162514264337592112294570
//     s21_decimal check = {{0xAAAAAAAA, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add35) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 26409387.704754779197847983445
//     s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560, 0x150000}};
//     // overflow
//     int check = TEST_ARITHMETIC_BIG;

//     test_add_fail(decimal1, decimal2, check);
// }

// START_TEST(test_add36) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -26409387.704754779197847983445
//     s21_decimal decimal2 = {{0x1B755555, 0x2CE411B0, 0x55555560,
//     0x80150000}};
//     // 79228162514264337593517540947
//     s21_decimal check = {{0xFE6D0653, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add37) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 26409387.498605864508043122005
//     s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x150000}};
//     // overflow
//     int check = TEST_ARITHMETIC_BIG;

//     test_add_fail(decimal1, decimal2, check);
// }

// START_TEST(test_add38) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -26409387.498605864508043122005
//     s21_decimal decimal2 = {{0x55555555, 0x0, 0x55555555, 0x80150000}};
//     // 79228162514264337593517540948
//     s21_decimal check = {{0xFE6D0654, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add39) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 26409387
//     s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x0}};
//     // overflow
//     int check = TEST_ARITHMETIC_BIG;

//     test_add_fail(decimal1, decimal2, check);
// }

// START_TEST(test_add40) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -26409387
//     s21_decimal decimal2 = {{0x192F9AB, 0x0, 0x0, 0x80000000}};
//     // 79228162514264337593517540948
//     s21_decimal check = {{0xFE6D0654, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add41) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 7.9228162514264337593543950335
//     s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x1C0000}};
//     // overflow
//     int check = TEST_ARITHMETIC_BIG;

//     test_add_fail(decimal1, decimal2, check);
// }

// START_TEST(test_add42) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -7.9228162514264337593543950335
//     s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,
//     0x801C0000}};
//     // 79228162514264337593543950327
//     s21_decimal check = {{0xFFFFFFF7, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add43) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 8
//     s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x0}};
//     // overflow
//     int check = TEST_ARITHMETIC_BIG;

//     test_add_fail(decimal1, decimal2, check);
// }

// START_TEST(test_add44) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -8
//     s21_decimal decimal2 = {{0x8, 0x0, 0x0, 0x80000000}};
//     // 79228162514264337593543950327
//     s21_decimal check = {{0xFFFFFFF7, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add45) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 3.6336660283201536
//     s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x100000}};
//     // overflow
//     int check = TEST_ARITHMETIC_BIG;

//     test_add_fail(decimal1, decimal2, check);
// }

// START_TEST(test_add46) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -3.6336660283201536
//     s21_decimal decimal2 = {{0x811800, 0x811800, 0x0, 0x80100000}};
//     // 79228162514264337593543950331
//     s21_decimal check = {{0xFFFFFFFB, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add47) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -0
//     s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
//     // 79228162514264337593543950335
//     s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add48) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 0
//     s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
//     // 79228162514264337593543950335
//     s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add49) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // -0.0000000000000000000000000000
//     s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
//     // 79228162514264337593543950335
//     s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

// START_TEST(test_add50) {
//     // 79228162514264337593543950335
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
//     // 0.0000000000000000000000000000
//     s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
//     // 79228162514264337593543950335
//     s21_decimal check = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};

//     test_add(decimal1, decimal2, check);
// }

Suite *add_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("add1");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_add1);
  tcase_add_test(tc_core, test_add2);
  tcase_add_test(tc_core, test_add3);
  tcase_add_test(tc_core, test_add4);
  tcase_add_test(tc_core, test_add5);
  tcase_add_test(tc_core, test_add6);
  tcase_add_test(tc_core, test_add7);
  tcase_add_test(tc_core, test_add8);
  tcase_add_test(tc_core, test_add9);
  tcase_add_test(tc_core, test_add10);
  tcase_add_test(tc_core, test_add11);
  tcase_add_test(tc_core, test_add12);
  tcase_add_test(tc_core, test_add13);
  tcase_add_test(tc_core, test_add14);
  tcase_add_test(tc_core, test_add15);
  tcase_add_test(tc_core, test_add16);
  tcase_add_test(tc_core, test_add17);
  tcase_add_test(tc_core, test_add18);
  tcase_add_test(tc_core, test_add19);
  // tcase_add_test(tc_core, test_add20);
  // tcase_add_test(tc_core, test_add21);
  // tcase_add_test(tc_core, test_add22);
  // tcase_add_test(tc_core, test_add23);
  // tcase_add_test(tc_core, test_add24);
  // tcase_add_test(tc_core, test_add25);
  // tcase_add_test(tc_core, test_add26);
  // tcase_add_test(tc_core, test_add27);
  // tcase_add_test(tc_core, test_add28);
  // tcase_add_test(tc_core, test_add29);
  // tcase_add_test(tc_core, test_add30);
  // tcase_add_test(tc_core, test_add31);
  // tcase_add_test(tc_core, test_add32);
  // tcase_add_test(tc_core, test_add33);
  // tcase_add_test(tc_core, test_add34);
  // tcase_add_test(tc_core, test_add35);
  // tcase_add_test(tc_core, test_add36);
  // tcase_add_test(tc_core, test_add37);
  // tcase_add_test(tc_core, test_add38);
  // tcase_add_test(tc_core, test_add39);
  // tcase_add_test(tc_core, test_add40);
  // tcase_add_test(tc_core, test_add41);
  // tcase_add_test(tc_core, test_add42);
  // tcase_add_test(tc_core, test_add43);
  // tcase_add_test(tc_core, test_add44);
  // tcase_add_test(tc_core, test_add45);
  // tcase_add_test(tc_core, test_add46);
  // tcase_add_test(tc_core, test_add47);
  // tcase_add_test(tc_core, test_add48);
  // tcase_add_test(tc_core, test_add49);
  // tcase_add_test(tc_core, test_add50);
  suite_add_tcase(s, tc_core);
  return s;
}

void test_add(s21_decimal decimal1, s21_decimal decimal2, s21_decimal check) {
  s21_decimal result;
  int code = s21_add(decimal1, decimal2, &result);
  ck_assert_int_eq(code, TEST_ARITHMETIC_OK);
}

void test_add_fail(s21_decimal decimal1, s21_decimal decimal2, int check) {
  s21_decimal result;
  int code = s21_add(decimal1, decimal2, &result);
  ck_assert_int_eq(code, check);
}