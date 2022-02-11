#ifndef VT_BRACKET_PUSH_H
// ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
// ┃ bracket_push.h:                                      ┃
// ┃ Copyright (c) 2020 viraltaco_                        ┃
// ┃ SPDX-License-Identifier: MIT                         ┃
// ┃ <http://www.opensource.org/licenses/MIT>             ┃
// ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
#define VT_BRACKET_PUSH_H "2.0.0"
#define EXERCISM_RUN_ALL_TESTS true

#include <string_view>

namespace bracket_push {
using strview = std::string_view;
constexpr auto check(const strview str) noexcept -> bool;
} // namespace bracket_push

#endif