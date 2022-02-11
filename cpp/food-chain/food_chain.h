#if not defined VT_FOOD_CHAIN_H
// ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
// ┃ food_chain.h:                                        ┃
// ┃ Copyright (c) 2020 viraltaco_                        ┃
// ┃ SPDX-License-Identifier: MIT                         ┃
// ┃ <http://www.opensource.org/licenses/MIT>             ┃
// ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
#define VT_FOOD_CHAIN_H "1.0.0"
#if not defined EXERCISM_RUN_ALL_TESTS
#   define EXERCISM_RUN_ALL_TESTS true
#endif

#include <cstddef>      // std::size_t
#include <sstream>      // std::stringstream
#include <string_view>  // std::string_view

namespace food_chain {
using namespace std::literals;

struct song {
  enum index {
    fly = 1u, spider = 2u, bird = 3u, cat   = 4u,
    dog = 5u, goat   = 6u, cow  = 7u, horse = 8u,
  };
  
  static constexpr auto name[] {
    [fly] = "fly"sv,
    
  };
  
  static constexpr auto
    first = "I know an old lady who swallowed a ",
    last = ".\nI don't know why she swallowed the fly. Perhaps she'll die.\n";
};
} // namespace food_chain

#endif // not defined VT_FOOD_CHAIN_H