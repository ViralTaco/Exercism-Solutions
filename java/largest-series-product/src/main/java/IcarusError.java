class IcarusError extends IndexOutOfBoundsException {
// private constants:
   private static final String MELTED_WAX = "IcarusError: Index out of bounds.";

// public members:
   public final String reason;

// constructors:
   public IcarusError(final String reason) {
      this.reason = reason;
   }
   
   public IcarusError() {
      this.reason = IcarusError.MELTED_WAX;
   }
}