#include <stdlib.h>

#include "test.h"

int main(void) {
  int number_failed;
  SRunner *sr;

  sr = srunner_create(NULL);

  srunner_add_suite(sr, add_suite());
  srunner_add_suite(sr, sub_suite());
  srunner_add_suite(sr, mul_suite());
  srunner_add_suite(sr, div_suite());
  srunner_add_suite(sr, mod_suite());

  srunner_add_suite(sr, is_equal_suite());
  srunner_add_suite(sr, is_greater_suite());
  srunner_add_suite(sr, is_less_suite());
  srunner_add_suite(sr, is_not_equal_suite());
  srunner_add_suite(sr, is_greater_or_equal_suite());
  srunner_add_suite(sr, is_less_or_equal_suite());

  srunner_add_suite(sr, negate_suite());
  srunner_add_suite(sr, truncate_suite());
  srunner_add_suite(sr, floor_suite());
  srunner_add_suite(sr, round_suite());

  srunner_add_suite(sr, from_int_to_decimal_suite());
  srunner_add_suite(sr, from_decimal_to_int_suite());
  srunner_add_suite(sr, from_decimal_to_float_suite());
  srunner_add_suite(sr, from_float_to_decimal_suite());

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return (number_failed == 0) ? 0 : -1;
}

// int main(void) {
//     int number_failed;
//     SRunner *sr;

//     sr = srunner_create(NULL);
//     srunner_add_suite(sr, add_suite1());
//     // srunner_add_suite(sr, add_suite2());
//     // srunner_add_suite(sr, add_suite3());
//     // srunner_add_suite(sr, add_suite4());
//     // srunner_add_suite(sr, add_suite5());
//     // srunner_add_suite(sr, add_suite6());
//     // srunner_add_suite(sr, add_suite7());
//     // srunner_add_suite(sr, add_suite8());
//     // srunner_add_suite(sr, add_suite9());

//     srunner_set_fork_status(sr, CK_NOFORK);
//     // Используем данный блок для вывода подробно про каждый тест с
//     разбиением по блокам
//     // srunner_set_log(sr, "-");
//     // srunner_run_all(sr, CK_SILENT);  // CK_SILENT || CK_MINIMAL ||
//     CK_NORMAL || CK_VERBOSE
//     // Либо данный блок вместо предыдущего для вывода только ошибок и общего
//     результата srunner_run_all(sr, CK_NORMAL);

//     number_failed = srunner_ntests_failed(sr);
//     srunner_free(sr);
//     return (number_failed == 0) ? 0 : -1;
// }