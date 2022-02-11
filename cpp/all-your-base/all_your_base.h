/* copyright 2019 - 2021 viraltaco_ <https://opensource.org/licenses/MIT> */
#ifndef VT_BASES_H
#define VT_BASES_H "2.1.0"
#define EXERCISM_RUN_ALL_TESTS

#include <vector>

namespace all_your_base {
auto convert(unsigned base_in,
             std::vector<unsigned> const& number,
             unsigned base_out) -> std::vector<unsigned>;
} // namespace all_your_base

#endif // VT_BASES_H

