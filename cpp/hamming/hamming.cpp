#include "hamming.h"  // hamming::detail::{ Strand, Distance }
#include <functional> // std::{ plus, not_equal_to }
#include <numeric>    // std::transform_reduce
#include <stdexcept>  // std::domain_error

auto hamming::compute(const Strand l, const Strand r) -> Distance {
  if (l.size() != r.size()) {
    throw std::domain_error("Strands lengths must be equal.");
  } else if (l.empty() or l == r) {
    return 0ull;
  } else {
    return std::transform_reduce(
      l.begin(), l.end(), r.begin(),
      0ull, std::plus(), std::not_equal_to()
    );
  }
}
