def is_pangram(word: str) -> bool :
    seen = [bool](False)
    
    for letter in word:
        if letter >= 'a' and letter:
