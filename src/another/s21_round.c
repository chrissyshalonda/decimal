#include "../s21_decimal.h"

int s21_round(s21_decimal value, s21_decimal *result) {
  int code = 0;
  if (result == NULL) {
    code = 1;
  } else {
    int sign = s21_get_sign(value);
    s21_decimal part;

    s21_decimal truncated;
    s21_decimal unsigned_ = value;
    s21_set_sign(&unsigned_, 0);

    s21_truncate(unsigned_, &truncated);
    s21_sub(unsigned_, truncated, &part);

    truncated = s21_round_banking(truncated, part);

    *result = truncated;
    s21_set_sign(result, sign);
  }

  return code;
}