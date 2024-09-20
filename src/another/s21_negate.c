#include "../s21_decimal.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  int code = 0;

  if (result == NULL) {
    code = 1;
  } else {
    s21_set_sign(result, !s21_get_sign(*result));
  }

  return code;
}
