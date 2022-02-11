#ifndef VT_RESISTOR_COLOR_H
#define VT_RESISTOR_COLOR_H

typedef
enum { BLACK  = 0
     , BROWN  = 1
     , RED    = 2
     , ORANGE = 3
     , YELLOW = 4
     , GREEN  = 5
     , BLUE   = 6
     , VIOLET = 7
     , GREY   = 8
     , WHITE  = 9
         , kMinBand = BLACK
         , kMaxBand = WHITE
     }
resistor_band_t, band_t;

band_t color_code_solo(band_t color);
band_t color_code_arr(band_t[] colors);
band_t const* colors(void);

#define color_code(BandType_v) \
  _Generic((BandType_v)        \
  ,  band_t*: color_code_arr   \
  ,  default: color_code_solo  \
  )(BandType_v)
/// copyright 2021 viraltaco_ <https://opensource.org/licenses/MIT>
#endif // VT_RESISTOR_COLOR_H
