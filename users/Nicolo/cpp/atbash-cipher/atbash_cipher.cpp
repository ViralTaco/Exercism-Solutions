#include "atbash_cipher.h"

namespace atbash_cipher {

char encode(char c) { return 'z' - c + 'a'; }

std::string encode(const std::string &message) {
  std::string result;
  int i = 1;

  for (char c : message) {
    if (isalnum(c)) {
      if (isalpha(c)) {
        result.push_back(encode(tolower(c)));
      } else {
        result.push_back(c);
      }

      if (i % 5 == 0) result.push_back(' ');

      i++;
    }
  }

  auto last = result.end() - 1;

  if (*last == ' ') result.erase(last);

  return result;
}

std::string decode(std::string encrypted_message) {
  std::string result;
  for (char c : encrypted_message)
    if (c != ' ') {
      if (isalpha(c))
        result.push_back(encode(tolower(c)));
      else
        result.push_back(c);
    }
  return result;
}
}  // namespace atbash_cipher
