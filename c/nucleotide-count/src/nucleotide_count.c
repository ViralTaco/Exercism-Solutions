#include "nucleotide_count.h"
#include <stdlib.h> // malloc, size_t
#include <string.h> // strlen
#include <stdio.h>  // sprintf
#include <assert.h> // assert
#include <errno.h>  // errno

char* count(const char* dna) {
  static const char kCountFormat[] = "A:%hd C:%hd G:%hd T:%hd";
  enum { kBufferSize = sizeof kCountFormat + 4 * kNucleobaseCountDigits10, };
  
  assert(dna);
  const size_t kLen = strlen(dna) + 1;
  const StrandCount r = bases_in((Range) { dna, dna + kLen - 1, });
  
  char* buffer = malloc(kBufferSize);
  if (errno || !buffer) { return buffer; }
  
  (void) snprintf(buffer, kBufferSize, kCountFormat,
                  r.adenine, r.cytosine, r.guanine, r.thymine);
  return buffer;
}

StrandCount bases_in(const Range arr) {
  assert(arr.beg && arr.end);
  
  enum { adenine = 'A', cytosine = 'C', guanine = 'G', thymine = 'T', };
  StrandCount count_ = (StrandCount) { 0, 0, 0, 0 };
  for (char const* p = arr.beg; p != arr.end; (void) ++p) {
    switch (*p) {
    case adenine:
      (void) ++count_.adenine;
      break;
    case cytosine:
      (void) ++count_.cytosine;
      break;
    case guanine:
      (void) ++count_.guanine;
      break;
    case thymine:
      (void) ++count_.thymine;
      break;
    
    default:
      errno = EDOM;
      return (StrandCount) { 0 };
    }
  }
  return count_;
}
