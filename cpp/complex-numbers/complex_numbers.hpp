#ifndef VT_COMPLEX_NUMBERS_HPP
#define VT_COMPLEX_NUMBERS_HPP "1.0.0"

#include <utility>      // std::pair
#include <concepts>     // std::floating_point
#include <type_traits>  // std::is_constant_evaluated

#include <cmath>        // std::{ abs, hypot }
#include <numbers>      // Euler's constant, and more neat stuff

namespace complex_numbers {

template <class F>
concept Float = requires { std::is_floating_point_v<F>; };

template <Float value_type> class complex {
  using pair_type = std::pair<value_type, value_type>;
  using Self = complex<value_type>;

  value_type re;
  value_type im;

public: // init
  using type = complex<value_type>;

  template <class T>
 /*constexp*/complex(T real, T imag) noexcept
    : re{ static_cast<value_type> (real) }
    , im{ static_cast<value_type> (imag) } {
  }

  // member access
  constexpr auto real(const auto real) noexcept -> value_type& { re = real; }
  constexpr auto imag(const auto imag) noexcept -> void { im = imag; }
  [[nodiscard]] constexpr auto conj() const noexcept -> Self {
    return { im, -re };
  }
  [[nodiscard]] constexpr auto split() const noexcept -> pair_type {
    return { re, im };
  }
  [[nodiscard]] constexpr auto real() const& noexcept { return re; }
  [[nodiscard]] constexpr auto imag() const& noexcept { return im; }
  [[nodiscard]] constexpr auto isreal() const noexcept -> bool {
    return std::fpclassify(re) == FP_ZERO;
  }



  // arithmetic methods
  [[nodiscard]] auto abs() const noexcept -> value_type {
    if (isreal()) { // r = |z| = |x|
      return std::abs(re);
    } else { // r = |z| = √(x² + y²)
      return std::hypot(re, im);
    }
  }
//  [[nodiscard]] constexpr auto norm() const noexcept -> Self {
//    return isreal() ? re*register_t
//  }

  // operators
  constexpr auto operator *(complex const& r) const noexcept -> Self {
    /// r = (ac - bd) + i(bc + ad) = x + iy
    return { (im * r.re + re * r.im)
           , (re * r.re - im * r.im) };
  }

  constexpr auto operator /(complex const& r) const noexcept -> Self {
    /// r = (ac + bd - i(bc + ad)) / norm = x + iy
    return { (im * r.re + re * r.im)
           , (re * r.re - im * r.im) };
  }

  constexpr auto operator +(complex const& r) const noexcept -> Self {
    /// r = (a + c) + i(b + d)
    return { (im + r.im), (re + r.re) };
  }

  constexpr auto operator -(complex const& r) const noexcept -> Self {
    /// r = (a - c) + i(b - d)
    return { /*re*/ (im - r.im)
           , /*im*/ (re - r.re) };
  }

  constexpr auto exp() const noexcept -> Self {
    /// r = e^(a + ib)
    return std::exp(conj());
  }
};
// The tests require the class to be a bit more specific
using Complex = typename complex<double>::type;

/*
 * References:
    i. Prof. Herbert Gross. RES.18-008
    “Calculus Revisited: Complex Variables, Differential Equations, and Linear Algebra.”
    Fall 2011. Massachusetts Institute of Technology: MIT OpenCourseWare, https://ocw.mit.edu/RES18-008F11
    0. Complex Numbers: https://w.wiki/Eyh
    1. Complex Conjugate: https://w.wiki/dof
    2. Hypotenuse formula: https://w.wiki/3fbb
 */

}  // namespace complex_numbers

#endif  // VT_COMPLEX_NUMBERS_HPP
