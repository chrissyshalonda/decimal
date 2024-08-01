#include "s21_decimal.h"

void bitwise_shift_memory(void* memory, size_t size, int shift) {
    unsigned char* ptr = (unsigned char*)memory;

    for (size_t i = 0; i < size; i++) {
        ptr[i] = ptr[i] << shift; // Побитовый сдвиг каждого байта на заданное количество позиций
    }
}

int main() {
  s21_decimal value = {0, 0, 0, 0};
  s21_decimal first = {1, 0, 1, 0}; 
  s21_decimal second ={4, 0, 2, 0};

  s21_mul(first, second, &value);

  s21_pretty_print_bits(value);
  return 0;
}



