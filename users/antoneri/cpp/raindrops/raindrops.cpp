#include "raindrops.h"
#include <sstream>

namespace raindrops {

std::string convert(int drops) {
  
  return { !((drops -= 2) % 5)  "Plong"
         +  !((drops -= 2) & 0x1 )
  };
  
}

}  // namespace raindrops
