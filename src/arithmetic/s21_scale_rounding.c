#include "../s21_decimal.h"

void s21_scale_rounding(s21_decimal value_1, s21_decimal value_2){
    int sign1 = s21_get_sign(value_1);
    int sign2 = s21_get_sign(value_2);

    int scale_1 = s21_get_scale(value_1);
    int scale_2 = s21_get_scale(value_2);

    value_1.bits[3] = value_2.bits[3] = 0;
}