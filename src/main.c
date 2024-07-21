#include "s21_decimal.h"



int main() {
    s21_decimal* value = s21_create_decimal();
    s21_print_bits(*value);
    return 0;
}