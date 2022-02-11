#include "isogram.h"
#include <ctype.h>

__attribute__((pure))
static inline int rank(const char c) {
  return !isalpha(c) ? -1 : tolower(c) - 'a';
}

__attribute__((pure))
bool is_isogram(const char word[]) {
  if (!word) { return false; }
  
  for (bool uniq[26] = { 0 }; *word;) {
    const int i = rank(*word++);
    if (i >= 0 && !(uniq[i] ^= 1)) {
      return false;
    }
  }
  return true;
}
