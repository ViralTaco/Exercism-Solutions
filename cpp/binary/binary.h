// copyright 2021 viraltaco_ <https://opensource.org/licenses/MIT>
#ifndef VT_BINARY_H
#define VT_BINARY_H "4.1.1"

#include <string_view> // std::string_view
#include <climits>     // CHAR_BIT
#include <cstddef>     // std::size_t

namespace binary {
auto convert(const std::string_view bin) noexcept -> int {
  auto decimal = 0;
  for (const unsigned char c: bin) {
    if (c == '1') {
      decimal |= 1;
    } else if (c != '0') {
      return 0;
    }
    decimal <<= 1;
  }
  return decimal;
}

template <class CharT = char, std::size_t kSize>
consteval auto convert(CharT const(&bin)[kSize]) noexcept {
  static_assert(kSize > 1, "binary string empty.");
  static_assert(kSize < (sizeof (int) * CHAR_BIT),
                "binary string too long for int.");
  auto decimal = 0;
  for (const unsigned c: bin) {
    if (c == '1') {
      decimal |= 1;
    } else if (c != '0') {
      return (c == '\0') ? decimal >> 1 : 0;
    }
    decimal <<= 1;
  }
  return decimal;
}

} // namespace binary

#endif // VT_BINARY_H
