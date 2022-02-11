#if !defined(VT_LIB_CURBS_H) && !defined(__cplusplus)
#define VT_LIB_CURBS_H
// copyright 2021 viraltaco_ <https://opensource.org/licenses/MIT>

/* synopsys for <curbs.h>:
 *
 *  #include <stdint.h> // Fixed Size Integers
 *  #include <limits.h> // __CHAR_BIT__
 *
 *  struct numeric_curbs {
 *    bool is_signed  = ((type) -1) < ((type) 0);
 *    int  digits     = (int) (sizeof (type) * __CHAR_BIT__ - is_signed);
 *    int  digits10   = digits * 3 / 10; // log10(2) is about 0.3 (cast to int)
 *    int  radix      = 2;
 *
 *    type min = (is_signed) ? ((type) 1) << digits : ((type) 0));
 *    type max = ((type) ~0) ^ ((is_signed) ? min : ((type) 0));
 *  };
 */

#include <stdint.h> // Fixed Size Integers
#include <limits.h> // __CHAR_BIT__

typedef struct {
  _Bool is_signed;
  int   digits;
  int   digits10;
  int   radix;
  
  //@viraltaco_: todo: find suitable definition for min and max
  //? typedef curbs_byte        curbs_byte_string[(1u + sizeof (uintmax_t))];
  //? curbs_byte_string min(void);
  //? curbs_byte_string max(void);
} numeric_curbs_t;

#define numeric_curbs(TYPE) (              \
  numeric_curbs_(                          \
    (int)   (sizeof (TYPE) * __CHAR_BIT__) \
  , (_Bool) ((TYPE) -1) < ((TYPE) 0)       \
  )                                        \
)

extern numeric_curbs_t numeric_curbs_(int digits, _Bool sign);

#endif // !defined(VT_LIB_CURBS_H) && !defined(__cplusplus)
