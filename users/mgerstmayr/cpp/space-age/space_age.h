#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

#include <map>
#include <string>
#include <string_view>
#include <array>

using namespace std::literals::string_view_literals;
namespace space_age {

const std::map<std::string_view, double> planet_factors{
    {"earth"sv, 1.0},        {"mercury"sv, 0.2408467}, {"venus"sv, 0.61519726},
    {"mars"sv, 1.8808158},   {"jupiter"sv, 11.862615}, {"saturn"sv, 29.447498},
    {"uranus"sv, 84.016846}, {"neptune"sv, 164.79132},
};

class space_age {
public:
  explicit space_age(long age_in_seconds) : age_in_seconds_{age_in_seconds} {}

  [[nodiscard]] auto seconds() const noexcept { return age_in_seconds_; }
  [[nodiscard]] auto on_earth() const noexcept { return earth_years_; }

  [[nodiscard]] auto on_mercury() const noexcept {
    return on_earth() / planet_factors.at("mercury");
  }

  [[nodiscard]] auto on_venus() const noexcept {
    return on_earth() / planet_factors.at("venus");
  }

  [[nodiscard]] auto on_mars() const noexcept {
    return on_earth() / planet_factors.at("mars");
  }

  [[nodiscard]] auto on_jupiter() const noexcept {
    return on_earth() / planet_factors.at("jupiter");
  }

  [[nodiscard]] auto on_saturn() const noexcept {
    return on_earth() / planet_factors.at("saturn");
  }

  [[nodiscard]] auto on_uranus() const noexcept {
    return on_earth() / planet_factors.at("uranus");
  }

  [[nodiscard]] auto on_neptune() const noexcept {
    return on_earth() / planet_factors.at("neptune");
  }

private:
  long age_in_seconds_;
  const double earth_years_{age_in_seconds_ / 31557600.0};
  enum planet { Earth, Mercury, /*...*/ };
  static constexpr auto orbital_period = [] {
    auto self = std::array<double, 8u>();
    self[Earth]   = 1.0;
    self[Mercury] = 0.2408467;
    // ...
    return self;
  }();
};

} // namespace space_age

#endif // SPACE_AGE_H
