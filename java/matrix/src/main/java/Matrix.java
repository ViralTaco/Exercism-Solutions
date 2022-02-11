/*
 * Copyright (c) 2019 ViralTaco_
 * SPDX-License-Identifier: MIT
 * <http://www.opensource.org/licenses/MIT>
 */

import java.util.stream.*;
import java.util.Arrays;
import java.util.*;

public class Matrix {
    private List<List<Integer>> inner = new ArrayList<List<Integer>>();
    /** The length of the Matrix */
    public Integer length = 0;
    /** The height of the Matrix */
    public Integer height = 0;


    Matrix(final String matrix) {
        final var rows = explode(matrix, "\n");
        for (final String row: rows) {
            var arr = explode(row, " ") // List<String>
                .stream()                        // Stream<String>
                .parallel()
                .mapToInt(Integer::parseInt)     // IntStream
                .boxed()                         // Stream<Integer>
                .collect(Collectors.toList())    // List<Integer>
                ;

            ++this.height; // Each row is inserted in a column.
            Collections.addAll(this.inner, arr);
        }
        this.length = getRow(1).length;
    }
    
    private static List<String> explode(final String str,
                                        final String separator) {
        return Arrays.asList(str.split(separator));
    }

    /**
     * This method returns a row from the Matrix in the form of an
     * {@code int[]} if the index passed as argument exists.
     * The indices start at 1 and end at height
     * @param x the index of the elements on the x axis
     * @return the row of index x
     *
     * @throws IndexOutOfBoundsException if x is out of bounds.
     */
    public int[] getRow(int x) {
        --x;
        if (this.height <= x || x < 0) {
            throw new IndexOutOfBoundsException(
                "There is no row with index: " + x);
        }
        return this.inner                // List<List<Integer>>
            .get(x)                      // List<Integer>
            .stream()                    // Stream<Integer>
            .parallel()
            .mapToInt(Integer::intValue) // IntStream
            .toArray()                   // int[]
            ;
    }

    /**
     * This method returns a column from the Matrix in the form of an
     * {@code int[]} if the index passed as argument exists.
     * The indices start at 1 and end at length
     * @param y the index of the elements on the y axis
     * @return the column of index y
     *
     * @throws IndexOutOfBoundsException if y is out of bounds.
     */
    public int[] getColumn(int y) {
        final var kY = --y;
        if (this.length <= kY || kY < 0) {
            throw new IndexOutOfBoundsException(
                "There is no column with index: " + y);
        }
        return this.inner                // List<List<Integer>>
            .stream()                    // Stream<List<Integer>>
            .parallel()
            .mapToInt(i -> i.get(kY))    // IntStream
            .toArray()                   // int[]
            ;
    }
}
