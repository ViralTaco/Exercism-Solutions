#include "trinary.h"
#include <cstdlib>
#include <cerrno>


auto trinary::to_decimal(const char* s) noexcept -> unsigned long {
  const auto result = std::strtoul(s, nullptr, 3);
  if (ERANGE == errno) {
    return static_cast<unsigned long> (errno = 0);
  } else {
    return result;
  }
}
