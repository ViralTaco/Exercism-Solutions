#ifndef VT_SPACE_AGE_HPP
#define VT_SPACE_AGE_HPP
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>

namespace /*(anonymous)*/ {
namespace space_age::inline detail {
template <class T> struct [[nodiscard]] getter {
  constexpr auto operator ()() const noexcept { return value; }
  const T value;
};

// julian_years:
// Julian years (symbol 'a') are used to define a light-year 'ly'.
// The speed of light in vacuum 'c' is 299 792 458 m/s.
// 1a def= 1ly/c; 1a def= 31'557'600s [0]
// So: 1a is by definition the orbital period of Earth (1 year). [1][2]
using julian_years = long double;

[[nodiscard]]
constexpr auto operator ""_a(const julian_years orbital_years) noexcept {
  constexpr auto kJulianYearSeconds = static_cast<julian_years> (3.15576e+7);
  return kJulianYearSeconds * orbital_years;
}
} // namespace (anonymous)::space_age::inline detail

namespace space_age {
struct [[nodiscard]] space_age {
  using second = signed long long;
  using age = getter<julian_years>;

  const getter<second> seconds;
  const age on_earth   { seconds() / 1._a };            //    31'557'600.0s
  const age on_mercury { seconds() / 2.408'4670e-1_a }; //     7'600'543.81992s
  const age on_jupiter { seconds() / 1.186'2615e+1_a }; //   374'355'659.124s
  const age on_neptune { seconds() / 1.647'9132e+2_a }; // 5'200'418'560.032s
  const age on_venus   { seconds() / 6.151'9726e-1_a }; //    19'414'149.052176s
  const age on_saturn  { seconds() / 2.944'7498e+1_a }; //   929'292'362.8848s
  const age on_uranus  { seconds() / 8.401'6846e+1_a }; // 2'651'370'019.3296s
  const age on_mars    { seconds() / 1.880'8158e+0_a }; //    59'354'032.69008s

  [[nodiscard]] [[maybe_unused]]
  explicit constexpr space_age(const second age_) noexcept
   : seconds{ age_ }
  {}
};
} // namespace space_age
} // namespace (anonymous)

//  0.: Symbol 'def=' means "equals to by definition" (Unicode equiv.: U+225D ≝)
//      Symbol 's' is an SI second (See 1. below)
//      Symbol '/' is used for division (Unicode equiv.: U+00F7 ÷)
//
//  1.: See The International System of Units (9th ed. 2019),
//     by International Bureau of Weights and Measures,
//     2.2 "Definition of the SI", p127, ISBN 978-92-822-2272-0;
//   [Note —— Retrieved from: https://www.bipm.org/en/publications/si-brochure
//            on the 2nd of July 2021 —— End note]
//
//  2.: ISO 80000-3:2019 Quantities and Units – Space and Time
#endif // VT_SPACE_AGE_HPP
