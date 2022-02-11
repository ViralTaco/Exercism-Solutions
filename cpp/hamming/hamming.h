#pragma once
#include <string_view>

namespace hamming {
inline namespace detail {
 using Distance = unsigned long long;
 using Strand = std::string_view;
} // inline namespace detail

/**
 * @brief Calculate the Hamming Distance between two DNA strands.
 * @param l the first DNA strand
 * @param r the other DNA strand
 * @return The number of symmetric differences
           eg: The pairwise inequality count
 * @throws std::domain_error if the length of the strands are different
 */
[[gnu::pure, nodiscard]] auto compute(Strand l, Strand r) -> Distance;
}  // namespace hamming
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>
