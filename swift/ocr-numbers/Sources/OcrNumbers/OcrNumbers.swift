struct OCR {
  enum OCRError: Error {
    case invalidNumberOfLines
    case invalidNumberOfColumns
  }
  var raw: [Substring]
  var num: Int?

  public init(_ text: String) {
    self.raw = text.split(separator: "\n")
    self.num = try! Self.🧮(self.raw)
  }

  static func 🧮(_ raw: [Substring]) throws -> Int? {
    guard raw.count.isMultiple(of: 4) else {
      throw OCRError.invalidNumberOfLines
    }
    for row in raw.indices {
      debugPrint(row)
    }
    return nil
  }

  public func converted() throws -> String? {
    return raw.description
  }
}
