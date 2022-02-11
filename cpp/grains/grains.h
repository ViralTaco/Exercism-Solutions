#ifndef VT_GRAINS_H
#define VT_GRAINS_H
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>

namespace grains {
consteval auto total() noexcept {
   return 0xFFFF'FFFF'FFFF'FFFF;
}

constexpr auto square(const unsigned s) noexcept {
  return s > 64 ? 0ull : 1ull << (s - 1);
}
} // namespace grains
#endif // VT_GRAINS_H
