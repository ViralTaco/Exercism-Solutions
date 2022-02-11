#include "binary.h" /* #def INVALID */

int convert(char const* binary) {
  int decimal = 0;
  for (char c = binary[0]; c != '\0'; c = *(++binary)) {
    decimal <<= 1;
    if      (c == '1') decimal |= 1;
    else if (c != '0') return INVALID;
  }
  return decimal;
}
