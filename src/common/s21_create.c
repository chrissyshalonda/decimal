#include "../s21_decimal.h"

s21_decimal* s21_create_decimal() {
  s21_decimal* result = (s21_decimal*)calloc(1, sizeof(s21_decimal));
  return result;
}