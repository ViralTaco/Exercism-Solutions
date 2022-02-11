class Cipher {
  private static let alphabet = zip("abcdefghijklmnopqrstuvwxyz".enumerated(),
                                    0...25)
  private let
  
  init() {
    
  }
  
  init?(key: String) {
    guard !key.contains(where: { !$0.isLowercase }) else {
      return nil
    }
  }
  
}


