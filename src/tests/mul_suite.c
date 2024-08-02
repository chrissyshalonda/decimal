// #include "test.h"

// START_TEST(test_mul) {
//     s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
//     s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0}};
//     int code = s21_mul(decimal1, decimal2, NULL);

//     ck_assert_int_ne(code, TEST_ARITHMETIC_OK);
// }

// Suite* test_bit_operations(void) {
//   Suite* s;
//   TCase* tc;

//   s = suite_create("Bit operations");
//   tc = tcase_create("Bit operations");

//   if (s != NULL && tc != NULL) {
//     tcase_add_test(tc, test_mul);
//   }

//   return (s);
// }