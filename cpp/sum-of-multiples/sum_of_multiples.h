#ifndef VT_SUM_MULTIPLES_H
#define VT_SUM_MULTIPLES_H
// copyright 2021 viraltaco_ <https://opensource.org/licenses/MIT>
#define EXERCISM_RUN_ALL_TESTS "Should pass all tests"

#include <set>
namespace sum_of_multiples {
[[nodiscard, gnu::pure]]
auto to(std::set<int>  factors, int limit) -> long;
} // namespace sum_of_multiples

#endif // VT_SUM_MULTIPLES_H
