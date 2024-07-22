#include "../s21_decimal.h"

void s21_set_sign(s21_decimal *value, int sign){
    if (sign) value->bits[3] |= (1 << 31);
    else value->bits[3] &= ~(1 << 31);
}

int s21_get_sign(s21_decimal value){
    return (value.bits[3] & (1 << 31) ? 1 : 0);
}