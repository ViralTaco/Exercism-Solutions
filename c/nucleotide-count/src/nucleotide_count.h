#ifndef VT_NUCLEOTIDE_COUNT_H
#define VT_NUCLEOTIDE_COUNT_H
#include <inttypes.h>
typedef uint_fast16_t BaseCount;
enum limits { kBaseCountDigits10 = 5, };

typedef struct StrandCount {
  BaseCount adenine;
  BaseCount cytosine;
  BaseCount guanine;
  BaseCount thymine;
} StrandCount;

typedef struct Range {
  char const* beg;
  char const* end;
} Range;

StrandCount bases_in(Range arr);
char* count(const char* dna);
// copyright 2021 viraltaco_ <https://opensource.org/licenses/MIT>
#endif // VT_NUCLEOTIDE_COUNT_H
