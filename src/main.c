#include "s21_decimal.h"

void bitwise_shift_memory(void* memory, size_t size, int shift) {
    unsigned char* ptr = (unsigned char*)memory;

    for (size_t i = 0; i < size; i++) {
        ptr[i] = ptr[i] << shift; // Побитовый сдвиг каждого байта на заданное количество позиций
    }
}

int main() {
  s21_decimal* value = s21_create_decimal();
  
  s21_set_sign(value, 1);
  s21_set_scale(value, 28);
 
  s21_pretty_print_bits(*value);
 
  s21_free_decimal(value);
 
  return 0;
}



