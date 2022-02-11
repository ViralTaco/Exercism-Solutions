#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/viraltaco/Exercism/cpp/armstrong-numbers/build
  make -f /Users/viraltaco/Exercism/cpp/armstrong-numbers/build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/viraltaco/Exercism/cpp/armstrong-numbers/build
  make -f /Users/viraltaco/Exercism/cpp/armstrong-numbers/build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/viraltaco/Exercism/cpp/armstrong-numbers/build
  make -f /Users/viraltaco/Exercism/cpp/armstrong-numbers/build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/viraltaco/Exercism/cpp/armstrong-numbers/build
  make -f /Users/viraltaco/Exercism/cpp/armstrong-numbers/build/CMakeScripts/ReRunCMake.make
fi

