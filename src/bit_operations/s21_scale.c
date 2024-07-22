#include "../s21_decimal.h"

int s21_get_scale(s21_decimal value){
}

void s21_set_scale(s21_decimal *value, int scale){
    if (scale >= 0 && scale <= 28){
        int sign = s21_get_bit(*value, 127);
        value->bits[3] = scale;
        value->bits[3] = value->bits[3] << 16;
        s21_set_sign(value, sign);
    }
}

