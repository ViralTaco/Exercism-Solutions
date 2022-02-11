<?php

function toDecimal(string $trinary) : int {
  $exp = strlen($trinary) - 1;
  $decimal = 0;
  
  foreach (str_split($trinary) as $digit) {
    if ($digit > 2) { return 0; }
    $decimal += $digit * pow(3, $exp); 
    --$exp;
  }
  
  return $decimal;
}

