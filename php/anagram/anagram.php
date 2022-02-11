<?php

function count_letters(string $word) : Array {
  $letters = [];
  
  foreach (str_split($word) as $key => $letter) {
    if (isset($letters[$letter])) {
      $letters[$letter] += 1;
    } else {
      $letters[$letter] = 1;
    }
  }
  
  return $letters;
}

function is_anagram(string $a, string $b) : bool {
  return strlen($a) == strlen($b)
      && $a != $b
      && count_letters($a) == count_letters($b);
}

function anagrams(string $target, Array $words) : Array {
  $lowered_target = strtolower($target);
  $anagrams = [];
  
  foreach ($words as $word) {
    $lowered = strtolower($word);
    if (is_anagram($lowered_target, $lowered)) {
      $anagrams[] = $word; // weirdest syntax ever.
    }
  }
  
  return $anagrams;
}

function detectAnagrams(string $target, Array $words) : Array {
  return anagrams($target, $words);
}
