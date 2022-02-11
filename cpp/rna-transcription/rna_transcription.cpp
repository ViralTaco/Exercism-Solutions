#include "rna_transcription.h"
#include <algorithm>

char rna_transcription::to_rna(const char dna) noexcept {
  switch (dna) {
  case 'A': case 'a': return 'U';
  case 'C': case 'c': return 'G';
  case 'G': case 'g': return 'C';
  case 'T': case 't': return 'A';
  default: return '\0';
  }
}

std::string rna_transcription::to_rna(std::string dna) {
  std::transform(dna.begin(), dna.end(), dna.begin(),
                 [] (const char strand) { return to_rna(strand); });
  return dna;
}
