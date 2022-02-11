#ifndef VT_LUHN_H
#define VT_LUHN_H
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>
#include <string_view>

namespace luhn {
constexpr auto valid(const std::string_view sin) noexcept -> bool {
  return sin.length() > 1 and [&] {
    const auto kEnd = sin.crend();
    auto pos = 0;
    auto sum = 0;
    for (auto it = sin.rbegin(); it != kEnd; ++it) {
      switch (const auto c = *it ^ '0') {
      case (' ' ^ '0'):
        break;
      case 0: case 1: case 2: case 3: case 4:
        sum += (1 & pos++) ? c + c : c;
        break;
      case 5: case 6: case 7: case 8: case 9:
        sum += (1 & pos++) ? c + c - 9 : c;
        break;
      default:
        // Neither a space, nor a digit: invalid.
        return false;
      }
    }
    return (sum == 0) ? pos > 1 : sum % 10 == 0;
  }();
}
} // namespace luhn

#endif
