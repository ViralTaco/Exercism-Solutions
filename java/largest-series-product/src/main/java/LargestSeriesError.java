public enum LargestSeriesError {
   NOT_DIGIT("String to search may only contain digits."),
   NEGATIVE_LENGTH("Series length must be non-negative."),
   UNEQUAL_LENGTH("Series length must be less than or equal " 
                  + "to the length of the string to search.");

// public members:
   public final String value;
                  
// constructor:
   private LargestSeriesError(final String errorMessage) {
      this.value = errorMessage;
   }
   
// public methods:
   /**
    * This method creates and returns an IllegalArgumentException
    * The content has the value of the constant String `value`
    * 
    * @return new IllegalArgumentException containing
    *    the error String `value`
    */
   public IllegalArgumentException error() {
      return new IllegalArgumentException(this.value);
   }
}
