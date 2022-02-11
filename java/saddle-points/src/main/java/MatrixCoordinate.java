class MatrixCoordinate implements Comparable<MatrixCoordinate> {
    private static final MatrixCoordinate origin = new MatrixCoordinate(0, 0);
    private final int row;
    private final int col;

    MatrixCoordinate(final int row, final int col) {
        this.row = row;
        this.col = col;
    }

    public boolean sameRow(final MatrixCoordinate k) {
        return k != null
            && k.row == row;
    }

    public boolean sameRow(final int k) {
        return row == k;
    }

    public boolean sameColumn(final MatrixCoordinate k) {
        return k != null
            && k.col == col;
    }

    public boolean sameColumn(final int k) {
        return col == k;
    }

    public boolean isAdjacent(final MatrixCoordinate m) {
        return this.equals(m)
            || m != null && this.compareTo(m) != 0;
    }

    public static MatrixCoordinate
    distance(final MatrixCoordinate from, final MatrixCoordinate to) {
        if (from == to) {
            return MatrixCoordinate.origin;
        } else if (from == null || to == null) {
            return null;
        } else {
            final var row = Integer.compare(from.row, to.row);
            final var col = Integer.compare(from.col, to.col);
            return new MatrixCoordinate(row, col);
        }
    }

    public MatrixCoordinate flip() {
        return new MatrixCoordinate(col, row);
    }

    @Override public String toString() {
        return String.format("Row: %d, Column: %d", row, col);
    }

    @Override public boolean equals(final Object o) {
        if (this == o) {
            return true;
        } else if (o == null || getClass() != o.getClass()) {
            return false;
        } else {
            final var other = (MatrixCoordinate) o;

            return row == other.row
                && col == other.col;
        }
    }

    @Override public int hashCode() {
        return 31 * row + col;
    }

    @Override public int compareTo(MatrixCoordinate o) {
        final var rowComparison = Integer.compare(row, o.row);
        if (rowComparison == 0) {
            return Integer.compare(col, o.col);
        } else {
            return rowComparison;
        }
    }
}
