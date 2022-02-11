fileprivate extension Array {
  func pairs(size: Int, by: Int = 1) -> [(Element, Element)] {
    return stride(from: 0, to: self.count, by: by).map {
      (self[$0], self[Swift.min($0 + size, self.count - 1)])
    }
  }
}

infix operator ±=
infix operator <=>
struct Domino {
  var left: Int
  var right: Int
  
  init(_ left: Int, _ right: Int) {
    self.left = left
    self.right = right
  }
  
  init(_ tuple: (Int, Int)) {
    self.left = tuple.0
    self.right = tuple.1
  }
  
  static func == (_ lhs: Domino, _ rhs: Domino) -> Bool {
    return (lhs.left == rhs.left && lhs.right == rhs.right)
        || (lhs.left == rhs.right && lhs.right == rhs.left)
  }
  
  static func <=> (_ lhs: Domino, _ rhs: Domino) -> Bool {
    return lhs.left == rhs.right
  }
  
  static func != (_ lhs: Domino, _ rhs: Domino) -> Bool {
    return !(lhs == rhs)
  }
  
  static func ±= (_ lhs: Domino, _ rhs: Domino) -> Bool {
    return lhs.left == rhs.left || lhs.left == rhs.right
        || lhs.right == rhs.right || lhs.right == rhs.left
  }
  
}


class Dominoes {
  private let input: [Domino]
  public var chained: Bool {
    guard let beg = input.first else { return false }
    guard let end = input.last else { return false }
    guard input.count > 1 else { return beg <=> end }
    guard beg ±= end else { return false }
    
    for (a, b) in input.pairs(size: 2) {
      guard a ±= b else { return false }
    }
    return true
  }
  
  init(_ input: [(Int, Int)]) {
    self.input = input.map { Domino($0) }
  }
}
