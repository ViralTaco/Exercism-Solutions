#ifndef VT_TRIANGLE_H
// ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
// ┃ triangle.h:                                          ┃
// ┃ Copyright (c) 2020 viraltaco_                        ┃
// ┃ SPDX-License-Identifier: MIT                         ┃
// ┃ <http://www.opensource.org/licenses/MIT>             ┃
// ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
#define VT_TRIANGLE_H "2.1.0"

#include <stdexcept>

namespace triangle {
enum struct flavor {
  equilateral = 0,
  isosceles   = 1,
  scalene     = 2,
};

[[maybe_unused]] static constexpr auto degenerate {
  [] (const auto a, const auto b, const auto c) noexcept {
    return (a + b <= c) or (b + c <= a) or (a + c <= b);
  }
};

[[maybe_unused]] static constexpr auto invalid {
  [](const auto a, const auto b, const auto c) noexcept {
    return a <= 0 or b <= 0 or c <= 0;
  }
};

[[maybe_unused]] static constexpr auto kind {
  [] (const auto a, const auto b, const auto c) noexcept (false) {
    if (degenerate(a, b, c)) {
      throw std::domain_error("Degenerate triangle or not a triangle.");
    } else if (invalid(a, b, c)) {
      throw std::domain_error("A triangle must have sides with length > 0.");
    } else if (a == b and b == c) {
      return flavor::equilateral;
    } else if (a == b or a == c or b == c) {
      return flavor::isosceles;
    } else {
      return flavor::scalene;
    }
  }
};

} // namespace triangle

#endif // VT_TRIANGLE_H (header guard)
