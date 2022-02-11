#ifndef VT_ALL_YOUR_BASE_H
#define VT_ALL_YOUR_BASE_H
/// copyright 2021 viraltaco_ <https://opensource.org/licenses/MIT>
#include <stddef.h> // size_t

enum { DIGITS_ARRAY_SIZE = 64, };
typedef signed short radix;
typedef signed char  digit;

__attribute__((nonnull))
size_t rebase(digit* num, radix in, radix out, size_t size);
#endif // VT_ALL_YOUR_BASE_H
