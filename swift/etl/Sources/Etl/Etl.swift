public enum ETL {
    func transform(_ old: [Int: [Character]]) -> [(String, Int)] {
        var new = [(String, Int)]()
        for (score, array) in old {
            for letter in array {
                new.append((letter.lowercased(), score))
            }
        }
        return new
    }
}
