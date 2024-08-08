#include "s21_arithmetic.h"
#include <stdio.h>

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    ERRORS code = OK;

    if(!result){
        code = UNEXEPTED_ERROR;
    } else if (s21_equal_zero(value_2)){
        code = ZERO_DIVISION;
    } else {
        
        *result = s21_clear_decimal(*result);

        int sign1 = s21_get_sign(value_1);
        int sign2 = s21_get_sign(value_2);

        // *result = s21_div_processing();
    }
    return code;
}

int s21_div_processing(s21_decimal value_1, s21_decimal value_2, s21_decimal *result){
    int sign1 = s21_get_sign(value_1);
    int sign2 = s21_get_sign(value_2);

    int scale_1 = s21_get_scale(value_1);
    int scale_2 = s21_get_scale(value_2);
    value_1.bits[3] = value_2.bits[3] = 0;

    s21_scale_rounding(&value_1, &value_2, scale_1, scale_2);
    return 0;
}

s21_decimal s21_binary_division(s21_decimal value_1, s21_decimal value_2, s21_decimal *remainder){
    s21_decimal result;
    s21_decimal remainder_of_divison = s21_clear_decimal();
    s21_decimal quotient = s21_clear_decimal();

    if(s21_equal_zero(value_1)){
        quotient = s21_clear_decimal();
        remainder_of_divison = s21_clear_decimal();
    } else if (0) {
        quotient = s21_clear_decimal();
        remainder_of_divison = value_1;
    } else {
        int first = s21_max_not_null_bit(value_1);
        int second = s21_max_not_null_bit(value_2);
        int shift = first - second;

        s21_decimal shifted = value_2;
        s21_decimal dividend = value_1;

        for(int i = shift; i > 0; i--){
            shifted = s21_binary_shift_left(shifted);
        }

        int flag = 1;

        while (shift >= 0) {
            if (flag == 1) {
                remainder_of_divison = s21_binary_subtraction(dividend, shifted);
            } else {
                remainder_of_divison = s21_binary_addition(dividend, shifted);
            }

            quotient = s21_binary_shift_left(quotient);
            if (s21_get_bit(remainder_of_divison, 127) == 0) {
                s21_set_bit(&quotient, 0);
            }

            dividend = s21_binary_shift_left(remainder_of_divison);
            if (s21_get_bit(remainder_of_divison, 127) == 0) {
                flag = 1;
            } else {
                flag = 0;
            }
            --shift;
        }

        if(s21_get_bit(remainder_of_divison, 127)){
            remainder_of_divison = s21_binary_and(remainder_of_divison, shifted);
        }

        for(int i = first - second; i > 0; i--){
            remainder_of_divison = s21_binary_shift_right(remainder_of_divison);
        }
    }
    
    result = quotient;
    if(remainder != NULL){
        *remainder = remainder_of_divison;
    }

    return result;
}