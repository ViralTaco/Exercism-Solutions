fileprivate func size(of matrix: [String]) -> (width: Int, height: Int) {
  guard matrix.first != nil else {
    return (0, 0)
  }
  
  guard matrix.first?.count != 0 else {
    return (0, matrix.count)
  }
  
  var width = 0
  
  for row in matrix {
    if row.count > width {
      width = row.count
    }
  }
  
  return (width, matrix.count)
}

fileprivate func
makeMatrix(width: Int, height: Int, content: Character = " ") -> [[Character]] {
  let inner = Array(repeating: content, count: width)
  return Array(repeating: inner, count: height)
}

enum Transpose {
  public static func transpose(_ matrix: [String]) -> [String] {
    let dimensions = size(of: matrix)
    var rotated = makeMatrix(width: dimensions.height,
                             height: dimensions.width)
    for i in 0..<dimensions.height {
      for row in matrix {
        if let letter = row[row.index(row.startIndex, offsetBy: i,
                                      limitedBy: row.endIndex)
                                        ?? row.startIndex] {
          rotated[i] = letter
        }
      }
    }
  }
}
