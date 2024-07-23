#include "s21_decimal.h"



int main() {
  s21_decimal* value = s21_create_decimal();
  s21_set_sign(value, 1);
  s21_set_scale(value, 28);
 

  // s21_decimal value;
  // s21_set_sign(&value, 1);
  // s21_set_scale(&value, 3);

  // for(int i = 96; i < 128; i++){
  //   printf("%d ", s21_get_bit(value, i));
  // }

  // s21_decimal* value = s21_create_decimal();
  s21_pretty_print_bits(*value);
  printf("%d\n", s21_get_scale(*value));
  printf("%d\n", s21_get_sign(*value));
 
  return 0;
}



