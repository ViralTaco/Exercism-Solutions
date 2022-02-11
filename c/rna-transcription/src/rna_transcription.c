#include "rna_transcription.h" // SwapMap
// copyright 2021 viraltaco_ <https://opensource.org/licenses/MIT>

enum Nucleobase
{ adenine  = 'A'
, cytosine = 'C'
, guanine  = 'G'
, thymine  = 'T'
, uracil   = 'U'
};

static const SwapMap kNucleobaseMap =
{ [adenine]  = uracil
, [cytosine] = guanine
, [guanine]  = cytosine
, [thymine]  = adenine,
};

#include <assert.h>  // assert
char* swap_into(char const* first, char const* last, char* dest, SwapMap map) {
  assert(first && last && dest);
  
  unsigned char* init = (unsigned char*) dest;
  for (; first != last; ++first, ++init) {
    *init = map[(unsigned) *first];
  }
  return dest;
}

#include <stdlib.h>  // calloc
#include <string.h>  // strlen, size_t
char* to_rna(char const* dna) {
  assert(dna);
  
  const size_t kLength = strlen(dna);
  char* dest = calloc(/*size*/ kLength + 1u, /*align*/ 1u);
  if (!dest) { vt_fatal(__func__); }
  
  char const* last = dna + kLength;
  return swap_into(dna, last, dest, kNucleobaseMap);
}

#include <stdio.h> // fprintf
_Noreturn void vt_fatal(const char func[]) {
  assert(func);
  
  (void) fprintf(stderr, "Memory allocation failed in %s\n", func);
  exit(EXIT_FAILURE);
}
