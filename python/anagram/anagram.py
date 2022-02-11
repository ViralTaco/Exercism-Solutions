def is_anagram(lhs: str, rhs: str) -> bool :
    # First we check length since both str need to be of equal length
    # This avoids creating two objects when the strs are of != length
    return len(lhs) == len(rhs) and lhs != rhs and sorted(lhs) == sorted(rhs)

def find_anagrams(word: str, candidates: [str]) -> [str] :
    anagrams = []
    word = word.lower()
    
    for candidate in candidates:
        if is_anagram(word, candidate.lower()):
            anagrams.append(candidate)
    
    return anagrams