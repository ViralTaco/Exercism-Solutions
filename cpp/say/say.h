#ifndef VT_SAY_H
#define VT_SAY_H
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>
#define EXERCISM_RUN_ALL_TESTS

#include <string>

namespace say {
 static constexpr unsigned long long kTrillion{ 1000000000000ULL };
 
 static constexpr unsigned long long kMultList[]{
   1000000000ULL, 1000000ULL, 1000ULL, 100ULL
 };
 
 static const std::string kMultStr[]{
   "billion", "million", "thousand", "hundred"
 };
 
 static const std::string kSmallMult[]{
   "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty"
 };
 
 static const std::string kSmallNums[]{
   "zero", "one", "two", "three", "four", "five",
   "six", "seven", "eight", "nine", "ten", "eleven",
   "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
   "seventeen", "eighteen", "nineteen", "twenty"
 };
 
 std::string in_english(unsigned long long num);
} // namespace say

#endif
