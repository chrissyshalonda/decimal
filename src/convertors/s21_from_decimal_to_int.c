#include "../another/s21_another.h"
#include "../s21_decimal.h"

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  int code = 0;
  int sign = s21_get_sign(src);

  if (dst == NULL) {
    code = 1;
  } else {
    s21_decimal truncated;
    s21_truncate(src, &truncated);

    int pow = 1;
    for (int i = 0; i < 96; i++) {
      (*dst) += s21_get_bit(truncated, i) * pow;
      if (pow == 1) {
        pow = 2;
      } else {
        pow *= 2;
      }
    }

    if (sign == 1) {
      *dst = -(*dst);
    }
  }
  return code;
}