#include "../s21_decimal.h"

int getRow(int bit_index) { return bit_index / 32; }

int getCol(int bit_index) { return bit_index % 32; }

int s21_get_bit(s21_decimal value, int bit_index) {
  return (value.bits[getRow(bit_index)] & (1 << getCol(bit_index))) != 0;
}

int s21_set_bit(s21_decimal *value, int bit_index) {
  value->bits[getRow(bit_index)] |= (1 << getCol(bit_index));
  return 0;
}