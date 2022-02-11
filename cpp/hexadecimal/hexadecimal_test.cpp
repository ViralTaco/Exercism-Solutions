#include "hexadecimal.hpp"
#include <string_view> // std::string_view
#include <cstdio>      // std::{ (sn)printf, size_t }
#include <array>       // std::array
#include <cassert>     // assert macro

/*
 * Half of catch is UB. So if is UB it does the same: anything.
 * Otherwise it's superior. It didn't want to link so I fixed it.
 */
template <class CharT = char, std::size_t kLen, std::size_t kCon>
static void test(
  CharT const(& func)[kLen], CharT const(& condstr)[kCon], const bool cond
) {
  std::printf("%-35s", func);
  if (cond) std::puts("✅ Success!");
  else      std::printf("Failed.\n\t\t'%s'\n", condstr);
}
// My implementation doesn't have <source_location> yet. So we use __func__
#define REQUIRE(COND) (test(__func__, #COND, (COND)))

static void test_hex_1_is_decimal_1() {
  REQUIRE(0x1 == hexadecimal::convert("1"));
}

static void test_hex_c_is_decimal_12() {
  REQUIRE(0xc == hexadecimal::convert("c"));
}

static void test_hex_10_is_decimal_16() {
  REQUIRE(0x10 == hexadecimal::convert("10"));
}

static void test_hex_af_is_decimal_175() {
  REQUIRE(0xaf == hexadecimal::convert("af"));
}

static void test_hex_100_is_decimal_256() {
  REQUIRE(0x100 == hexadecimal::convert("100"));
}

static void test_hex_19ace_is_decimal_105166() {
  REQUIRE(0x19ace == hexadecimal::convert("19ace"));
}

static void test_invalid_hex_is_decimal_0() {
  REQUIRE(0 == hexadecimal::convert("carrot"));
}

static void test_black() {
  REQUIRE(0x000000 == hexadecimal::convert("000000"));
}

static void test_white() {
  REQUIRE(0xffffff == hexadecimal::convert("ffffff"));
}

static void test_yellow() {
  REQUIRE(0xffff00 == hexadecimal::convert("ffff00"));
}

static void test_0_to_0xffffff() {
  // This is ugly but I didn't want to think too much. (It's 2350hrs)
  auto arr = std::array<char, 8>{};
  for (auto i = 0x000000u; i < 0xffffff; ++i) {
    assert(0 <= std::snprintf(arr.data(), 8, "%x", i));
    assert(i == hexadecimal::convert(std::string_view(arr.data(), 6)));
  }
  REQUIRE(0xFFFFFF == hexadecimal::convert("ffffff"));
}
#undef REQUIRE

auto main() -> int {
  test_hex_1_is_decimal_1();
  test_hex_c_is_decimal_12();
  test_hex_10_is_decimal_16();
  test_hex_af_is_decimal_175();
  test_hex_100_is_decimal_256();
  test_hex_19ace_is_decimal_105166();
  test_invalid_hex_is_decimal_0();
  test_black();
  test_white();
  test_yellow();
  test_0_to_0xffffff();
#ifdef EXERCISM_RUN_ALL_TESTS
#endif
}
