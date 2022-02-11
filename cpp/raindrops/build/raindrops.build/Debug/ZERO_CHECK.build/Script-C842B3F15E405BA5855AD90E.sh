#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/viraltaco/Exercism/cpp/raindrops/build
  make -f /Users/viraltaco/Exercism/cpp/raindrops/build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/viraltaco/Exercism/cpp/raindrops/build
  make -f /Users/viraltaco/Exercism/cpp/raindrops/build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/viraltaco/Exercism/cpp/raindrops/build
  make -f /Users/viraltaco/Exercism/cpp/raindrops/build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/viraltaco/Exercism/cpp/raindrops/build
  make -f /Users/viraltaco/Exercism/cpp/raindrops/build/CMakeScripts/ReRunCMake.make
fi

