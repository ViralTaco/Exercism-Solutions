#include "hamming.h"
#include <assert.h>  // assert
#include <string.h>  // strlen

extern long compute(const char lhs[restrict], const char rhs[restrict]) {
  enum { kLengthMismatch = -1 };
  assert(lhs != NULL && rhs != NULL);
  
  const size_t kStrandLength = strlen(lhs);
  if (kStrandLength != strlen(rhs)) {
    return kLengthMismatch;
  }
  
  long distance = 0;
  for (size_t i = 0u; i < kStrandLength; ++i) {
    distance += (lhs[i] != rhs[i]);
  }
  return distance;
}
