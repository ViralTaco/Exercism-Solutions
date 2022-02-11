#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/viraltaco/Desktop/projects/Exercism/cpp/acronym/build
  /Users/viraltaco/Desktop/projects/Exercism/cpp/acronym/build/Debug/acronym
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/viraltaco/Desktop/projects/Exercism/cpp/acronym/build
  /Users/viraltaco/Desktop/projects/Exercism/cpp/acronym/build/Release/acronym
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/viraltaco/Desktop/projects/Exercism/cpp/acronym/build
  /Users/viraltaco/Desktop/projects/Exercism/cpp/acronym/build/MinSizeRel/acronym
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/viraltaco/Desktop/projects/Exercism/cpp/acronym/build
  /Users/viraltaco/Desktop/projects/Exercism/cpp/acronym/build/RelWithDebInfo/acronym
fi

