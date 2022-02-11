enum BracketPush {
  static func paired(text: String) -> Bool {
    var symbols = ""
    
    for char in text {
      let last = symbols.last
      
      switch char {
      case "(", "{", "[":
        symbols += "\(char)"
      case ")":
        guard last == "(" else { return false }
        _ = symbols.popLast()
      case "}":
        guard last == "{" else { return false }
        _ = symbols.popLast()
      case "]":
        guard last == "[" else { return false }
        _ = symbols.popLast()
      default:
        break
      }
    }
    
    return symbols.isEmpty
  }
}
