#include "atbash_cipher.h" // std::{ string, (u8)string_view }
#include <array>           // std::array

namespace atbash_cipher {
inline namespace  {
constexpr auto kSubstitutionSet = []() noexcept {
  using std::string_view_literals::operator""sv;
  constexpr auto block = u8"zyxwvutsrqponmlkjihgfedcba"sv;
  constexpr auto window = block.size();

  auto map = std::array<char8_t, 256u>();
  map.fill(u8'\0');
  for (auto i = 0u; i < window; ++i) {
    map[u8'a' + i] = map[u8'A' + i] = block[i];
  }
  for (char8_t i = u8'0'; i <= u8'9'; ++i) {
    map[i] = i;
  }
  return map;
}();
} // inline namespace atbash_cipher::(unique)

auto encode(const std::string_view plaintext) -> std::string {
  auto ciphertext = std::string();
  for (int i = 0; const char8_t key: plaintext) {
    if (const auto cipher = kSubstitutionSet[key]; cipher) {
      if (i and i % 5 == 0) { ciphertext += ' '; }
      ciphertext += static_cast<char>(cipher);
      (void) ++i;
    }
  }
  return ciphertext;
}

auto decode(const std::string_view ciphertext) -> std::string {
  auto cleartext = std::string();
  for (const char8_t key: ciphertext) {
    if (const auto clear = kSubstitutionSet[key]; clear) {
      cleartext += static_cast<char>(clear);
    }
  }
  return cleartext;
}
} // namespace atbash_cipher
