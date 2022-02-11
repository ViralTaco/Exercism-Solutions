public class BinarySearchTree : Equatable {
    var left: BinarySearchTree? = nil
    var right: BinarySearchTree? = nil
    var data: Int
    
// inits:
    init(_ data: Int) { self.data = data }

// instance methods:
    func insert(_ x: Int) {
        if x > data {
            if right != nil { right!.insert(x) }
            else if right != self { right = BinarySearchTree(x) }
        } else if left != self { // x <= data
            if left != nil { left?.insert(x) }
            else { left = BinarySearchTree(x) }
        }
    }
    
    func allData() -> [Int] {
        return (left?.allData() ?? []) + [data] + (right?.allData() ?? [])
    }

// operators:
    public static func == (a: BinarySearchTree, b: BinarySearchTree) -> Bool {
        return a.data == b.data
    }
}
