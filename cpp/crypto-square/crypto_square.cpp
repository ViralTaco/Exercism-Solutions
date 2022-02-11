/* copyright 2019 - 2021 viraltaco_ <https://opensource.org/licenses/MIT> */

#include "crypto_square.h"

#include <cctype>
#include <numeric>
#include <sstream> // std::stringstream

namespace crypto_square {
auto cipher::normalize(String cleartext) -> String {
  const auto notalnum = [] (unsigned char c) { return not std::isalnum(c); };
  // std::erase_if: https://en.cppreference.com/w/cpp/string/basic_string/erase2
  std::erase_if(cleartext, notalnum);
  return lowercased(cleartext);
}


auto cipher::rotate(Vector<String> const& square,
                    dimentions const& dim) -> Vector<String> {
  auto rotated = Vector<String>(dim.cols);
  
  for (int x{0}; x < dim.cols; ++x) {
    for (int y{0}; y < dim.rows; ++y)
        rotated[x] += square[y][x];
  }
  
  return rotated;
}

// ciphertext no spaces.
auto cipher::cipher_text() const -> String {
  if (cipher_square_.empty()) {
    return normalized_;
  } else {
    return std::accumulate(
      cipher_square_.begin(),
      cipher_square_.end(),
      String()
    );
  }
}

// cipher_square_ in one String separated with spaces
auto cipher::normalized_cipher_text() const -> String {
  if (cipher_square_.empty()) {
    return normalized_;
  } else {
    return std::accumulate(
      std::next(cipher_square_.begin()), // cipher[1]
      cipher_square_.end(),              // cipher[size]
      cipher_square_.front(),            // cipher[0]
      [](auto l, auto r) { return std::move(l) + " " + std::move(r); }
    );
  }
}

// cleartext_
auto cipher::normalize_plain_text() const noexcept -> String {
  return normalized_;
}

// cleartext_square_
auto cipher::plain_text_segments() const noexcept -> Vector<String> {
  return cleartext_square_;
}
} // namespace crypto_square
