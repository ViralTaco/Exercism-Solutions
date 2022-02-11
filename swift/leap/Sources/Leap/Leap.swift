public struct Year {
  var isLeapYear: Bool
  
  init(calendarYear year: UInt) {
    if !year.isMultiple(of: 100) {
      self.isLeapYear = year.isMultiple(of: 4)
    } else {
      self.isLeapYear = year.isMultiple(of: 400)
    }
  }
}
