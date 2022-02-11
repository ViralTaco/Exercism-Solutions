#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/viraltaco/Exercism/cpp/armstrong-numbers/build
  /Users/viraltaco/Exercism/cpp/armstrong-numbers/build/Debug/armstrong-numbers
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/viraltaco/Exercism/cpp/armstrong-numbers/build
  /Users/viraltaco/Exercism/cpp/armstrong-numbers/build/Release/armstrong-numbers
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/viraltaco/Exercism/cpp/armstrong-numbers/build
  /Users/viraltaco/Exercism/cpp/armstrong-numbers/build/MinSizeRel/armstrong-numbers
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/viraltaco/Exercism/cpp/armstrong-numbers/build
  /Users/viraltaco/Exercism/cpp/armstrong-numbers/build/RelWithDebInfo/armstrong-numbers
fi

