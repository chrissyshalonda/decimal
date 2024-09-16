#include "../s21_decimal.h"
#include "../arithmetic/s21_arithmetic.h"

s21_decimal s21_remove_zeros(s21_decimal value){
    s21_decimal result;
    int scale = s21_get_scale(value);
    int sign = s21_get_sign(value);

    if (scale > 0){
        s21_decimal remainder = s21_clear_decimal();
        s21_decimal tmp = value;
        value.bits[3] = 0;

        while (scale > 0){
            tmp = s21_binary_division(tmp, scale_table[1], &remainder);
            if(s21_equal_zero(remainder)){
                --scale;
                result = tmp;
            } else {
                break;
            }
        }

        s21_set_scale(&result, scale);
        s21_set_sign(&result, sign);
    }
}