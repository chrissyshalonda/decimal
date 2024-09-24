#include <math.h>

#include "../s21_decimal.h"

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  int code = 0;
  *dst = 0.0;

  if (dst == NULL) {
    code = 1;
  } else if (s21_is_equal(src, s21_clear_decimal())) {
    int sign = s21_get_sign(src);

    if (sign) {
      *dst = -0.0;
    } else {
      *dst = 0.0;
    }
  } else {
    double tmp = 0;

    int sign = s21_get_sign(src);
    int scale = s21_get_scale(src);

    for (int i = 0; i < 96; i++) {
      tmp += s21_get_bit(src, i) * pow(2, i);
    }

    double ten_power = pow(10, scale);
    tmp /= ten_power;

    if (sign) {
      tmp *= -1;
    }

    *dst = (float)tmp;
  }
  return 0;
}