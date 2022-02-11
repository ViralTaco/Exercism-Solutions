package com.viraltaco.triangle;

// ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
// ┃ Triangle.java:                                       ┃
// ┃ Copyright (c) 2020 viraltaco_                        ┃
// ┃ SPDX-License-Identifier: MIT                         ┃
// ┃ <http://www.opensource.org/licenses/MIT>             ┃
// ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛

public class Triangle {
    private final double a;
    private final double b;
    private final double c;

    public Triangle(final double a, final double b, final double c)
    throws TriangleException {
        if (a + b <= c || b + c <= a || a + c <= b) {
            throw TriangleException.degenerate;
        } else if (a <= .0 || b <= .0 || c <= .0) {
            throw TriangleException.unequal;
        }

        this.a = a;
        this.b = b;
        this.c = c;
    }

    public boolean isEquilateral() {
        // a == b and b == c
        return Double.compare(a, b) == 0
            && Double.compare(b, c) == 0;
    }

    public boolean isIsosceles() {
        return Double.compare(a, b) == 0
            || Double.compare(a, c) == 0
            || Double.compare(b, c) == 0;
    }

    public boolean isScalene() {
        return !isEquilateral()
            && !isIsosceles();
    }

}
