class ResistorColor {
  private enum Band {
      black(0)
    , brown(1)
    , red(2)
    , orange(3)
    , yellow(4)
    , green(5)
    , blue(6)
    , violet(7)
    , grey(8)
    , white(9)
    ;

    private final int resistance;

    private Band(final int resistance) {
      this.resistance = resistance;
    }

    public int value() {
      return this.resistance;
    }
  }

  public int colorCode(final String color) {
    return
  }

  public String[] colors() {
    throw new UnsupportedOperationException(
        "Delete this statement and write your own implementation.");
  }
}
