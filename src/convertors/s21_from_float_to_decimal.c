#include <math.h>

#include "../another/s21_another.h"
#include "../s21_decimal.h"

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  int code = 0;

  if (!dst) {
    code = 1;
  } else if (src == 0) {
    if (signbit(src)) {
      s21_set_sign(dst, 1);
    }
  } else {
    s21_decimal result = s21_clear_decimal();

    char float_c[100];
    sprintf(float_c, "%.6E", fabsf(src));

    int scale = 0;
    char *ptr = float_c;

    while (*ptr) {
      if (*ptr == 'E') {
        ptr++;
        scale = strtol(ptr, NULL, 10);
        break;
      }
      ptr++;
    }

    if (scale <= -23) {
      int float_p = scale + 28;
      sprintf(float_c, "%.*E", float_p, fabsf(src));
    }

    result = s21_ftd_helper(float_c);

    if (signbit(src)) {
      s21_set_sign(&result, 1);
    }

    *dst = result;
  }
  return code;
}

s21_decimal s21_ftd_helper(char *float_c) {
  int counter = 6;
  s21_decimal result = s21_clear_decimal();

  char *ptr = float_c;
  int scale = 0;

  while (*ptr) {
    if (*ptr == 'E') {
      ptr++;
      scale = strtol(ptr, NULL, 10);
      break;
    }
    ptr++;
  }

  ptr = float_c;

  while (*ptr) {
    if (*ptr == '.') {
      ptr++;
      continue;
    } else if (*ptr >= '0' && *ptr <= '9') {
      s21_decimal tmp = s21_clear_decimal();
      s21_mul(s21_get_switch(*ptr), scale_table[counter], &tmp);
      s21_add(result, tmp, &result);
      counter--;
      ptr++;
    } else {
      break;
    }
  }

  scale = scale - 6;

  if (scale > 0) {
    s21_mul(result, scale_table[scale], &result);
  } else if (scale < 0) {
    if (scale < -28) {
      s21_div(result, scale_table[28], &result);
      scale += 28;
    }
    s21_div(result, scale_table[-scale], &result);
  }

  return result;
}

s21_decimal s21_get_switch(char c) {
  s21_decimal result;
  switch (c) {
    case '0':
      result = s21_clear_decimal();
      break;
    case '1':
      result = scale_table[0];
      break;
    case '2':
      s21_from_int_to_decimal(2, &result);
      break;
    case '3':
      s21_from_int_to_decimal(3, &result);
      break;
    case '4':
      s21_from_int_to_decimal(4, &result);
      break;
    case '5':
      s21_from_int_to_decimal(5, &result);
      break;
    case '6':
      s21_from_int_to_decimal(6, &result);
      break;
    case '7':
      s21_from_int_to_decimal(7, &result);
      break;
    case '8':
      s21_from_int_to_decimal(8, &result);
      break;
    case '9':
      s21_from_int_to_decimal(9, &result);
      break;
  }

  return result;
}