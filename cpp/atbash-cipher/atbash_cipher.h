#pragma once
#include <string_view>
#include <string>

namespace atbash_cipher {
[[nodiscard]] auto decode(std::string_view ciphertext) -> std::string;
[[nodiscard]] auto encode(std::string_view  cleartext) -> std::string;
} // namespace atbash_cipher
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>
