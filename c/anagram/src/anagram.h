#ifndef VT_ANAGRAM_H
// ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
// ┃ anagram.h:                                           ┃
// ┃ Copyright (c) 2020 viraltaco_ (viraltaco@gmx.com)    ┃
// ┃ https://github.com/ViralTaco                         ┃ 
// ┃ SPDX-License-Identifier: MIT                         ┃
// ┃ <http://www.opensource.org/licenses/MIT>             ┃
// ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛
#define VT_ANAGRAM_H "1.0.0"

#include <stddef.h>  // size_t type
#include <stdbool.h> // bool type

enum vt_anagram_max { 
   string_length = 20ul,
   alphabet_length = 26ul
};

enum anagram_status {
   UNCHECKED = -1,
   NOT_ANAGRAM,
   IS_ANAGRAM
};

struct candidate {
   enum anagram_status is_anagram;
   char const* candidate;
};
typedef struct candidate vt_Candidate;

struct candidates {
   vt_Candidate* candidate;
   size_t count;
};
typedef struct candidates vt_Candidtates;

/**
 * @description - determines if any of the words in candidate are anagrams
 *       for word.  Word buffer and candidate structures may be modified.
 * @param word a string
 * @param candidates a struct
 */
void anagrams_for(char const*, vt_Candidtates*);

/**
 * @description - checks a word against another
 * @param a the lowercase string
 * @param b the string to compare string a to
 * @return true if both string contain the same letters ignoring case.
 */
bool isanagram(char const*, char const*) __attribute((pure));

typedef void Never;
Never vt_anagram_fatal(char const*) __attribute((noreturn));

/**
 * @description - This function will convert a whole string to lowercase
 * @param the string to convert as a char*
 * @return false if it fails
 */
inline bool as_lower(char*) __attribute((pure));


/**
 * description - this function must be passed a lowercase string
 *    it will increment elements of the array equivalent to the index
 *    equivalent to the letter checked. 
 * @param an array of integer all of which equal to 0
 * @param a lowercase string. 
 */ 
inline void count_letters(int[26], char const*) __attribute((pure));

#endif

