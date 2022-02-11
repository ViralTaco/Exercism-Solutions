#pragma once
#include <string_view>

namespace pangram {
[[nodiscard]] auto is_pangram(std::string_view str) -> bool;
} // namespace pangram
/*
 - initial benchmark: https://quick-bench.com/q/Z6yRxAMILR2AFj3z2DMyENev0dk
 - benchmark (clang): https://quick-bench.com/q/829bOC54Tyo7SW7zEV2yo5q4vBE
 - benchmark (gcc):   https://quick-bench.com/q/cJnKTGsWDdwuAA5nCtQcLbb5CCw
 On gcc std::accumulate is faster. Not on clang. I don't know why.
 GCC also doesn't optimize the potential UB version away, whilst clang does.
 EDIT: The code generated is actually the same. Thanks to FelisPhasma for
 pointing it out. cf: https://godbolt.org/z/1aY3rGdKG
*/
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>
