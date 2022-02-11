// Copyright 2020 viraltaco_ (License below.)

import java.util.Comparator;
import java.util.HashSet;
import java.util.List;
import java.util.OptionalInt;
import java.util.Set;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class Matrix {
    private List<List<Integer>> eigenvector;
    /** The height of the Matrix */
    private int height;
    /** The length of the Matrix */
    private int length;


    public Matrix(final List<List<Integer>> eigenvector) {
        if (eigenvector == null) {
            throw new IllegalArgumentException(
                "Matrix can only be constructed with a valid eigenvector.");
        } else if (!eigenvector.isEmpty()) {
            this.eigenvector = eigenvector;
            this.height = eigenvector.size();
            this.length = eigenvector.get(0).size();
        }
    }

    public List<Integer> getColumn(final int y) {
        final var col = y - 1;
        if (col >= length || col < 0) {
            throw new IndexOutOfBoundsException("There is no column with index: " + y);
        }
        return eigenvector
            .stream()
            .map(r -> r.get(col))
            .collect(Collectors.toList())
            ;
    }

    public List<Integer> getRow(final int x) {
        final var row = x - 1;
        if (row >= height || row < 0) {
            throw new IndexOutOfBoundsException("There is no row with index: " + x);
        }
        return eigenvector.get(row);
    }

    private static int indexOfMax(final List<Integer> row) {
        final var max = row
            .stream()
            .max(Comparator.naturalOrder())
            .orElseThrow();
        return row.indexOf(max);
    }

    private static int indexOfMin(final List<Integer> col) {
        final var min = col
            .stream()
            .min(Comparator.naturalOrder())
            .orElseThrow();
        return col.indexOf(min);
    }

    private static int sum(final List<Integer> list) {
        return list
            .stream()
            .reduce(0, Integer::sum);
    }
    public Set<MatrixCoordinate> getSaddlePoints() {
        var points = new HashSet<MatrixCoordinate>() {
            public void add(final int x, final int y) {
                super.add(new MatrixCoordinate(x, y));
            }
        };

        final var rows = IntStream.rangeClosed(1, height);
        final var cols = IntStream.rangeClosed(1, length);

        rows.parallel()
            .forEach(x -> {
            final var row = getRow(x);
            final var maxIndex = indexOfMax(row);
            final var minIndex = indexOfMin(getColumn(maxIndex));
            if (rowIndex == x)
        });

        cols.parallel()
            .forEach(y ->
                saddlePoint(getColumn(y))
                    .ifPresent(x -> points.add(x + 1, y)));

        return points;
    }
}

/*
 *  Copyright 2020 viraltaco_
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy of
 *  this software and associated documentation files (the "Software"), to deal in
 *  the Software without restriction, including without limitation the rights to
 *  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 *  of the Software, and to permit persons to whom the Software is furnished to do
 *  so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
 */