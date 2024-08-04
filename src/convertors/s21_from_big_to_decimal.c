#include "../s21_decimal.h"

int s21_from_big_to_decimal(s21_big_decimal* big, s21_decimal* decimal) {
  // normalize

  int error = 0;
  for (int i = 96; i < 224; i++)
    if (s21_big_get_bit(*big, i) ^ s21_big_get_sign(*big)) {
      error = s21_big_get_sign(*big) ? NEG_INFINITY : INFINITY;
      break;
    }
  if (error == 0) {
    decimal->bits[3] = big->bits[7];
    decimal->bits[2] = big->bits[2];
    decimal->bits[1] = big->bits[1];
    decimal->bits[0] = big->bits[0];
  }

  return error;
}