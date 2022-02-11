import Foundation

fileprivate extension String {
  init(repeating: Character, count: Int = 1) {
    self = String(Array(repeating: repeating, count: count))
  }
  
  subscript(_ intRange: Range<Int>) -> String? {
    let (start, end) = (self.startIndex, self.endIndex)
    let (min, max) = (intRange.lowerBound, intRange.upperBound)
    if let begin = self.index(start, offsetBy: min, limitedBy: end) {
      if let until = self.index(start, offsetBy: max, limitedBy: end) {
        return String(self[begin..<until])
      }
    }
    return nil
  }
}

public struct PhoneNumber: CustomStringConvertible {
  private static let length = 10
  private let raw: String

  public var number: String {
    let rawLength = self.raw.count
    guard rawLength == Self.length else {
      if rawLength == Self.length + 1 && raw.first == "1" {
        return String(self.raw.dropFirst())
      } else {
        return String(repeating: "0", count: Self.length)
      }
    }
    return self.raw
  }
  
  public var areaCode: String { self.number[0..<3]! }

  public var description: String {
    "(\(self.areaCode)) \(self.number[3..<6]!)-\(self.number[6..<Self.length]!)"
  }
  
  init(_ tel: String) {
    self.raw = tel.filter { $0.isNumber }
  }
}
