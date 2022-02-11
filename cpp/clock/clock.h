#ifndef VT_CLOCK_H
#define VT_CLOCK_H
#include <string>
#include <sstream>

namespace date_independent {
class clock {
private:
  static constexpr auto kDayHours_ = 24;
  static constexpr auto kHourMinutes_ = 60;

public:
  int hour;  
  int minute;
  
  constexpr clock(const int h, const int m) noexcept
    : hour{ h }
    , minute{ m }
  { regularize(); }
  
  static auto at(const int h, const int m) noexcept {
    return clock(h, m);
  }
  
  auto regularize() noexcept -> void {
    while (minute < 0 ) { --hour; minute += kHourMinutes_; }
    while (minute > 59) { ++hour; minute -= kHourMinutes_; }
    while (hour < 0 ) { hour += kDayHours_; }
    while (hour > 23) { hour -= kDayHours_; }
  }
  
  auto plus(int mins) noexcept -> clock& {
    minute += mins;
    regularize();
    return *this;
  }
  
  auto to_string() const -> std::string {
    std::stringstream result;
    
    if (hour < 10) { result << "0"; }
    result << hour << ":";
    
    if (minute < 10) { result << "0"; }
    result << minute;
    
    return result.str();
  }
  
  explicit operator std::string() const { return to_string(); }

  auto operator +=(int mins) noexcept -> clock& {
    return plus(mins);
  }
  
  auto operator ==(clock const& other) const noexcept -> bool {
    return minute == other.minute
       and hour   == other.hour;
  }
  
  auto operator !=(clock const& other) const noexcept -> bool {
    return minute != other.minute
        or hour   != other.hour;
  }
};
} // namespace date_independent

#endif
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>
