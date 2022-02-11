<?php
function distance(string $strand_a, string $strand_b) : int {
  $a_len = strlen($strand_a);
  
  if ($a_len !== strlen($strand_b)) {
    throw new InvalidArgumentException('DNA strands must be of equal length.');
  } 
  
  $diff_count = 0;
  
  for ($i = 0; $i < $a_len; ++$i) {
    if ($strand_a[$i] !== $strand_b[$i]) {
      ++$diff_count;
    }
  }
  
  return $diff_count;
}
