#include "../s21_decimal.h"

int s21_get_scale(s21_decimal value){ // value.bits = {1, 22, 5, 7432}
    return value.bits[3] >> 7; 
}

void s21_set_scale(s21_decimal *value, int scale){
    int sign = s21_get_bit(*value, 127);
    (*value).bits[3] |= scale;
}

