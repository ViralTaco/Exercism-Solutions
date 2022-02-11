#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build
  /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build/Debug/rna-transcription
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build
  /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build/Release/rna-transcription
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build
  /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build/MinSizeRel/rna-transcription
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build
  /Users/viraltaco/Desktop/projects/Exercism/cpp/rna-transcription/build/RelWithDebInfo/rna-transcription
fi

