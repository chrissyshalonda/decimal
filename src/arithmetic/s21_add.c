#include "../s21_decimal.h"

int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal* result) {
  // TODO: s21_add
  return 0;
}

int s21_base_add(const s21_decimal* value_1, const s21_decimal* value_2,
                 s21_decimal* result) {
  bool next = 0;
  bool currect = 0;
  for (int i = 0; i < 96; i++) {
    bool a = s21_get_bit(*value_1, i);
    bool b = s21_get_bit(*value_2, i);
    currect = (a ^ b) ^ next;
    next = (a & b) | (a & next) | (b & next) | (a & b & next);
    currect ? s21_set_bit(result, i) : s21_reset_bit(result, i);
  }
}

//-----------------------------------BIG_DECIMALS-------------------------------------------

int s21_big_base_add(const s21_big_decimal* value_1,
                     const s21_big_decimal* value_2, s21_big_decimal* result) {
  bool next = 0;
  bool currect = 0;
  for (int i = 0; i < 224; i++) {
    bool a = s21_big_get_bit(*value_1, i);
    bool b = s21_big_get_bit(*value_2, i);
    currect = (a ^ b) ^ next;
    next = (a & b) | (a & next) | (b & next) | (a & b & next);
    currect ? s21_big_set_bit(result, i) : s21_big_reset_bit(result, i);
  }
}