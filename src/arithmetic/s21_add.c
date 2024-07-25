#include "../s21_decimal.h"

int s21_add_processing(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_equal_zero(s21_decimal value);
s21_decimal s21_binary_and(s21_decimal result, s21_decimal tmp);
s21_decimal s21_binary_xor(s21_decimal result, s21_decimal tmp);
s21_decimal s21_binary_shift_left(s21_decimal value);

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
    ERRORS code = OK;

    if(!result){

        code = UNEXEPTED_ERROR;
    } else {

        *result = s21_clear_decimal(*result);

        int sign1 = s21_get_sign(value_1);
        int sign2 = s21_get_sign(value_2);

        if(sign1 == POSITIVE_SIGN && sign2 == POSITIVE_SIGN){
            s21_add_processing(value_1, value_2, result);
        } else if (sign1 == POSITIVE_SIGN && sign2 == NEGATIVE_SIGN){
        } else if (sign1 == NEGATIVE_SIGN && sign2 == POSITIVE_SIGN){
        } else if (sign1 == NEGATIVE_SIGN && sign2 == NEGATIVE_SIGN){
        }
    }
    return code;
}


int s21_add_processing(s21_decimal value_1, s21_decimal value_2, s21_decimal *result){
    s21_decimal tmp = value_2;

    while(!s21_equal_zero(tmp)){
        s21_decimal overflow = s21_binary_and(value_1, tmp);
        overflow = s21_binary_shift_left(overflow);
        *result = s21_binary_xor(value_1, tmp);
        tmp = overflow;
    }
    return 0;
}

int s21_equal_zero(s21_decimal value){
    return (value.bits[0] && value.bits[1] && value.bits[2] && value.bits[3]);
}

s21_decimal s21_binary_and(s21_decimal result, s21_decimal tmp){
    s21_decimal output = s21_clear_decimal();
    for(int i = 0; i < 4; i++){
        output.bits[i] = result.bits[i] & tmp.bits[i];
    }
    return output;
}

s21_decimal s21_binary_xor(s21_decimal result, s21_decimal tmp){
    s21_decimal output = s21_clear_decimal();
    for(int i = 0; i < 4; i++){
        output.bits[i] = result.bits[i] | tmp.bits[i];
    }
    return output;
}

s21_decimal s21_binary_shift_left(s21_decimal value){
    s21_decimal result = s21_clear_decimal();

    int first = s21_get_bit(value, 31);
    unsigned int result_first = value.bits[0];
    result_first = result_first << 1;
    result.bits[0] = result_first;

    int second = s21_get_bit(value, 63);
    unsigned int result_second = value.bits[0];
    result_second = result_second << 1;
    result.bits[0] = result_second;

    int third = s21_get_bit(value, 95);
    unsigned int result_third = value.bits[0];
    result_third = result_third << 1;
    result.bits[0] = result_third;

    unsigned int result_four = value.bits[3];
    result_four = result_four << 1;
    result.bits[3] = result_four;

    if(first) s21_set_bit(&result, 32);
    if(second) s21_set_bit(&result, 64);
    if(third) s21_set_bit(&result, 96);
}
















































































// void s21_decimal_equalization(s21_decimal value_1, s21_decimal value_2, s21_big_decimal *bvalue_1, s21_big_decimal *bvalue_2l, int scale_1, int scale_2){
//     s21_decimal temp_1 = value_1;
//     s21_decimal temp_2 = value_2;

//     temp_1.bits[3] = temp_2.bits[3] = 0;

//     if(scale_1 > scale_2){
//         *bvalue_1 = s21_create_big_decimal_from_decimal(value_1);
//         *bvalue_2 = 
//     } else if (scale_1 < scale_2){

//     } else {

//     }
// }

// s21_big_decimal s21_create_big_decimal_from_decimal(s21_decimal value){
//     s21_big_decimal big_decimal;
//     for(int i = 0; i < 4; i++) big_decimal[i] = value[i];
//     for(int i = 4; i < 8; i++) big_decimal[i] = 0;
//     return big_decimal;
// }

// s21_big_decimal s21_something(s21_decimal value_1, s21_decimal value_2){
//     s21_big_decimal big_decimal = s21_big_clear_decimal(big_decimal);
//     s21_big_decimal big_decimal_temp = s21_create_big_decimal_from_decimal(value_1);

//     int max_neaby_bit = s21_get_nearby_positive_bit(value_2);

//     for(int i = 0; i < max_neaby_bit; i++){
//         if (s21_get_bit(value_2)){

//         }
//     }
// }

// int s21_get_nearby_positive_bit(s21_decimal value){
//     int result = -1;
//     for(int i = 127; i >= 0; i--){
//         if(s21_get_bit(value) == 1){
//             result = i;
//             break;
//         }
//     }
//     return result;
// }

// s21_big_decimal s21_big_decimal_add_help(s21_big_decimal big_decimal_1, s21_big_decimal big_decimal_2){
//     s21_big_decimal output = big_decimal_1;
//     s21_big_decimal temp = big_decimal_2;

//     while(!s21_big_equal_zero(temp)){
//         s21_big_decimal help_bits;
//         help_bits = s21_big_and_operation(output, temp);

//         //shift_big_decimal ne zabud' i voobshe nado chto-to reshat' s opredeleniem big_decimal i ego vspomogatel'nimi
//     }
// }

// int s21_big_equal_zero(s21_big_decimal big_decimal){
//     int first_four_bits = big_decimal[0] && big_decimal[1] && big_decimal[2] && big_decimal[3];
//     int last_four_bits = big_decimal[4] && big_decimal[5] && big_decimal[6] && big_decimal[7];
//     return (first_four_bits || last_four_bits);
// }

// s21_big_decimal s21_big_and_operation(s21_big_decimal big_decimal_1, s21_big_decimal big_decimal_2){
//     s21_big_decimal result = s21_big_clear_decimal(result);
//     for(int i = 0; i < 7; i++) result[i] = big_decimal_1[i] & big_decimal_2[i];

//     return result;
// }