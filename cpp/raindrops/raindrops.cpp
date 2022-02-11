#include "raindrops.h" // std::{ string, to_string }

auto raindrops::convert(const unsigned droplets) -> std::string {
  auto result = std::string();
  if (droplets % 3 == 0) { result += "Pling"; }
  if (droplets % 5 == 0) { result += "Plang"; }
  if (droplets % 7 == 0) { result += "Plong"; }

  if (result.empty()) {
    return std::to_string(droplets);
  } else {
    return result;
  }
}
