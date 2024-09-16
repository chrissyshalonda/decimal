#include "../s21_decimal.h"

s21_decimal* s21_create_decimal() {
  s21_decimal* result = (s21_decimal*)calloc(1, sizeof(s21_decimal));
  return result;
}

s21_big_decimal s21_create_big_decimal(s21_decimal value){
  s21_big_decimal result;
  result.decimal[0] = value;
  result.decimal[1] = s21_clear_decimal();
  return result;
}