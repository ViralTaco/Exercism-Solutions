//
//  Cards.swift
//  Poker
//
//  Created by viraltaco_ on 20200002.
//

enum Suit: Substring {
  case diamonds = "♢"
  case hearts = "♡"
  case spades = "♤"
  case clubs = "♧"
}

enum Rank: Substring {
  enum RankError: Error {
    case invalidRank(_ message: String)
  }
  case two = "2"
  case three = "3"
  case four = "4"
  case five = "5"
  case six = "6"
  case seven = "7"
  case eight = "8"
  case nine = "9"
  
  // courts:
  case ace = "A"
  case jack = "J"
  case queen = "Q"
  case king = "K"
  
  case errorKind
  
  func value() throws -> Int? {
    switch self {
    case .ace:
      return 13
    case .king:
      return 12
    case .queen:
      return 11
    case .jack:
      return 10
    case .errorKind:
      let message = "\(self.rawValue) is an invalid card rank"
      throw RankError.invalidRank(message)
    default:
      return Int(self.rawValue)
    }
  } // func value() -> Int?
}

struct Card: CustomStringConvertible {
  var rank: Rank, suit: Suit
  var description: String {
    return "\(rank)\(suit)"
  }
  
  init?(_ card: Substring) {
    guard card.count == 2 else { return nil }
    let split = card.split(separator: Character(""))
    guard let rank = Rank(rawValue: split[0]),
          let suit = Suit(rawValue: split[1]) else {
      return nil
    }
    self.rank = rank
    self.suit = suit
  }
}
