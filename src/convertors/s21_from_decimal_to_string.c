
#include <stdio.h>
#include <string.h>

#include "../s21_decimal.h"

#define MAX_DIGITS 96  // Максимальное количество десятичных цифр

void add_strings(char *result, const char *num) {
  int carry = 0;
  for (int i = MAX_DIGITS - 1; i >= 0; i--) {
    int sum = (result[i] - '0') + (num[i] - '0') + carry;
    result[i] = (sum % 10) + '0';
    carry = sum / 10;
  }
}

void double_string(char *num) {
  int carry = 0;
  for (int i = MAX_DIGITS - 1; i >= 0; i--) {
    int digit = (num[i] - '0') * 2 + carry;
    num[i] = (digit % 10) + '0';
    carry = digit / 10;
  }
}

int s21_from_decimal_to_binary_string(s21_decimal value, char *binary) {
  // Переводим decimal в строку единиц и нулей

  if (s21_get_sign(value)) {
    s21_negate(value, &value);
    s21_set_sign(&value, 1);
  }

  char *ptr = binary;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 32; j++) {
      *ptr++ = (value.bits[i] & (1u << j)) ? '1' : '0';
    }
    // *ptr++ = '\n';
  }

  *ptr = '\0';

  // Разворачиваем строку, так как мы заполняли ее с младших битов
  int len = strlen(binary);
  for (int i = 0; i < len / 2; i++) {
    char temp = binary[i];
    binary[i] = binary[len - 1 - i];
    binary[len - 1 - i] = temp;
  }

  return s21_get_sign(value);
}

void s21_from_decimal_to_string(s21_decimal value, char *decimal) {
  char *binary = malloc(100);
  int sign = s21_from_decimal_to_binary_string(value, binary);
  int scale = s21_get_scale(value);

  char result[MAX_DIGITS + 1] = {0};
  char power[MAX_DIGITS + 1] = {0};
  memset(result, '0', MAX_DIGITS);
  memset(power, '0', MAX_DIGITS);
  power[MAX_DIGITS - 1] = '1';  // Начинаем с 2^0 = 1

  for (int i = strlen(binary) - 1; i >= 0; i--) {
    if (binary[i] == '1') {
      add_strings(result, power);
    }
    double_string(power);
  }

  // Удаляем ведущие нули
  int start = 0;
  while (start < MAX_DIGITS - 1 && result[start] == '0') {
    start++;
  }

  // Копируем результат в выходную строку
  int len = strlen(&result[start]);
  if (scale > 0 && scale < len) {
    strncpy(decimal, &result[start], len - scale);
    decimal[len - scale] = '.';
    strcpy(decimal + len - scale + 1, &result[start + len - scale]);
  } else if (scale >= len) {
    strcpy(decimal, "0.");
    for (int i = 0; i < scale - len; i++) {
      strcat(decimal, "0");
    }
    strcat(decimal, &result[start]);
  } else {
    strcpy(decimal, &result[start]);
  }

  if (sign) {
    char temp[MAX_DIGITS + 2];
    strcpy(temp, "-");
    strcat(temp, decimal);
    strcpy(decimal, temp);
  }

  // Отладочный вывод

  free(binary);
}