#include "grains.h"
#include <cmath>   // std::pow
#include <cstdint> // std::uint64_t (shorthard for unsigned long long)
#include <cassert> // assert

namespace grains {
 constexpr int num_squares_on_chess_board = 64;

// I use the trailing return type syntax.
// This is just a stylistic choice. It's the same as:
// std::uint64_t square(const unsigned exponent) { ...
 auto square(const unsigned exponent) -> std::uint64_t {
   if (exponent <= 1) { return 1; }
   
   // It's 'safe', but it takes and returns floating point numbers.
   // return std::pow(2, exponent - 1);
   // This is technically fine. The cast is implicit.
   
   // It's recommended to use a static_cast whenever possible
   // return static_cast<uint64_t> (std::pow(2, exponent - 1));
   // Try and find the bitwise operation, it's very close to your solution.
 }
 
 unsigned long long square(int sq) {
   // Using pow function and forced type casting looked unsafe...
   //return unsigned long long (pow(2, sq - 1));
   
   // ....Hence, used recursive approach
   if (sq == 0 || sq == 1) {
     return 1;
   }
   
   return 2 * square(sq - 1);
 }
 
 unsigned long long total() {
   unsigned long long grains_on_sq = square(num_squares_on_chess_board);
   unsigned long long sum = grains_on_sq;
   for (int i = num_squares_on_chess_board - 1; i > 0; --i) {
     grains_on_sq /= 2;
     sum += grains_on_sq;
   }
   return sum;
 }
}  // namespace grains
