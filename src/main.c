#include "arithmetic/s21_arithmetic.h"
#include "s21_decimal.h"
#include <stdio.h>

int main(){
    s21_decimal result = s21_clear_decimal();
    s21_decimal first = {4, 0, 0, 0};
    s21_decimal second = {2, 0, 0, 0};
    s21_decimal remainder = s21_clear_decimal();

    s21_set_scale(&first, 0);
    s21_set_scale(&second, 0);

    //result = s21_binary_subtraction(first, second);
    result = s21_binary_division(first, second, &remainder);
    //s21_pretty_print_bits(result);  
    // s21_pretty_print_bits(remainder);

}