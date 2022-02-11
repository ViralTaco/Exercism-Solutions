using System.Linq;
using System.Text.RegularExpressions;

public static class Isogram
{
    public static bool IsIsogram(string word)
    {
        var parsed = Regex.Replace(word.ToLower(), @"[^a-z]", "");
        return parsed.Distinct().Count() == parsed.Length;
    }
}
