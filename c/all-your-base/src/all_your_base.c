#include <string.h> // memcpy
#include "all_your_base.h"

/**
 * @brief this function converts a number represented by
 * an array of digits in base `base` into a decimal number
 * and returns that number.
 *
 * @param first a pointer to the first element of the digit array
 * @param len the length of the array
 * @param base the base in which each digit is encoded
 *
 * @return The number in decimal or -1 if any digit was >= base or below 0
 *
 * The behavior is undefined if [first, first+len) is not a valid range.
 * The behavior is undefined if the number cannot be represented by a long.
 */
__attribute__((nonnull))
static long decimal(digit const* first, const size_t len, const radix base) {
  const digit* const last = first + len;
  long n = 0L;

  do {
    const digit x = *first++;
    n = n * base + x;

    if (0 > x || x >= base) {
      return -1;
    }
  } while (first != last);

  return n;
}

size_t rebase(digit* num, radix in, radix out, size_t size) {
  enum { kInvalidArgument = 0, };
  if (size < 1 || in < 2 || out < 2) {
    return kInvalidArgument;
  }

  digit renum[DIGITS_ARRAY_SIZE] = { 0 };
  digit* const end = &renum[DIGITS_ARRAY_SIZE - 1];

  long dec = decimal(num, size, in);
  for (size = 0; dec > 0; dec /= out)
    *(end - size++) = (digit) (dec % out);

  memcpy(num, &renum[DIGITS_ARRAY_SIZE - size], size);
  return size;
}
