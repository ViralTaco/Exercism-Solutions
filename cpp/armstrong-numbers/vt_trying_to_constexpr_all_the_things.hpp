#ifndef VT_ARMSTRONG_NUMBERS_H
// ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
// ┃ armstrong_numbers.h:                                 ┃
// ┃ Copyright (c) 2020 viraltaco_                        ┃
// ┃ SPDX-License-Identifier: MIT                         ┃
// ┃ <http://www.opensource.org/licenses/MIT>             ┃
// ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
#define VT_ARMSTRONG_NUMBERS_H

#include <cstddef> // std::size_t

#include <limits>   // std::numeric_limits
#include <iterator> // std::begin, std::end

namespace viraltaco_ {
// log10(INT64_MAX) + 1 = 19.9649;
// 9223372036854775807 <- 19 chars + nil char = 20
static constexpr auto kMaxLen = std::numeric_limits<int>::digits10 + 1;

template <std::size_t len> static constexpr auto clear_buf {
  [] (auto (&buf)[len]) noexcept {
    for (auto& c: buf) { c = 0; }
  }
};

/// Inspired by the STL implementation of std::find
static constexpr auto first_not_of {
  [] (auto first, auto last, auto pred) noexcept -> decltype (first) {
    for (; first != last; ++first) {
      if (not pred(*first)) {
        break; // Out of the loop.
      }
    }
    return first;
  }
};

template <std::size_t len> static constexpr auto explode {
  [] (auto num, auto (&into)[len]) noexcept {
    clear_buf<len>(into);
    auto beg = std::rbegin(into);
    const auto end = std::crend(into);
    for (; beg != end and num != 0; ++beg) {
      *beg += num % 10;
      num /= 10;
    }
  }
};

} namespace vt = viraltaco_;

namespace armstrong_numbers {

[[nodiscard]] constexpr auto is_armstrong_number(const int n) noexcept {
  int buffer[vt::kMaxLen]{};
  vt::explode<vt::kMaxLen>(/* number */ n, /* into */ buffer);
  
  const auto end = std::end(buffer);
  auto begin = vt::first_not_of(
    std::begin(buffer), std::end(buffer), // Source
    [] (auto c) { return c == '0'; }      // Predicate
  );
  const auto len = std::distance(begin, end) - 1;
  auto total = 0;
  for (; begin != end; ++begin) {
    total += pow(*begin, len);
  }
  
  return total == n;
}
}  // namespace armstrong_numbers

#endif // VT_ARMSTRONG_NUMBERS_H
