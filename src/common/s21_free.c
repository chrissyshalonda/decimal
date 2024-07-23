#include "../s21_decimal.h"

void s21_free_decimal(s21_decimal* value) { free(value); }

void s21_big_free_decimal(s21_big_decimal* value) { free(value); }