#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H

#include <string>

namespace atbash_cipher {
std::string encode(const std::string &message);
std::string decode(std::string encrypted_message);
}  // namespace atbash_cipher

#endif  // ATBASH_CIPHER_H
