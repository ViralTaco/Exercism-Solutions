#include "acronym.h"
#include <stdlib.h>  /* malloc */
#include <string.h>  /* strlen */
#include <ctype.h>   /* isalpha, toupper */

bool is_token(const char c) {
  return c == ' ' || c == '-' || c == '_';
}

bool is_word_boundary(const unsigned char last, const unsigned char current) {
  return is_token(last) && isalpha(current);
}

char* abbreviate(char const* phrase) {
  if (!phrase) { return NULL; }
  
  const size_t kPhraseLength = strlen(phrase);
  char* acronym = malloc(kPhraseLength);
  if (!kPhraseLength || !acronym) { return NULL; }
  
  char last = acronym[0] = toupper(phrase[0]);
  for (size_t i = 1, j = 1; i < kPhraseLength; ++i) {
    const unsigned char current = phrase[i];
    if (is_word_boundary(last, current)) {
      acronym[j] = toupper(current);
      acronym[++j] = '\0';
    }
    last = current;
  }
  
  return acronym;
}
