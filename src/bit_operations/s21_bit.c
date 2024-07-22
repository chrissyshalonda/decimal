#include "../s21_decimal.h"


int s21_get_bit(s21_decimal value, int bit_index) {
    return (value.bits[bit_index/32] & (1 << bit_index % 32)) ? 1 : 0;
}

void s21_set_bit(s21_decimal *value, int bit_index, int boolean){
    if(boolean) value->bits[bit_index/32] |= (1 << bit_index % 32);
    else value->bits[bit_index/32] &= ~(1 << bit_index % 32);
}

void s21_print_bits(s21_decimal value) {
  for (int i = 0; i < 4; i++) {
    printf("%d", value.bits[i]);
  }
}