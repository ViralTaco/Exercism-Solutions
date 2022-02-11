#include "protein_translation.h"
#include <algorithm>
#include <type_traits>

namespace protein_translation {
using namespace std;
using namespace std::literals;

struct Protein {
public: // MARK: class constants
  static constexpr auto
    methionine    = "Methionine"sv,
    phenylalanine = "Phenylalanine"sv,
    leucine       = "Leucine"sv,
    serine        = "Serine"sv,
    tyrosine      = "Tyrosine"sv,
    cysteine      = "Cysteine"sv,
    tryptophan    = "Tryptophan"sv,
    stop          = "STOP"sv;

public: // MARK: class methods
  static constexpr auto is_stop(string_view codon) noexcept {
    return codon == "UAA" or codon == "UAG"
        or codon == "UGA";
  }

  static constexpr auto is_methionine(string_view codon) noexcept {
    return codon == "AUG";
  }
  
  static constexpr auto is_phenylalanine(string_view codon) noexcept {
    return codon == "UUU" or codon == "UUC";
  }
  
  static constexpr auto is_leucine(string_view codon) noexcept {
    return codon == "UUA" or codon == "UUG";
  }
  
  static constexpr auto is_serine(string_view codon) noexcept {
    return codon == "UCU" or codon == "UCC"
        or codon == "UCA" or codon == "UCG";
  }
  
  static constexpr auto is_tyrosine(string_view codon) noexcept {
    return codon == "UAU" or codon == "UAC";
  }
  
  static constexpr auto is_cysteine(string_view codon) noexcept {
    return codon == "UGU" or codon == "UGC";
  }
  
  static constexpr auto is_tryptophan(string_view codon) noexcept {
    return codon == "UGG";
  }
  
};

constexpr auto translate(string_view codon) -> string_view {
  if (codon.size() != 3 or Protein::is_stop(codon)) {
    //!\\ GOTO RETURN.
  } else if (Protein::is_methionine(codon)) {
    return Protein::methionine;
  } else if (Protein::is_phenylalanine(codon)) {
    return Protein::phenylalanine;
  } else if (Protein::is_leucine(codon)) {
    return Protein::leucine;
  } else if (Protein::is_serine(codon)) {
    return Protein::serine;
  } else if (Protein::is_tyrosine(codon)) {
    return Protein::tyrosine;
  } else if (Protein::is_cysteine(codon)) {
    return Protein::cysteine;
  } else if (Protein::is_tryptophan(codon)) {
    return Protein::tryptophan;
  }
  
  return Protein::stop;
}

VT_DYCOEX auto proteins(string_view codons) -> vector<string> {
  constexpr auto seg = 3u;
  const auto len = codons.size();
  
  auto proteins = vector<string>{};
  proteins.reserve((len / seg) + 1);
  
  for (auto i = 0; (i + seg) <= len; i += seg) {
    const auto protein = translate(codons.substr(i, seg));
    if (protein == "STOP") {
      break; // From the loop.
    } else {
      proteins.push_back(string(protein));
    }
  }
  return proteins;
}
}  // namespace protein_translation
