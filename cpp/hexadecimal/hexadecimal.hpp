#ifndef VT_HEXADECIMAL_H
#define VT_HEXADECIMAL_H "3.1.0"
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>
#include <tuple>
#include <string_view>

namespace hexadecimal {
constexpr auto convert(const std::string_view hex) noexcept {
  constexpr auto decimal = [] (auto c) -> std::tuple<bool, long> {
    if ('0' <= c and c <= '9') return { true, c - '0' };
    if ('a' <= c and c <= 'f') return { true, c - 'a' + 10 };
    if ('A' <= c and c <= 'F') return { true, c - 'A' + 10 };
    return { false, c == '\0' };
  };

  auto sum = 0L;
  for (const auto c: hex) {
    if (const auto[isnumber, value] = decimal(c); isnumber)
      [[likely]] sum = (sum << 4) | value;
    else
      return value ? sum : 0L;
  }
  return sum;
}
} // namespace hexadecimal
#endif // VT_HEXADECIMAL_H
