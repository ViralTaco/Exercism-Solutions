#include "nucleotide_count.h" // std::{ all_of, for_each, string_view }
#include <stdexcept>          // std::invalid_argument

namespace nucleotide_count {
counter::counter(const std::string_view dna) {
  throw_if_not(std::all_of(begin(dna), end(dna), nucleobase::exists));
  static auto const& all = nucleobase::all;
  std::for_each(begin(all), end(all), [this] (auto n) { bases_[n] = {}; });
  std::for_each(begin(dna), end(dna), [this] (auto n) { bases_[n] += 1; });
}

auto counter::count(const key_type id) const -> size_type {
  throw_if_not(nucleobase::exists(id));
  return bases_.at(id);
}

auto counter::nucleotide_counts() const -> value_type { return bases_; }

auto counter::throw_if_not(const bool cond) -> void {
  if (not cond) { throw std::invalid_argument("not a nucleotide."); }
}
} // namespace nucleotide_count
