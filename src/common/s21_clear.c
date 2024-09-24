#include "../s21_decimal.h"

s21_decimal s21_clear_decimal() {
  s21_decimal value;
  value.bits[0] = 0;
  value.bits[1] = 0;
  value.bits[2] = 0;
  value.bits[3] = 0;
  return value;
}