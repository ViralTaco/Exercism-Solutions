import Foundation

precedencegroup PowerPrecedence { higherThan: MultiplicationPrecedence }
infix operator **: PowerPrecedence
fileprivate extension Int {
  static func ** (_ lhs: Int, _ rhs: Int) -> Int {
    guard rhs != 2 else {
      return lhs * lhs
    }
    return Int(pow(Double(lhs), Double(rhs)))
  }
}

class Triplet {
  typealias Triple = (a: Int, b: Int, c: Int)
  private let triple: Triple
  
  public var sum: Int {
    return triple.a + triple.b + triple.c
  }
  public var product: Int {
    return triple.a * triple.b * triple.c
  }
  public var isPythagorean: Bool {
    return triple.a ** 2 + triple.b ** 2 == triple.c ** 2
  }
  
  init(_ a: Int, _ b: Int, _ c: Int) {
    self.triple = (a: a, b: b, c: c)
  }
  
  public static func fromWhere(_ min: Int = 1,
                               maxFactor max: Int,
                               sum: Int? = nil) -> [Triplet] {
    var triplets = [Triplet]()
    
    for a in min...max {
      for b in a...max {
        for c in b...max {
          let triplet = Triplet(a, b, c)
          if triplet.isPythagorean {
            triplets.append(triplet)
          }
        } // for c
      } // for b
    } // for a
    
    return sum != nil ? triplets.filter { $0.sum == sum } : triplets
  }
}
