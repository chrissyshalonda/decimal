#include "../s21_decimal.h"

void s21_left_shift_decimal(s21_decimal src, s21_decimal *dst, int shift) {
  // Копируем исходное значение в dst
  *dst = src;

  // Если сдвиг отрицательный или равен 0, ничего не делаем
  if (shift <= 0) return;

  // Если сдвиг больше или равен 96 (3 * 32), результат будет 0
  if (shift >= 96) {
    dst->bits[0] = dst->bits[1] = dst->bits[2] = 0;
    return;
  }

  // Выполняем сдвиг
  int whole_shifts = shift / 32;
  int remaining_shift = shift % 32;

  // Сдвигаем целые 32-битные части
  for (int i = 2; i >= whole_shifts; i--) {
    dst->bits[i] = dst->bits[i - whole_shifts];
  }
  for (int i = 0; i < whole_shifts; i++) {
    dst->bits[i] = 0;
  }

  // Выполняем оставшийся сдвиг
  if (remaining_shift > 0) {
    unsigned int carry = 0;
    for (int i = whole_shifts; i <= 2; i++) {
      unsigned int new_carry = dst->bits[i] >> (32 - remaining_shift);
      dst->bits[i] = (dst->bits[i] << remaining_shift) | carry;
      carry = new_carry;
    }
  }

  // Сохраняем знак и экспоненту
  dst->bits[3] = src.bits[3];
}

//----------------------------------BIG_DECIMAL-----------------------------------

void s21_big_left_shift_decimal(s21_big_decimal src, s21_big_decimal *dst,
                                int shift) {
  // Копируем исходное значение в dst
  *dst = src;

  // Если сдвиг отрицательный или равен 0, ничего не делаем
  if (shift <= 0) return;

  // Если сдвиг больше или равен 96 (3 * 32), результат будет 0
  if (shift >= 224) {
    dst->bits[0] = dst->bits[1] = dst->bits[2] = dst->bits[3] = dst->bits[4] =
        dst->bits[5] = dst->bits[6] = 0;
    return;
  }

  // Выполняем сдвиг
  int whole_shifts = shift / 32;
  int remaining_shift = shift % 32;

  // Сдвигаем целые 32-битные части
  for (int i = 6; i >= whole_shifts; i--) {
    dst->bits[i] = dst->bits[i - whole_shifts];
  }
  for (int i = 0; i < whole_shifts; i++) {
    dst->bits[i] = 0;
  }

  // Выполняем оставшийся сдвиг
  if (remaining_shift > 0) {
    unsigned int carry = 0;
    for (int i = whole_shifts; i <= 7; i++) {
      unsigned int new_carry = dst->bits[i] >> (32 - remaining_shift);
      dst->bits[i] = (dst->bits[i] << remaining_shift) | carry;
      carry = new_carry;
    }
  }

  // Сохраняем знак и экспоненту
  dst->bits[7] = src.bits[7];
}