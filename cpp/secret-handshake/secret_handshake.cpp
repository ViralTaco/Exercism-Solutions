/**
 * Copyright (c) 2019 viraltaco
 * SPDX-License-Identifier: MIT
 * <http://www.opensource.org/licenses/MIT>
 */

#include "secret_handshake.h"
#include <algorithm> // std::reverse

namespace secret_handshake {
auto commands(const int command) -> Vector<String> {
  Vector<String> handshakes;
  for (auto const& [handshake, secret]: kSecrets) {
    if (command & handshake) {
      handshakes.emplace_back(secret);
    }
  }
  
  if (command & Handshake::reverse) {
    std::reverse(handshakes.begin(), handshakes.end());
  }
  return handshakes;
}
} // namespace secret_handshake
