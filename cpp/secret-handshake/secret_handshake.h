/**
 * Copyright (c) 2019 viraltaco
 * SPDX-License-Identifier: MIT
 * <http://www.opensource.org/licenses/MIT>
 */


#ifndef VT_SECRET_HANDSHAKE_H
#define VT_SECRET_HANDSHAKE_H

#define EXERCISM_RUN_ALL_TESTS "Run all tests. (Remove for TDD)."

#include <vector>
#include <utility>
#include <array>
#include <string>
#include <string_view>
#include <cstddef>


namespace secret_handshake {
template <typename Type> using Vector = std::vector<Type>;
template <typename Type, std::size_t Count> 
  using Array [[maybe_unused]] = std::array<Type, Count>;

using String = std::string;
using StringView = std::string_view;

enum Handshake {
  wink            = 1 << 0
, double_blink    = 1 << 1
, close_eyes      = 1 << 2
, jump            = 1 << 3
, reverse         = 1 << 4
};

struct SecretCombo {
public:
  Handshake shake;
  StringView text;
  
  constexpr SecretCombo(const Handshake shake, 
                        const StringView str) noexcept
    : shake{ shake }
    , text{ str }
  {}
};

static constexpr auto kSecrets = std::array<SecretCombo, 4u>{
  { // secret_combo
    { Handshake::wink         , "wink"            }
  , { Handshake::double_blink , "double blink"    }
  , { Handshake::close_eyes   , "close your eyes" }
  , { Handshake::jump         , "jump"            }
  } 
};

auto commands(int) -> Vector<String>;
}  // namespace secret_handshake

#endif // VT_SECRET_HANDSHAKE_H
