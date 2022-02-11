// ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
// ┃ anagram.c:                                           ┃
// ┃ Copyright (c) 2020 viraltaco_ (viraltaco@gmx.com)    ┃
// ┃ https://github.com/ViralTaco                         ┃ 
// ┃ SPDX-License-Identifier: MIT                         ┃
// ┃ <http://www.opensource.org/licenses/MIT>             ┃
// ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛

#include "anagram.h"

#include <iso646.h>  // operators "not", "or", and "and"
#include <stddef.h>  // size_t type
#include <stdbool.h> // bool type
#include <stdlib.h>  // malloc(size_t), free(void*)
#include <ctype.h>   // tolower(int)
#include <string.h>
#include <stdio.h>

Never vt_anagram_fatal(char const* message) {
  fputs(message, stderr);
  exit(EXIT_FAILURE);
}

bool as_lower(char* str) {
  if (str == NULL) { return false; }
   
  char* c_ptr = str;
  while (c_ptr != NULL) {
    *c_ptr = tolower(*c_ptr);
    ++c_ptr;
  }
  return true;
}

void count_letters(int arr[26], char const* lowered) {
  size_t len = strlen(lowered);
  while (len > 0ull) {
    const unsigned char c = lowered[len];
    if (isalpha(c) != 0) { arr[c - 'a'] += 1; }
    len -= 1ull;
  }
}

bool isanagram(char const* base, char const* other) {
  const size_t len = strlen(other);
  
  if (len != strlen(base)) { return false; }
  
  char* letters = malloc(len + 1ull);
  if (letters == NULL or strncpy(letters, other, len) == NULL) {
    free(letters);
    vt_anagram_fatal("Error: strncpy failled in isanagram");
  } else if (not as_lower(letters)) {
    free(letters);
    vt_anagram_fatal("Error: as_lower failled in isanagram");
  }
  
  int letter_count[alphabet_length] = {0};
  count_letters(letter_count, base);
  
  int other_count[alphabet_length] = {0};
  count_letters(other_count, letters);
  
  free(letters);
  
  for (int i = 0; i < alphabet_length; ++i) {
    if (letter_count[i] != other_count[i]) {
      return false;
    }
  }  
  return true;
}

void anagram_for(char const* word, vt_Candidtates* candidates) {
  const size_t len = strlen(word);
  
  char* word_lower = malloc(len + 1ull);
  if (word_lower == NULL or (strncpy(word_lower, word, len)) == NULL) {
    free(word_lower);
    vt_anagram_fatal("Error: strncpy failled in anagram_for");
  } else if (not as_lower(word_lower)) {
    free(word_lower);
    vt_anagram_fatal("Error: as_lower fail in anagram_for");
  }
  
  vt_Candidate* cand = candidates->candidate;
  while (cand != NULL) {
    if (isanagram(word_lower, cand->candidate)) {
      cand->is_anagram = IS_ANAGRAM;
    } else {
      cand->is_anagram = NOT_ANAGRAM;
    }
    ++cand; // advance pointer
  } 
  free(word_lower);
}
