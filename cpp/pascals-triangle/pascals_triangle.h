#ifndef VT_PASCAL_TRIANGLE_H
/// copyright 2019 - 2021 viraltaco_ <https://opensource.org/licenses/MIT>
#define VT_PASCAL_TRIANGLE_H "2.0.0"

#define EXERCISM_RUN_ALL_TESTS 1

#include <vector>

namespace pascals_triangle {

template <class Type>
using matrix = typename std::vector<std::vector<Type>>;

matrix<int> generate_rows(const int);

} // namespace pascals_triangle

#endif
