#ifndef VT_ADJACENT_DIFFERENCE_H
#define VT_ADJACENT_DIFFERENCE_H
/*
*
* Copyright (c) 1994
* Hewlett-Packard Company
*
* Permission to use, copy, modify, distribute and sell this software
* and its documentation for any purpose is hereby granted without fee,
* provided that the above copyright notice appear in all copies and
* that both that copyright notice and this permission notice appear
* in supporting documentation.  Hewlett-Packard Company makes no
* representations about the suitability of this software for any
* purpose.  It is provided "as is" without express or implied warranty.
*
*
* Copyright (c) 1996,1997
* Silicon Graphics Computer Systems, Inc.
*
* Permission to use, copy, modify, distribute and sell this software
* and its documentation for any purpose is hereby granted without fee,
* provided that the above copyright notice appear in all copies and
* that both that copyright notice and this permission notice appear
* in supporting documentation.  Silicon Graphics makes no
* representations about the suitability of this software for any
* purpose.  It is provided "as is" without express or implied warranty.
*/

/**
 *  - Description: 
 *    This header attempts to implement the STL[1] algorithm `adjacent_difference`
 *    as idiomatically as possible, in standard C (at most C17 as of  writing).
 *  
 *  - References:
 *    1) STL: 
 *      a) https://web.archive.org/web/20171124112157/http://www.sgi.com/tech/stl/download.html
 *      b) http://www.rrsd.com/software_development/stl/stl/index.html
 *    2) Alexander Stepanov — Notes on Programming: http://stepanovpapers.com/notes.pdf
 *    3) cppreference links: https://en.cppreference.com/w/cpp/links
 **/

//template <class _InputIterator, class _OutputIterator, class _Tp, 
//class _BinaryOperation>
//_OutputIterator
#include <stddef.h> /* size_t */
#include <assert.h> /* assert */

typedef void const* InPtr;
size_t adjacent_difference(InPtr restrict first, InPtr restrict last) {
  static const InPtr nil = NULL;
  assert(first != nil && last != nil);
  size_t result = 0;

  const (typeof (*first)) value = *first;
    while (++first != last) {
      _Tp __tmp = *__first;
      *++__result = __binary_op(__tmp, __value);
      __value = __tmp;
    }
    return ++__result;
  }


#endif // VT_ADJACENT_DIFFERENCE_H
