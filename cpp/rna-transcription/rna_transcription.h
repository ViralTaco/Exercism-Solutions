#ifndef _rna_transcription_h_
#define _rna_transcription_h_
#include <string_view>
#include <string>

namespace rna_transcription {
  char to_rna(const char) noexcept;
  std::string to_rna(std::string);
}

#endif
