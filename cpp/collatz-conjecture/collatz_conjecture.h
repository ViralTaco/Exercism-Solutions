#ifndef VT_COLLATZ_CONJECTURE_H
#define VT_COLLATZ_CONJECTURE_H
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>
#include <stdexcept>

namespace collatz_conjecture {

[[nodiscard]]
constexpr auto steps(signed n) -> signed {
  if (n <= 0) { throw std::domain_error("n must be bigger than 0"); }
  
  return [n, i=0] () mutable noexcept {
    for (; n != 1; ++i)
      n = (n & 0x1) ? (3 * n) + 1 // n is odd
                    : n >> 1;     // n /= 2
    return i;
  }(); // lambda is noexcept but no reason to make it a named function.
}
} // namespace collatz_conjecture

#endif // not defined COLLATZ_CONJECTURE_H
