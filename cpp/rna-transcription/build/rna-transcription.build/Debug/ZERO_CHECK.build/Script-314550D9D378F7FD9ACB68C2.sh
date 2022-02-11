#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build
  make -f /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build
  make -f /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build
  make -f /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build
  make -f /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build/CMakeScripts/ReRunCMake.make
fi

