#include "../s21_decimal.h"

void s21_print_bits(s21_decimal value) {
    for (int i = 0; i < 4; i++) {
        printf("%d", value.bits[i]);
    }

}