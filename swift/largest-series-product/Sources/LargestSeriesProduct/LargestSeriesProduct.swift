fileprivate extension Array {
  func slice(size: Int, by: Int = 1) -> [[Element]] {
    return stride(from: 0, to: self.count, by: by).map {
      Array(self[$0..<Swift.min($0 + size, self.count)])
    }
  }
}

class NumberSeries {
  public enum NumberSeriesError: Error {
    case spanLongerThanStringLength
    case invalidCharacter
    case negativeSpan
  }
  
  private let numbers: [Int]
  private let length: Int
  private let isValidString: Bool
  
  init(_ numbers: String) {
    self.numbers = numbers.compactMap { Int(String($0)) }
    self.length = numbers.count
    self.isValidString = self.numbers.count == self.length
  }
  
  public func largestProduct(_ span: Int) throws -> Int {
    guard self.isValidString else {
      throw NumberSeriesError.invalidCharacter
    }
    guard span <= self.length else {
      throw NumberSeriesError.spanLongerThanStringLength
    }
    guard span > 0 else {
      if span == 0 { return 1 }
      else { throw NumberSeriesError.negativeSpan }
    }
    
    let slices = self.numbers.slice(size: span)
    return NumberSeries.biggestProduct(of: slices)
  }
  
  private static func biggestProduct(of slices: [[Int]]) -> Int {
    let sliceLength = slices.first?.count ?? 0
    var product = 0
    
    for slice in slices {
      guard slice.count == sliceLength else { break }
      
      let total = slice.reduce(1, { last, current in last * current })
      if total > product {
        product = total
      }
    }
    
    return product
  }
}
