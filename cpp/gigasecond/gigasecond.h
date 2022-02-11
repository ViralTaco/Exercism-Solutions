#ifndef VIRALTACO_UNDERSCORE_GIGASECOND_GIGASECOND_H
#define VIRALTACO_UNDERSCORE_GIGASECOND_GIGASECOND_H
#include <boost/date_time/posix_time/posix_time.hpp>

namespace gigasecond {
auto advance(boost::posix_time::ptime const&) -> boost::posix_time::ptime;
}

#endif