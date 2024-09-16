#include "../s21_decimal.h"

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define BG_RED "\033[41m"
#define BG_GREEN "\033[42m"
#define BG_BLUE "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_WHITE "\033[47m"

int getRow(int bit_index) { return bit_index / 32; }

int getCol(int bit_index) { return bit_index % 32; } 

int s21_get_bit(s21_decimal value, int bit_index) {
  return (value.bits[getRow(bit_index)] & (1 << getCol(bit_index))) != 0;
}

void s21_print_bits(s21_decimal value) {
  for (int i = 3; i >= 0; i--) {
    printf("bit[%d]: ", i);
    for (int j = 31; j >= 0; j--) printf("%d", s21_get_bit(value, i * 32 + j));
    printf("\n");
  }
}

void s21_pretty_print_bits(s21_decimal value, int index) {
  char *number = malloc(200);
  s21_from_decimal_to_string(value, number, index);
  printf("\nЗначение:" YELLOW " %s" RESET "\n", number);
  free(number);

  for (int i = 3; i >= 0; i--) {
    printf(YELLOW "\n\n        %d" RESET, i * 32 + 31);
    for (int j = 0; j <= (i == 3 ? 58 : 59); j++) printf(" ");
    printf(YELLOW "%d\n" RESET, i * 32);
    printf("bit[%d]: ", i);
    for (int j = 31; j >= 0; j--) {
      if (i == 3 && (j >= 0 && j <= 15))
        printf(RED);
      else if (i == 3 && (j >= 16 && j <= 23))
        printf(GREEN);
      else if (i == 3 && (j >= 24 && j <= 30))
        printf(BLUE);
      else if (i == 3 && j == 31)
        printf(MAGENTA);
      else
        printf(RESET);
      printf("%d ", s21_get_bit(value, i * 32 + j));
    }
  }
  printf("\n\n");
  printf(BG_WHITE "    " RESET ": Биты от 0 до 95 целое число.\n");
  printf(BG_RED "    " RESET
                ": Биты от 96 до 111, младшее слово, не используются и должны "
                "быть равны нулю.\n");
  printf(
      BG_GREEN
      "    " RESET
      ": Биты с 112 по 119 должны содержать показатель степени от 0 до 28.\n");
  printf(BG_BLUE
         "    " RESET
         ": Биты с 120 по 126 не используются и должны быть равны нулю.\n");
  printf(BG_MAGENTA "    " RESET
                    ": Бит 127 содержит знак; 0 означает положительный, а 1 "
                    "означает отрицательный.\n\n\n");
}

int s21_set_bit(s21_decimal *value, int bit_index) { 
  bool result = bit_index >= 0 && bit_index < 128;
  if (result) value->bits[getRow(bit_index)] |= (1 << getCol(bit_index));
  return result;
}

int s21_reset_bit(s21_decimal *value, int bit_index) {
  bool result = bit_index >= 0 && bit_index < 128;
  if (result) value->bits[getRow(bit_index)] &= ~(1 << getCol(bit_index));
  return !result;
}

int s21_inverse_bit(s21_decimal *value, int bit_index) {
  bool result = bit_index >= 0 && bit_index < 128;
  if (result) value->bits[getRow(bit_index)] ^= (1 << getCol(bit_index));
  return !result;
}

#include <string.h>
#define MAX_DIGITS 111  // Максимальное количество десятичных цифр

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

int s21_from_decimal_to_binary_string(s21_decimal value, char *binary, int index) {
  // Переводим decimal в строку единиц и нулей

  if (s21_get_sign(value)) {
    s21_negate(value, &value);
    s21_set_sign(&value, 1);
  }

  char *ptr = binary;
  for (int i = 0; i < index; i++) {
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

void s21_from_decimal_to_string(s21_decimal value, char *decimal, int index) {
  char *binary = malloc(200);
  int sign = s21_from_decimal_to_binary_string(value, binary, index);
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
    // for (int i = 0; i < scale - len; i++) {
    //   strcat(decimal, "0");
    // }
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