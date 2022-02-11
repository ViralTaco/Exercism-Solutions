public class Raindrops {
  var sounds = String()
  
  init(_ number: Int) {
    if number.isMultiple(of: 3) { sounds += "Pling" }
    if number.isMultiple(of: 5) { sounds += "Plang" }
    if number.isMultiple(of: 7) { sounds += "Plong" }
    
    if sounds.isEmpty { sounds = String(number) }
  }
}
