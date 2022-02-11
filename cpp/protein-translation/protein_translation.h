#ifndef VT_PROTEIN_TRANSLATION_H
// ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
// ┃ protein_translation.h                                ┃
// ┃ Copyright (c) 2020 viraltaco_ (viraltaco@gmx.com)    ┃
// ┃ https://github.com/ViralTaco                         ┃
// ┃ SPDX-License-Identifier: MIT                         ┃
// ┃ <http://www.opensource.org/licenses/MIT>             ┃
// ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
#define VT_PROTEIN_TRANSLATION_H "1.0.0"
#if defined (__cpp_constexpr_dynamic_alloc) \
and __cpp_constexpr_dynamic_alloc >= 201907L
#  define VT_DYCOEX constexpr
#else
#  define VT_DYCOEX /* not constexpr */
#endif // defined __cpp_constexpr_dynamic_alloc >= 201907L

#define EXERCISM_RUN_ALL_TESTS true

#include <cstddef>

#include <vector>
#include <string>
#include <string_view>

namespace protein_translation {
constexpr auto translate(std::string_view) -> std::string_view;
VT_DYCOEX auto proteins(std::string_view) -> std::vector<std::string>;
}  // namespace protein_translation

#endif // not defined VT_PROTEIN_TRANSLATION_H
