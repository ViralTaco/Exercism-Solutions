#include "gigasecond.h"

namespace bpt = boost::posix_time;
auto gigasecond::advance(bpt::ptime const& time) -> bpt::ptime {
  return time + bpt::seconds(1'000'000'000);
}
