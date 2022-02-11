import org.jetbrains.annotations.NotNull;

import java.util.*;

public class NucleotideCounter {
  private static final Map<Character, Integer> initialState =
      Map.of('A', 0, 'C', 0, 'G', 0, 'T', 0);
  private static final Set<Character> keys = initialState.keySet();

  private final Map<Character, Integer> nucleotides;

  public NucleotideCounter(final String nucleotides) {
    if (nucleotides == null || nucleotides.isEmpty()) {
      this.nucleotides = initialState;
    } else {
      this.nucleotides = count(nucleotides);
    }
  }

  @NotNull
  private static Map<Character, Integer> count(final String seq) {
    final var chars = seq.toCharArray();
    var nuc = new HashMap<>(initialState);

    for (final var c : chars) {
      if (!keys.contains(c)) {
        throw new IllegalArgumentException("Invalid Nucleotide.");
      } else {
        nuc.merge(c, 1, Integer::sum);
      }
    }
    return nuc;
  }

  public Map<Character, Integer> nucleotideCounts() {
    return nucleotides;
  }
}
