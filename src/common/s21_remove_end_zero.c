#include "../s21_decimal.h"

void s21_remove_end_zero(s21_decimal *value) {
  char *number = malloc(100);
  s21_from_decimal_to_string(*value, number);
  int zeros = s21_count_trailing_zeros(number);
  free(number);
  printf("zeros: %d\n", zeros);

  // s21_decimal temp = s21_init_int(1, 1);
  // if (zeros > 0) {
  //   s21_set_scale(value, s21_get_scale(*value) - zeros);
  //   for (int i = 0; i < zeros; i++) {
  //     s21_mul(*value, temp, value);
  //   }
  // }
}

int s21_count_trailing_zeros(const char *str) {
  int count = 0;
  int len = strlen(str);

  for (int i = len - 1; i >= 0; i--) {
    if (str[i] == '0') {
      count++;
    } else {
      break;
    }
  }

  return count;
}
