#pragma once
#include <string>

namespace two_fer {
[[nodiscard, gnu::pure]] consteval auto two_fer() noexcept {
  return "One for you, one for me.";
}
[[nodiscard]] auto two_fer(std::string const& name) -> std::string;
} // namespace two_fer
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>
// -Benchmarks: https://quick-bench.com/q/wwnu1gCeBgCDLrbrsaKF2-4J5Cs
