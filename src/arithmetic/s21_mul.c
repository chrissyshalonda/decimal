#include "s21_arithmetic.h"

int s21_max_not_null_bit(s21_decimal value){
    int result = -1;
    for(int i = 95; i >= 0; i--){
        if(s21_get_bit(value, i)){
            result = i;
            break;
        }
    }
    return result;
}


int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    ERRORS code = OK;

    if(!result){

        code = UNEXEPTED_ERROR;
    } else {

        *result = s21_clear_decimal(*result);

        int sign1 = s21_get_sign(value_1);
        int sign2 = s21_get_sign(value_2);

        if(sign1 == POSITIVE_SIGN && sign2 == POSITIVE_SIGN){
            s21_mul_processing(value_1, value_2, result);
        } else if (sign1 == POSITIVE_SIGN && sign2 == NEGATIVE_SIGN){
        } else if (sign1 == NEGATIVE_SIGN && sign2 == POSITIVE_SIGN){
        } else if (sign1 == NEGATIVE_SIGN && sign2 == NEGATIVE_SIGN){
        }
    }
    
    return code;
}


int s21_mul_processing(s21_decimal value_1, s21_decimal value_2, s21_decimal *result){
    int scale_1 = s21_get_scale(value_1);
    int scale_2 = s21_get_scale(value_2);
    *result = s21_clear_decimal();
    
    value_1.bits[3] = value_2.bits[3] = 0;
    int max_bit = s21_max_not_null_bit(value_2);

    s21_decimal tmp = value_1;

    for(int i = 0; i <= max_bit; i++){
        if(s21_get_bit(value_2, i)){
            s21_add_processing(*result, tmp, result);
        }
        tmp = s21_binary_shift_left(tmp);
    }

    s21_set_scale(result, scale_1 + scale_2);

    return 0;
}
