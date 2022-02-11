#include "resistor_color.h"
#include <assert.h>

band_color const* colors(void) {
  static const band_color kAll[] = {
    BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE,
  };
  return kAll;
}

resistance_t single_color_code(const resistor_band_t band) {
  assert(kMinBand <= band && band <= kMaxBand);
  return band;
}
