#include "s21_decimal.h"

void bitwise_shift_memory(void* memory, size_t size, int shift) {
    unsigned char* ptr = (unsigned char*)memory;

    for (size_t i = 0; i < size; i++) {
        ptr[i] = ptr[i] << shift; // Побитовый сдвиг каждого байта на заданное количество позиций
    }
}

int main() {
//   s21_decimal* value = s21_create_decimal();
//   s21_set_sign(value, 1);
//   s21_set_scale(value, 28);
 
//  s21_set_bit(value, 31);

//   s21_pretty_print_bits(*value);
//   value->bits[0] = value->bits[0] >> 1;
//   s21_pretty_print_bits(*value);
//   s21_free_decimal(value);

  s21_big_decimal* value = s21_big_create_decimal();
  
  s21_big_set_sign(value, 1);
  s21_big_set_scale(value, 28);
 
  s21_big_pretty_print_bits(*value);
 
  s21_big_free_decimal(value);
 
  return 0;
}



