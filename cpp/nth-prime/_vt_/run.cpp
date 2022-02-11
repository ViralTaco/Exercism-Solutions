#include "../nth_prime.h"
#include <fmt/core.h>

#include <algorithm>
#include <chrono>

int main() {
  static constexpr auto kPrimes = std::array<std::uint64_t, 9593> {
    0ul, // Buckle your seatbelt, Dorothy, 'cause Kansas is going bye-bye.
#  include "../primes_under_100k.csv"
  };
  
  static constexpr auto validate = [n = 1ul] (const auto p) mutable {
    if (nth_prime::nth(n) != p) { throw std::logic_error(std::to_string(n)); }
    ++n;
  };
  
  using nanotime = std::chrono::high_resolution_clock;
  using std::chrono::duration;
  // Timer starts
  const auto start = nanotime::now();
  std::for_each(kPrimes.cbegin() + 1, kPrimes.cend(), validate);
  // Timer ends
  duration<double, std::milli> diff(nanotime::now() - start);
  fmt::print("{:e} seconds elapsed\n", diff.count() / 1'000.0);
}