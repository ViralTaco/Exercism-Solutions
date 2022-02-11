#include "two_fer.h" // std::string

auto two_fer::two_fer(std::string const& name) -> std::string {
  return { "One for " + name + ", one for me." };
}
