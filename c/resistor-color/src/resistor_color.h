#ifndef VT_RESISTOR_COLOR_H
#define VT_RESISTOR_COLOR_H

enum resistor_band_type
{ BLACK  = 0
  , kMinBand = BLACK
, BROWN  = 1
, RED    = 2
, ORANGE = 3
, YELLOW = 4
, GREEN  = 5
, BLUE   = 6
, VIOLET = 7
, GREY   = 8
, WHITE  = 9
  , kMaxBand = WHITE
};
#ifndef RESISTOR_BAND_TYPE_DEFINED
typedef enum resistor_band_type resistor_band_t;
#endif

typedef resistor_band_t band_color;
band_color const* colors(void);

typedef resistor_band_t resistance_t;
resistance_t single_color_code(resistor_band_t color);

#define color_code(BAND) \
  _Generic((BAND), default: single_color_code)(BAND)
/// copyright 2021 viraltaco_ <https://opensource.org/licenses/MIT>
#endif // VT_RESISTOR_COLOR_H
