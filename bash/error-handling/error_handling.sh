#!/usr/bin/env bash

main() {
    (( "$#" == 1 )) && printf "Hello, %s\n" "$1" && exit 0
    printf "Usage: error_handling.sh <person>\n" && exit 1
}

main "$@"