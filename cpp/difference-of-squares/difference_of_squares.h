#if not defined VT_DIFFERENCE_OF_SQUARES_H
// ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
// ┃ difference_of_squares.h:                             ┃
// ┃ Copyright (c) 2020 viraltaco_                        ┃
// ┃ SPDX-License-Identifier: MIT                         ┃
// ┃ <http://www.opensource.org/licenses/MIT>             ┃
// ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
#define VT_DIFFERENCE_OF_SQUARES_H "2.0.0"
#define EXERCISM_RUN_ALL_TESTS true

namespace difference_of_squares {
static constexpr auto square_of_sum = [] (auto x) {
  auto sum = x;
  while (x-- > 0) { sum += x; }
  return sum * sum;
};

static constexpr auto sum_of_squares = [] (auto x) {
  auto sum = x * x;
  while (x-- > 0) { sum += x * x; }
  return sum;
};

[[maybe_unused]] static constexpr auto difference = [] (const auto x) {
  const auto diff = sum_of_squares(x) - square_of_sum(x);
  if (diff < 0) {
    return -diff;
  } else {
    return diff;
  }
};


} namespace squares = difference_of_squares;

#endif
