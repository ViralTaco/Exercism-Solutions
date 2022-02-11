#ifndef VT_REVERSE_STRING_H
/// copyright 2021 viraltaco_ <https://opensource.org/licenses/MIT>
#define VT_REVERSE_STRING_H "2.0.0"
#define EXERCISM_RUN_ALL_TESTS "should pass all tests"

#include <string>

namespace reverse_string {
inline auto reverse_string(std::string const& s) -> std::string {
  return { s.rbegin(), s.rend() };
}

} // namespace reverse_string

#endif
