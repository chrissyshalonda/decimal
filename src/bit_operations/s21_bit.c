#include "../s21_decimal.h"

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define BG_RED     "\033[41m"
#define BG_GREEN   "\033[42m"
#define BG_BLUE    "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_WHITE   "\033[47m"


int getRow(int bit_index) {
    return bit_index / 32;
}

int getCol(int bit_index) {
    return bit_index % 32;
}

int s21_get_bit(s21_decimal value, int bit_index) {
    return (value.bits[getRow(bit_index)] & (1 << getCol(bit_index))) != 0;
}


void s21_print_bits(s21_decimal value) {
    for(int i = 3; i >= 0; i--){
        printf("bit[%d]: ", i);
        for(int j = 31; j >= 0; j--)
            printf("%d", s21_get_bit(value, i * 32 + j));
        printf("\n");
    }
}


void s21_pretty_print_bits(s21_decimal value) {
    for(int i = 3; i >= 0; i--){
        printf(YELLOW"\n\n        %d"RESET, i * 32 + 31);
        for(int j = 0; j <= (i == 3 ? 58 : 59); j++) printf(" ");
        printf(YELLOW"%d\n"RESET, i * 32);
        printf("bit[%d]: ", i);
        for(int j = 31; j >= 0; j--){
            if(i == 3 && (j >=0 && j <= 15)) printf(RED);
            else if(i == 3 && (j >=16 && j <= 23)) printf(GREEN);
            else if(i == 3 && (j >=24 && j <= 30)) printf(BLUE);
            else if(i == 3 && j == 31) printf(MAGENTA);
            else printf(RESET);
            printf("%d ", s21_get_bit(value, i * 32 + j));
        }
        
    }
    printf("\n\n");
    printf(BG_WHITE"    "RESET": Биты от 0 до 95 целое число.\n");
    printf(BG_RED"    "RESET": Биты от 96 до 111, младшее слово, не используются и должны быть равны нулю.\n");
    printf(BG_GREEN"    "RESET": Биты с 112 по 119 должны содержать показатель степени от 0 до 28.\n");
    printf(BG_BLUE"    "RESET": Биты с 120 по 126 не используются и должны быть равны нулю.\n");
    printf(BG_MAGENTA"    "RESET": Бит 127 содержит знак; 0 означает положительный, а 1 означает отрицательный.\n\n\n");
}



int s21_set_bit(s21_decimal *value, int bit_index) {
    bool result = bit_index >= 0 && bit_index < 128;
    if(result)
        value->bits[getRow(bit_index)] |= (1 << getCol(bit_index));
    return !result;
}

int s21_reset_bit(s21_decimal *value, int bit_index) {
    bool result = bit_index >= 0 && bit_index < 128;
    if(result)
        value->bits[getRow(bit_index)] &= ~(1 << getCol(bit_index));
    return !result;
}

int s21_inverse_bit(s21_decimal *value, int bit_index) {
    bool result = bit_index >= 0 && bit_index < 128;
    if(result)
        value->bits[getRow(bit_index)] ^= (1 << getCol(bit_index));
    return !result;
}