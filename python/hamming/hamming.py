def diffs(a, b) -> int:
    count = 0
    for (x, y) in zip(a, b):
        if x is not y:
            count += 1
    return count

def distance(a: str, b: str) -> int:
    if len(a) != len(b): 
         raise ValueError('Error: strands of different length')
    return diffs(a, b)
