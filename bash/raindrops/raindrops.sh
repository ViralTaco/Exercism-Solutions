#!/usr/bin/env bash

main() {
  local out=''
  ! (( $1 % 3 )) && out="${out}Pling"
  ! (( $1 % 5 )) && out="${out}Plang"
  ! (( $1 % 7 )) && out="${out}Plong"
  [[ -z "$out" ]] && out="$1"
  
  printf "$out\n"
  exit 0
}

main "$@"
