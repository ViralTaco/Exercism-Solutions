import java.util.*;

import static java.util.Map.entry;

class RomanNumeral {
   private static final Map<Integer, String> kNumerals = Map.ofEntries(
      entry(1000, "M"), entry(900, "CM"), entry(500, "D"), entry(400, "CD")
   ,  entry(100, "C"), entry(90, "XC"), entry(50, "L"), entry(40, "XL")
   ,  entry(10, "X"), entry(9, "IX"), entry(5, "V"), entry(4, "IV")
   ,  entry(1, "I")
   );
   private static List<Integer> keys;
   static { // keys init:
      keys = new ArrayList<Integer>(kNumerals.keySet());
      Collections.sort(keys, Collections.reverseOrder()); 
   }
   
   private final String numeral;

// constructors:
   RomanNumeral(final Integer number) {
      this.numeral = RomanNumeral.convert(number);
   }

// public getters:
   public String getRomanNumeral() {
      return this.numeral;
   }
   
// private methods:
   private static String convert(Integer number) {
      var roman = new StringBuilder();
      
      for (var key: RomanNumeral.keys) {
         while (number >= key) {
            roman.append(RomanNumeral.kNumerals.get(key));
            number -= key;
         }
      }
      return roman.toString();
   }
}
