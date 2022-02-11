<?php

function parse_binary(string $binary) : int {
   $decimal = (int) 0;
   $exp = strlen($binary) - 1;
   
   foreach (str_split($binary) as $bit) {
      if ($bit != '1' && $bit != '0') {
         throw new InvalidArgumentException(
            'Expected binary bit. Argument contained: '.$bit);
      }
      $decimal += $bit << $exp;
      --$exp;
   }
   
   return $decimal;
}
