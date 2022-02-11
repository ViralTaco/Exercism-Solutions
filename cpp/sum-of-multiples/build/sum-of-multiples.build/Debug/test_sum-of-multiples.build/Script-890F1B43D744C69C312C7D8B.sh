#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/viraltaco/Exercism/cpp/sum-of-multiples/build
  /Users/viraltaco/Exercism/cpp/sum-of-multiples/build/Debug/sum-of-multiples
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/viraltaco/Exercism/cpp/sum-of-multiples/build
  /Users/viraltaco/Exercism/cpp/sum-of-multiples/build/Release/sum-of-multiples
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/viraltaco/Exercism/cpp/sum-of-multiples/build
  /Users/viraltaco/Exercism/cpp/sum-of-multiples/build/MinSizeRel/sum-of-multiples
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/viraltaco/Exercism/cpp/sum-of-multiples/build
  /Users/viraltaco/Exercism/cpp/sum-of-multiples/build/RelWithDebInfo/sum-of-multiples
fi

