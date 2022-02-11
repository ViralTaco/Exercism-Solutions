#pragma once
#include <string_view> // std::string_view
#include <algorithm>   // std::find
#include <array>       // std::array
#include <map>         // std::map

namespace nucleotide_count {
struct nucleobase {
  enum { adenine = 'A', cytosine = 'C', guanine = 'G', thymine = 'T' };
  static constexpr std::array all { adenine, cytosine, guanine, thymine };
  static constexpr auto exists = [] (auto x) {
    return all.end() != std::find(all.begin(), all.end(), x);
  };
};

class counter {
public:
  using key_type = char;
  using size_type = signed;
  using value_type = std::map<key_type, size_type>;
  
  explicit counter(std::string_view dna_str);
  /*discardable*/ auto count(key_type id) const -> size_type;
  [[nodiscard]] auto nucleotide_counts() const -> value_type;

private:
  value_type bases_;
  static auto throw_if_not(bool cond) -> void;
};
} // namespace nucleotide_count
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>
