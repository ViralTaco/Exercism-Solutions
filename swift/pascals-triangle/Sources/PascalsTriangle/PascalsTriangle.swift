class PascalsTriangle {
  private let height: Int
  
  public var rows: [[Int]] {
    guard height > 0 else { return [[Int]]() }
    var rows = [[Int]]()
    
    for x in 1...height {
      var row = [1]
      var coef = 1
      for y in 1..<x {
        coef = coef * (x - y) / y
        row += [coef]
      }
      rows += [row]
    }
    return rows
  }
  
  init(_ height: Int) {
    self.height = height
  }
}
