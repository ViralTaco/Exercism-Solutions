import java.util.stream.*;
import java.util.*;

class SumOfMultiples {
   private int sum = 0;

// constructors:
   SumOfMultiples(final int limit, final int[] set) {
      if (set != null && limit > 0) { 
         this.sum = sumOfSets(setsOf(limit, set));
      }
   }

// private static methods:
   private static Integer sumOfSets(final Set<Integer> set) {
      return set.stream()
                .reduce(0, Integer::sum)
                ;
   }

   private static Set<Integer> setsOf(final int limit, final int[] multiples) {
      var sets = new HashSet<Integer>();
      for (var m: multiples) {
         sets.addAll(IntStream.iterate(m, e -> e + m)
                              .takeWhile(i -> i < limit && i > 0)
                              .boxed()
                              .collect(Collectors.toSet())
         ); // addAll();
      }
      return sets;
   }
// getters:
   public int getSum() {
      return this.sum;
   }

}
