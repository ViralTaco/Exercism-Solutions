#ifndef VT_ACRONYM_H
#define VT_ACRONYM_H
#include <stdbool.h> /* bool */

extern bool is_token(char);
extern bool is_word_boundary(unsigned char, unsigned char);
/**
 * @brief This function allocated `strlen(phrase)` of memory.
 * @param phrase The sentence used to form the acronym.
 * @return NULL if phrase is NULL, if strlen(phrase) is 0 or
 *         if memory allocation fails. Otherwise returns a
 *         pointer to the first element of the the
 *         NIL terminated byte string of the acronym.
 */
extern char* abbreviate(char const* phrase);
/* copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT> */
#endif /* VT_ACRONYM_H */
