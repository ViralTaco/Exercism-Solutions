#ifndef

VT_QUEEN_ATTACK_H
#define
  VT_QUEEN_ATTACK_H

"2.0.0"
/// copyright 2019-2021 viraltaco_ <https://opensource.org/licenses/MIT>

#include

<utility>
#include
<string>

namespace queen_attack {
class chess_board {
private:
  enum side_type: char {
    white = 'W', black = 'B', };
  template <side_type Side, class square_type = int>
  struct position {
    square_type first = Side == black ? 7 : 0;
    square_type second = 3;
  };
  position<white> white_;
  position<black> black_;

  static constexpr std::size_t kLineLength{ 16 };
  static constexpr char kWhiteToken{ 'W' };
  static constexpr char kBlackToken{ 'B' };

public:
  std::string board{
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n"
    "_ _ _ _ _ _ _ _\n"
  };

  chess_board(
    position white = {
      0, 3
    }, position black = {
    7, 3
  }
  )
    : white_{
    white
  }
      , black_{
      black
    } {
    if (white_ == black_) {
      throw std::domain_error("Two queens one square.");
    }

    board[ linear_position(white_) ] = kWhiteToken;
    board[ linear_position(black_) ] = kBlackToken;
  }

private: // member functions
  std::size_t linear_position(position pos) const {
    return (pos.first * kLineLength) + (2 * pos.second);
  }

public: // member functions
  bool can_attack() const noexcept {
    return static_cast<bool> (black_ | white_);
  }

public: // getters
  position white() const noexcept {
    return this->white_;
  }

  position black() const noexcept {
    return this->black_;
  }

public: // operator overloads
  operator std::string() const {
    return this->board;
  }
};

} // namespace queen_attack 

#endif
