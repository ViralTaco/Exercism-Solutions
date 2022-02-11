#include "sum_of_multiples.h"

#include <set>           // std::set
#include <algorithm>     // std::for_each
#include <numeric>       // std::reduce
#include <functional>    // std::multiplies
#include <limits>        // std::numeric_limits
#include <utility>       // std::{ move, make_integer_sequence }

namespace sum_of_multiples {
constexpr auto kMaxNum = std::numeric_limits<int>::max() / 2;
constexpr auto kMultiples = std::make_integer_sequence<int, kMaxNum>();

auto to(const int factor, const int limit) noexcept -> long {
  const int k = limit / factor; // Number of multiples from factor to limit
  return factor * (k * (k + 1) / 2);
}

auto to(std::set<int> factors, const int limit) -> long {
  std::for_each(factors.begin(), factors.end(), [&] (auto factor) {
    for (auto i = factor * factor; i < limit; i += factor) {
      factors.insert(i);
    }
  });

  return std::reduce(multiples.begin(), multiples.end());
}
} // namespace sum_of_multiples
