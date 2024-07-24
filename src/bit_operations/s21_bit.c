#include "../s21_decimal.h"

int s21_get_row(int bit_index) { return bit_index / 32; }

int s21_get_col(int bit_index) { return bit_index % 32; }

int s21_get_bit(s21_decimal value, int bit_index) {
  return (value.bits[s21_get_row(bit_index)] & (1 << s21_get_col(bit_index))) !=
         0;
}

void s21_print_bits(s21_decimal value) {
  for (int i = 3; i >= 0; i--) {
    printf("bit[%d]: ", i);
    for (int j = 31; j >= 0; j--) printf("%d", s21_get_bit(value, i * 32 + j));
    printf("\n");
  }
}

void s21_pretty_print_bits(s21_decimal value) {
  printf("\nЗнак: ");
  printf(s21_get_sign(value) ? "+\n" : "-\n");
  printf("Степень: %d\n", s21_get_scale(value));
  // printf("Младшее слово: %d\n", s21_get_mantissa(value));

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
  if (result)
    value->bits[s21_get_row(bit_index)] |= (1 << s21_get_col(bit_index));
  return !result;
}

int s21_reset_bit(s21_decimal *value, int bit_index) {
  bool result = bit_index >= 0 && bit_index < 128;
  if (result)
    value->bits[s21_get_row(bit_index)] &= ~(1 << s21_get_col(bit_index));
  return !result;
}

int s21_inverse_bit(s21_decimal *value, int bit_index) {
  bool result = bit_index >= 0 && bit_index < 128;
  if (result)
    value->bits[s21_get_row(bit_index)] ^= (1 << s21_get_col(bit_index));
  return !result;
}

//-----------------------------------BIG_DECIMALS-------------------------------------------

int s21_big_set_bit(s21_big_decimal *value, int bit_index) {
  bool result = bit_index >= 0 && bit_index < 256;
  if (result)
    value->bits[s21_get_row(bit_index)] |= (1 << s21_get_col(bit_index));
  return !result;
}

int s21_big_reset_bit(s21_big_decimal *value, int bit_index) {
  bool result = bit_index >= 0 && bit_index < 256;
  if (result)
    value->bits[s21_get_row(bit_index)] &= ~(1 << s21_get_col(bit_index));
  return !result;
}

int s21_big_inverse_bit(s21_big_decimal *value, int bit_index) {
  bool result = bit_index >= 0 && bit_index < 256;
  if (result)
    value->bits[s21_get_row(bit_index)] ^= (1 << s21_get_col(bit_index));
  return !result;
}

int s21_big_get_bit(s21_big_decimal value, int bit_index) {
  return (value.bits[s21_get_row(bit_index)] & (1 << s21_get_col(bit_index))) !=
         0;
}

void s21_big_print_bits(s21_big_decimal value) {
  for (int i = 7; i >= 0; i--) {
    printf("bit[%d]: ", i);
    for (int j = 31; j >= 0; j--)
      printf("%d", s21_big_get_bit(value, i * 32 + j));
    printf("\n");
  }
}

void s21_big_pretty_print_bits(s21_big_decimal value) {
  printf("\nЗнак: ");
  printf(s21_big_get_sign(value) ? "+\n" : "-\n");
  printf("Степень: %d\n", s21_big_get_scale(value));

  for (int i = 7; i >= 0; i--) {
    printf(YELLOW "\n\n        %d" RESET, i * 32 + 31);
    for (int j = 0; j <= (i >= 3 ? 58 : 59); j++) printf(" ");
    printf(YELLOW "%d\n" RESET, i * 32);
    printf("bit[%d]: ", i);
    for (int j = 31; j >= 0; j--) {
      if (i == 7 && (j >= 0 && j <= 15))
        printf(RED);
      else if (i == 7 && (j >= 16 && j <= 23))
        printf(GREEN);
      else if (i == 7 && (j >= 24 && j <= 30))
        printf(BLUE);
      else if (i == 7 && j == 31)
        printf(MAGENTA);
      else
        printf(RESET);
      printf("%d ", s21_big_get_bit(value, i * 32 + j));
    }
  }
  printf("\n\n");
  printf(BG_WHITE "    " RESET ": Биты от 0 до 223 целое число.\n");
  printf(BG_RED "    " RESET
                ": Биты от 224 до 239, младшее слово, не используются и должны "
                "быть равны нулю.\n");
  printf(
      BG_GREEN
      "    " RESET
      ": Биты с 240 по 247 должны содержать показатель степени от 0 до 68.\n");
  printf(BG_BLUE
         "    " RESET
         ": Биты с 248 по 254 не используются и должны быть равны нулю.\n");
  printf(BG_MAGENTA "    " RESET
                    ": Бит 255 содержит знак; 0 означает положительный, а 1 "
                    "означает отрицательный.\n\n\n");
}