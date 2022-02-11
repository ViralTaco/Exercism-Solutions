#include "pangram.h" // std::string_view
#include <bitset>    // std::bitset

namespace pangram {
inline namespace char_utils {
constexpr auto upper = [] (char c) noexcept { return 'A' <= c and c <= 'Z'; };
constexpr auto lower = [] (char c) noexcept { return 'a' <= c and c <= 'z'; };
constexpr auto alpha = [] (char c) noexcept { return lower(c) or  upper(c); };
/// P: c is an ascii letter.
/// R: The lexographic index (starting from 0 for 'a', ignoring case)
[[nodiscard]] constexpr auto index_for(const char c) noexcept {
  return c - (upper(c) ? 'A' : 'a');
}
} // inline namespace char_utils

auto is_pangram(const std::string_view str) -> bool {
  static constexpr auto kCharsetSize = 26u;
  if (str.size() < kCharsetSize) {
    return false;
  }
  auto seen = std::bitset<kCharsetSize>();
  for (const auto c: str) {
    if (alpha(c)) { seen[index_for(c)] = true; }
  }
  return seen.all();
}
} // namespace pangram
