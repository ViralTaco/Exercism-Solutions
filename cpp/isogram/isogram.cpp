#include "isogram.h" // std::string
#include <algorithm> // std::{ transform, remove_if, sort, unique }
#include <cctype>    // std::{ isalpha, tolower }

namespace isogram {
inline namespace string_utils {
static inline auto not_alpha(const unsigned char c) noexcept {
  return std::isalpha(c) == 0;
}

static inline auto lowercased(const unsigned char c) noexcept {
  return static_cast<unsigned char> (std::tolower(c));
}
} // inline namespace string_utils

auto is_isogram(std::string str) -> bool {
  const auto kBegin = str.begin();
  auto end = std::remove_if(kBegin, str.end(), not_alpha);
  std::transform(kBegin, end, kBegin, lowercased);
  std::sort(kBegin, end);
  return end == std::unique(kBegin, end);
}
} // namespace isogram
