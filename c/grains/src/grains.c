#include "grains.h"

__attribute__((pure)) u64 total(void) { return ~0ull; }
__attribute__((pure)) u64 square(const u8 i) {
  return (64 < i || i < 1) ? 0ull : 1ull << (i - 1);
}
