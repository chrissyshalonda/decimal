// #include "test.h"

// START_TEST(test_create_and_remove_matrix) {
//   s21_matrix* a = s21_create_matrix(2, 2);
//   ck_assert(a != NULL);
//   s21_free_matrix(a);
// }

// Suite * test_another(void) {

//   Suite *s;
//   TCase *tc;

//   s = suite_create("Another");
//   tc = tcase_create("Another");

//   if (s != NULL && tc != NULL) {
//     tcase_add_test(tc, test_01);
//     tcase_add_test(tc, test_02);
//     tcase_add_test(tc, test_03);
//     tcase_add_test(tc, test_04);
//     tcase_add_test(tc, test_05);
//     tcase_add_test(tc, error_test);
//     tcase_add_test(tc, error_test2);
//     tcase_add_test(tc, error_test3);
//     tcase_add_test(tc, error_test3);

//     suite_add_tcase(s, tc);
//   }

//   return (s);
// }