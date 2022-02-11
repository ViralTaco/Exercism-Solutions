#include "nth_prime.h"

// Standard library
#include <stdexcept>
#include <vector>

namespace nth_prime {

// -----------------------------------------------------------------------------

// Vector for internal caching of already found primes
std::vector<unsigned int> primes_found{2};

// -----------------------------------------------------------------------------
// Internal functions

bool devidable_by_primes(unsigned int num) {
  /** Check if a given number is devidable by an already found prime.
   **/
  bool devidable = false;
  for (unsigned int prime : primes_found) {
    if (num % prime == 0) {
      devidable = true;
      break;
    }
  }
  return devidable;
}

void find_nth(unsigned int n) {
  /** Find the n-th prime starting with the highest prime already found.
   **/
  unsigned int num = primes_found.back();

  while (primes_found.size() < n) {
    num += 1;
    if (!devidable_by_primes(num)) {
      primes_found.push_back(num);
    }
  }
}

// -----------------------------------------------------------------------------
// Public functions

unsigned int nth(unsigned int n) {
  /** Return the n-th prime number.
   **/
  if (n == 0) {
    throw std::domain_error("n must be > 0.");
  }
  
  // If not already cached, find all primes until n-th one
  if (primes_found.size() < n) {
    find_nth(n);
  }
     
  return primes_found[n-1];
}

// -----------------------------------------------------------------------------

} // namespace nth_prime
