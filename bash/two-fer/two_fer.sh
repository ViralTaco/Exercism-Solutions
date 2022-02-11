#!/usr/bin/env bash

main() {
  if (( $# >= 1 )); then 
    local name="$1"
  else 
    local name="you"
  fi

  command printf "One for %s, one for me." "$name"
}

main "$@"
