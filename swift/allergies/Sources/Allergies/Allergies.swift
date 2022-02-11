enum Allergy: UInt {
  case eggs = 1
  case peanuts = 2
  case shellfish = 4
  case strawberries = 8
  case tomatoes = 16
  case chocolate = 32
  case pollen = 64
  case cats = 128
}

class Allergies {
  private let raw: UInt
  
  init(_ raw: UInt) {
    self.raw = raw
  }
  
  public func hasAllergy(_ allergy: Allergy) -> Bool {
    return self.raw & allergy.rawValue != 0
  }
}
