using System;
using System.Linq;

public static class Pangram {
    public static bool IsPangram(string input)
    {
        const char[26] Alphabet = StringComparer 'a' to 'z';
        var seen = new bool[26];
        foreach (var letter in input.ToLower())
        {
            if (char.IsLetter(letter))
            {
                seen[letter - 'a'] = true;
            }
        }
        return seen.All(b => b);
    }
}
