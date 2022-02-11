package com.viraltaco.pcalc;

public class PrimeCalculator {
    private static final int[] smallPrimes = new int[] {
        0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53,
        59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127,
        131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197,
        199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271
    };
    private static final int smallCount = smallPrimes.length;
    private static final int lastSmall = smallPrimes[smallCount - 1];

    /**
     * This method finds and returns the prime number
     * that is preceded by exactly X primes.
     * @param n the prime to find. n = X + 1;
     * @return the prime number.
     * @throws IllegalArgumentException if n is lower than or equal to 0.
     */
    public static int nth(int n) throws IllegalArgumentException {
        if (n <= 0) {
            throw new IllegalArgumentException(
                String.format("%d is not a valid value.", n)
            );
        } else if (n < smallCount) {
            return smallPrimes[n];
        } else {
            int result = lastSmall;
            while (n >= smallCount) {
                result += 2;
                if (isOdd(result) && isPrime(result)) {
                    n -= 1;
                }
            }
            return result;
        }
    }

    private static boolean isPrime(final int n) {
        final var rootN = (int) Math.sqrt(n);
        for (var d = 2; d <= rootN; ++d) {
            if (n % d == 0) { return false; }
        }
        return true;
    }

    private static boolean isOdd(final int n) {
        return (n & 1) != 0;
    }

}
