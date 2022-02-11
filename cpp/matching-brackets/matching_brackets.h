#if not defined VT_MATCHING_BRACKETS_H
// ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
// ┃ matching_brackets.h:                                 ┃
// ┃ Copyright (c) 2020 viraltaco_                        ┃
// ┃ SPDX-License-Identifier: MIT                         ┃
// ┃ <http://www.opensource.org/licenses/MIT>             ┃
// ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
#define VT_MATCHING_BRACKETS_H "3.0.0"
#define EXERCISM_RUN_ALL_TESTS true

#include <string_view>  // std::string_view

namespace matching_brackets {
[[nodiscard]] bool check(std::string_view) noexcept;
} // namespace matching_brackets

#endif // not defined VT_MATCHING_BRACKETS_H
