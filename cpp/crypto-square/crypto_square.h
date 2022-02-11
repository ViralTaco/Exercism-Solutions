/* copyright 2019 - 2021 viraltaco_ <https://opensource.org/licenses/MIT> */
#ifndef VT_CRYPTO_SQUARE_H
#define VT_CRYPTO_SQUARE_H "2.0.0"
#define EXERCISM_RUN_ALL_TESTS 1

#include <vector>    // std::vector
#include <string>    // std::{ string, erase_if }
#include <utility>   // std::move
#include <cmath>     // std::sqrt
#include <cctype>    // std::tolower
#include <algorithm> // std::transform
#include <iterator>  // std::back_insert_iterator
#include <sstream>   // std::stringstream
#include <iomanip>   // std::setw

namespace crypto_square {
inline namespace detail {

template <class In, class Out>
static inline auto lowercased(In first, In last, Out result) -> Out {
  static const auto lowered = [](unsigned char c) { return std::tolower(c); };
  return std::transform(first, last, result, lowered);
}
/**
 * This function is equivalent to calling {@see std::tolower()} on
 * every character of the String.
 * @param s the std::String to be transformed
 * @return the lowercased std::String
 */
static inline auto lowercased(std::string s) {
  lowercased(s.begin(), s.end(), s.begin());
  return s;
}

static inline auto slice(std::string const& s,
                         const std::size_t length) -> std::vector<std::string> {
  const auto size = s.size();
  if (size == 0 or length == 0) {
    return { };
  } else if (size < length) {
    return { s };
  } else [[likely]] {
    const auto slicecount = (size / length) + (size % length > 0);
    auto slices = std::vector<std::string>(slicecount, "");
    for (auto i = 0u; i < slicecount; ++i) {
      slices[i] = s.substr((i * length), length);
    }
    return slices;
  }
}

} // inline namespace detail


struct dimentions {
public:
  int rows = 0;
  int cols = 0;
  int size = 0;
  
  explicit dimentions(const int size) {
    if (size != 0) {
      this->rows = static_cast<int> (std::sqrt(size));
      this->cols = (size % rows == 0) ? rows : rows + 1;
      this->size = rows * cols;
    }
  }
  
  auto operator ==(const int rhs) const noexcept { return size == rhs; }
};

class cipher {
public:
  using String = std::string;
  template <class T> using Vector = std::vector<T>;
  
private:
  String cleartext_;
  String normalized_;
  
  dimentions dimentions_;
  
  Vector<String> cleartext_square_{};
  Vector<String> cipher_square_{};

public:
  explicit cipher(String text)
    : cleartext_{ std::move(text) }
    , normalized_{ normalize(cleartext_) }
    , dimentions_{ dimentions(normalized_.length()) }
    , cleartext_square_{ slice(normalized_, dimentions_.cols) }
    , cipher_square_{ rotate(cleartext_square_, dimentions_) }
  {}

protected: // class methods
  static auto normalize(String cleartext) -> String;
  static auto rotate(Vector<String> const& square,
                     dimentions const& dim) -> Vector<String>;
  
public: // getters
  /// ciphertext no spaces
  [[nodiscard]] auto cipher_text() const -> String;
  /// cipher_square_ in one String separated with spaces
  [[nodiscard]] auto normalized_cipher_text() const -> String;
  /// cleartext_
  [[nodiscard]] auto normalize_plain_text() const noexcept -> String;
  /// cleartext_square_
  [[nodiscard]] auto plain_text_segments() const noexcept -> Vector<String>;
};

} // namespace crypto_square

#endif
