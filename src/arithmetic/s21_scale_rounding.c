#include "../s21_decimal.h"

s21_decimal s21_get_ten_value(int scale_value){
    return scale_table[scale_value];
}

void s21_scale_rounding(s21_decimal *value_1,s21_decimal *value_2, int scale_1, int scale_2){
    if(scale_1 > scale_2){
        s21_mul_processing(*value_2, s21_get_ten_value(scale_1 - scale_2) , value_2);
    } else if (scale_1 < scale_2){
        s21_mul_processing(*value_1, s21_get_ten_value(scale_2 - scale_1) , value_1);
    }
}


int get_abs(int value_1, int value_2){
    int result;
    if (value_1 >= value_2){
        result = value_1 - value_2;
    } else {
        result = value_2 - value_1;
    }
    return result;
}