#include "s21_decimal.h"

int main() {
  s21_decimal value  = {1, 2, 3, 0};
  s21_set_scale(&value, 3);

  for(int i = 96; i < 128; i++){
    printf("%d ", s21_get_bit(value, i));
  }

  return 0;
}

