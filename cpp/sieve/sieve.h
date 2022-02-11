#ifndef VIRALTACO_UNDERSCORE_SIEVE_SIEVE_H
#define VIRALTACO_UNDERSCORE_SIEVE_SIEVE_H
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>

#include <utility> // std::make
#include <numeric> // std::iota

namespace vt::inline detail {
  using ssize = decltype(0LL);

  static consteval auto interval(ssize first, ssize last) {

  }
} // namespace vt::inline detail

namespace sieve {

struct sieve {
  static constexpr auto kNumberSet = [] () noexcept {
    return std::make_from_tuple<>()
  }();

};
}
} // inline namespace sieve
#endif