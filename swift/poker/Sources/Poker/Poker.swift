struct Hand: CustomStringConvertible {
  var cards = [Card]()
  var description: String {
    var temp = String()
    
    for card in cards {
      temp += "\(card) "
    }
    
    return temp
  }
  
  init?(_ hand: String) {
    let cards = hand.split(separator: Character(" "))
    for each in cards {
      guard let card = Card(each) else { return nil }
      self.cards += [card]
    }
    guard self.cards.count == 5 else { return nil }
  } // init?
}

class Poker {
  var name = String()
  var hands = [Hand]()
  
  init?(_ hands: [String]) {
    for each in hands {
      guard let hand = Hand(each) else {
        return nil
      }
      self.hands += [hand]
    }
  }
}
