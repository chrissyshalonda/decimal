#include "../s21_decimal.h"

s21_decimal s21_init(char *str) {
  s21_decimal value = {{0, 0, 0, 0}};
  int sign = 0;
  int scale = 0;
  int index = 0;

  // Проверяем знак
  if (str[0] == '-') {
    sign = 1;
    index++;
  }

  // Преобразуем строку в число
  for (; str[index] != '\0'; index++) {
    if (str[index] >= '0' && str[index] <= '9') {
      int digit = str[index] - '0';

      // Сдвигаем текущее значение влево на 3 бита (умножение на 8)
      int carry = 0;
      for (int i = 2; i >= 0; i--) {
        int temp = value.bits[i];
        value.bits[i] = (temp << 3) | carry;
        carry = temp >> 29;
      }

      // Сдвигаем текущее значение влево на 1 бит (умножение на 2)
      carry = 0;
      for (int i = 2; i >= 0; i--) {
        int temp = value.bits[i];
        value.bits[i] = (temp << 1) | carry;
        carry = temp >> 31;
      }

      // Добавляем новую цифру
      carry = digit;
      for (int i = 0; i < 3 && carry; i++) {
        int temp = value.bits[i] + carry;
        value.bits[i] = temp;
        carry = temp < value.bits[i];
      }
    } else if (str[index] == '.') {
      // Начинаем считать масштаб после десятичной точки
      scale = strlen(str + index + 1);
      break;
    }
  }

  // Если была десятичная точка, продолжаем преобразование
  if (scale > 0) {
    index++;  // Пропускаем точку
    for (; str[index] != '\0'; index++) {
      if (str[index] >= '0' && str[index] <= '9') {
        int digit = str[index] - '0';

        // Сдвигаем текущее значение влево на 3 бита (умножение на 8)
        int carry = 0;
        for (int i = 2; i >= 0; i--) {
          int temp = value.bits[i];
          value.bits[i] = (temp << 3) | carry;
          carry = temp >> 29;
        }

        // Сдвигаем текущее значение влево на 1 бит (умножение на 2)
        carry = 0;
        for (int i = 2; i >= 0; i--) {
          int temp = value.bits[i];
          value.bits[i] = (temp << 1) | carry;
          carry = temp >> 31;
        }

        // Добавляем новую цифру
        carry = digit;
        for (int i = 0; i < 3 && carry; i++) {
          int temp = value.bits[i] + carry;
          value.bits[i] = temp;
          carry = temp < value.bits[i];
        }
      }
    }
  }

  // Устанавливаем знак и масштаб
  s21_set_sign(&value, sign);
  if (s21_get_sign(value)) s21_negate(value, &value);
  s21_set_sign(&value, sign);
  s21_set_scale(&value, scale);

  return value;
}