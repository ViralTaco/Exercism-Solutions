#include "armstrong_numbers.h"

#include <cmath>    // std::pow
#include <numeric>  // std::reduce
#include <string>   // std::to_string

namespace armstrong_numbers {
auto is_armstrong_number(const int n) -> bool {
  const auto num = std::to_string(n);
  return n < 10
      or n == std::reduce(rbegin(num), rend(num), 0,
        [k = num.size()] (auto i, auto c) {
          return i + std::pow(c - '0', k);
      });
}
}  // namespace armstrong_numbers
