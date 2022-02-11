#include "square_root.h"

unsigned square_root(const unsigned x) {
  if (x <= 1) { return x; }
  
  unsigned beg = 2, ans = 0, end = x;
  while (beg <= end) {
    const unsigned mid = (beg + end) / 2;
    const unsigned mid_squared = mid * mid;
    
    if (mid_squared < x) { /* rounded toward 0 */
      beg = mid + 1;
      ans = mid;
    } else if (mid_squared == x) {
      return mid;
    } else {
      end = mid - 1;
    }
  }
  return ans;
}
