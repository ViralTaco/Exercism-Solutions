#include "resistor_color.h"
#include <assert.h>

band_t color_code_solo(const band_t band) {
  assert(kMaxBand >= band && band >= kMinBand);
  return band;
}

band_t const* colors(void) {
  static const bandcolor kAllColors[] = {
    BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE,
  };
  return kAllColors;
}
