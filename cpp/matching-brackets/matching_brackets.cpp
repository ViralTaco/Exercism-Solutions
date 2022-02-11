#include "matching_brackets.h"
#include <stack>

bool matching_brackets::check(const std::string_view str) noexcept {
  auto all = std::stack<char>();
  const auto last_was = [&all] (const auto c) {
    return not all.empty() and all.top() == c;
  };
  
  for (const auto c: str) {
    switch (c) {
    case '(': case '{': case '[':
      all.push(c);
      break;
    case ')':
      if (last_was('(')) { all.pop(); break; }
      return false;
    case '}':
      if (last_was('{')) { all.pop(); break; }
      return false;
    case ']':
      if (last_was('[')) { all.pop(); break; }
      return false;
    default:
      break;
    }
  }
  
  return all.empty();
}
