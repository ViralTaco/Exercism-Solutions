import java.util.ArrayList;

/**
 * This class contains the logic to calculate the largest product 
 * of a series. The input is a String 
 *
 * @param: final String. The series/ArrayList<Integer> in the form of a string.
 * @param: a final String representing the array of digits. (Series)
 *
 * @throws: IllegalArgumentException if the string is empty or null
 * @throws: IllegalArgumentException if the string contains characters
 *     that aren't digits.
 */

class LargestSeriesProductCalculator {
// private member variables:   
   private final ArrayList<Integer> numbers;
   private final int length;
   
// constructors:
  /**
   * This is the constructor for LargestSeriesProductCalculator
   *
   * @param inputNumber  a final String representing the array of digits. (Series)
   *
   * @throws IllegalArgumentException if the string is empty or null
   * @throws IllegalArgumentException if the string contains characters
   *     that aren't digits.
   */
   public LargestSeriesProductCalculator(final String inputNumber) 
   throws IllegalArgumentException {
      if (inputNumber == null || inputNumber.equals("")) {
         this.numbers = null;
      } else {
         this.numbers = toIntegerArray(inputNumber);
      }
      this.length = inputNumber.length();
   }

// private static methods: 
   /**
    * This method converts a string to an ArrayList<Integer>
    *
    * @param digits a final String which is the series
    *
    * @throws IllegalArgumentException if the String contains
    *    a character which isn't a digit.
    * @return ArrayList<Integer> containing the each Integer from
    *    the String.  
    * 
    */
   private static ArrayList<Integer> toIntegerArray(final String digits)
   throws IllegalArgumentException {
      var arr = new ArrayList<Integer>();
      
      for (var c: digits.toCharArray()) {
         if (c < '0' || c > '9') {
            throw LargestSeriesError.NOT_DIGIT.error();
         }
         arr.add(Integer.parseInt("" + c));
      }
      
      return arr;
   }
   
// private methods:
   /**
    * This method slices the ArrayList<Integer> `this.numbers` into
    * a series of length `length` from the index `from`
    *
    * @param from the index of the first element of the series in `this.numbers`
    * @param length the length of the series
    *
    * @return a long equal to the product of all the digits of the series.
    * @throws IllegalArgumentException if `from` is negative
    */
   private long sliceProduct(int from, final int length) 
   throws IllegalArgumentException, IcarusError {
      final var to = from + length;
      if (from < 0) {
         throw new 
            IllegalArgumentException("Can't slice to/from negative index.");
      } else if (to > this.length)  {
         throw new IcarusError("'from + length' in sliceProduct() is too high");
      } else if (length == 1) {
         return this.numbers.get(from);
      }
      
      var product = 1L;
      for (; from < to; ++from) {
         product *= (long) this.numbers.get(from);
      }
      
      return product;
   }

   /**
    * This method compute the product of a series of digits
    * of the a given length. The series is a contiguous sequence
    * of digits from `this.numbers`.
    * Each series is a slice of a given length from that array
    * from the beginning until the end of said ArrayList.
    * The first index of the series is `i` and the last is `i + (len - 1)`
    * i starts at 0 and is incremented by 1 until `array.size - len`
    *
    * @param: `len` the length of the series
    *
    * @return: A long which is the biggest product of any of the series
    * @throws: IllegalArgumentException if `len` is negative
    * @throws: IllegalArgumentException if `len` is bigger than or
    *    equal to the length of `this.numbers`
    */
   private long seriesProduct(final int len)
   throws IllegalArgumentException {
      if (len < 0) {
         throw LargestSeriesError.NEGATIVE_LENGTH.error();
      } else if (this.length < len) {
         throw LargestSeriesError.UNEQUAL_LENGTH.error();
      } else if (len == 0 && this.numbers == null) {
         return 1L;
      }
      
      var product = 0L;
      for (var i = 0; i < this.length; ++i) {
         try {
            product = Math.max(product, sliceProduct(i, len));
         } catch (IcarusError myOnlyFriend) { // the end.
            break;
         }
      }
      
      return product;
   }
   
// public methods:
   public long calculateLargestProductForSeriesLength(int numberOfDigits) 
   throws IllegalArgumentException {
      return this.seriesProduct(numberOfDigits);
   }
}
