#include "all_your_base.h"
#include <cmath>     // std::pow
#include <stdexcept> // std::invalid_argument
#include <algorithm> // std::any_of
#include <numeric>   // std::accumulate

namespace all_your_base {
auto convert(const unsigned base_in,
             std::vector<unsigned> const& number,
             const unsigned base_out) -> std::vector<unsigned> {
  const auto invalid = [&] (auto n) { return n >= base_in; };
  
  if (base_in < 2 or base_out < 2) {
    throw std::invalid_argument("The lowest base accepted is 2");
  } else if (number.empty()) {
    return { };
  } else if (std::any_of(number.begin(), number.end(), invalid)) {
    throw std::invalid_argument("Numbers must be smaller than base_in");
  }
  
  auto decimal = std::accumulate(number.rbegin(), number.rend(), 0u,
    [&, i = 0] (auto sum, auto n) mutable -> unsigned
    { return sum + n * std::pow(base_in, i++); });
  auto result = std::vector<unsigned>();
  for (; decimal > 0u; decimal /= base_out) {
    result.push_back(decimal % base_out);
  }
  return { result.rbegin(), result.rend() };
}

} // namespace all_your_base
