#include "../s21_decimal.h"

int s21_get_scale(s21_decimal value){
    s21_decimal result = value;
    s21_set_sign(&result,0);
    
    return result.bits[3] >> 16;

}

int s21_set_scale(s21_decimal *value, int scale){
    bool result = scale >= 0 && scale <= 28;
    if (result){
        int sign = s21_get_bit(*value, 127);
        value->bits[3] = scale;
        value->bits[3] = value->bits[3] << 16;
        s21_set_sign(value, sign);
    }
    return !result;
}

