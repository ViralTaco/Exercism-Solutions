#!/usr/bin/env bash

main() {
  if [[ $# -ne 1 ]] || ! [[ "$1" =~ ^[0-9]+$ ]]; then 
    echo 'Usage: leap.sh <year>'
    return 1
  elif !(( $1 % 4 )) && (( $1 % 100 )) || !(( $1 % 400 )); then
    echo true
  else
    echo false
  fi
}

main "$@"
