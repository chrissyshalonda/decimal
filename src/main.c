#include "s21_decimal.h"

int main() {
  s21_decimal value  = {1, 2, 3, 513};

  s21_set_scale(&value, 13);
  
  printf("%d", s21_get_scale(value));
  return 0;
}