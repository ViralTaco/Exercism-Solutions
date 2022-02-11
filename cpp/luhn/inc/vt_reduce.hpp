#ifndef VT_REDUCE_HPP
#define VT_REDUCE_HPP
/// copyright 2021 viraltaco_ <https://opensource.org/licenses/MIT>

#include <iterator> // std::{ begin, end }
#include <numeric>  // std::reduce

// copyright 2021 viraltaco_ <https://opensource.org/licenses/MIT>
//
// This header file only contains a generic template function
// to simplify the call to `std::reduce`. Until ranges are supported
// on my platform, I'm stuck with this. You likely aren't, though.
// Consider taking a look at the Rangev3 proposal or std::ranges.
//
namespace vt_::inline forward {
template <class Range, class BinaryFunction>
constexpr auto reduce(Range r, BinaryFunction f) noexcept {
  using element_t = typename Range::value_type;
  return std::reduce(begin(r), end(r), element_t{}, f);
}
} // namespace vt_::inline forward

#endif // VT_REDUCE_HPP
