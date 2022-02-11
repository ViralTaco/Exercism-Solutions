#include "acronym.h" // std::{ string, string_view }
#include <cctype>    // std::{ toupper, isalpha }
#include <numeric>   // std::accumulate

namespace acronym {
inline namespace string_utils {
// If a cctype library function is called with a character that cannot
// be represented by an unsigned char, or EOF (typically 0)
// then the behaviour is UNDEFINED. (We don't want that)
// This namespace aims to fix that **bug in the language.**
using u8 = unsigned char;

template <class CharT>
static inline auto uppercased(const CharT letter) noexcept {
  return static_cast<CharT> (std::toupper(static_cast<u8> (letter)));
}
static inline auto is_word_boundary(const u8 l, const u8 r) noexcept {
  return std::isalpha(l) == 0 and std::isalpha(r) != 0;
}
} // inline namespace string_utils

auto acronym(std::string_view line) -> std::string {
  const auto on_boundary = [last = '\0'] (std::string acc, auto next) mutable {
    if (is_word_boundary(last, next)) { acc.push_back(uppercased(next)); }
    last = next;
    return acc;
  };

  return std::accumulate(line.begin(), line.end(), std::string(), on_boundary);
}
} // namespace acronym
