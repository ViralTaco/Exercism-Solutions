#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/viraltaco/Exercism/cpp/pangram/build
  /Users/viraltaco/Exercism/cpp/pangram/build/Debug/pangram
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/viraltaco/Exercism/cpp/pangram/build
  /Users/viraltaco/Exercism/cpp/pangram/build/Release/pangram
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/viraltaco/Exercism/cpp/pangram/build
  /Users/viraltaco/Exercism/cpp/pangram/build/MinSizeRel/pangram
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/viraltaco/Exercism/cpp/pangram/build
  /Users/viraltaco/Exercism/cpp/pangram/build/RelWithDebInfo/pangram
fi

