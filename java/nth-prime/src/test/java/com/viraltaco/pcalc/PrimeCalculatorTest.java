package com.viraltaco.pcalc;

import org.assertj.core.api.Assertions;
import org.junit.Test;

import static org.junit.Assert.assertThrows;

public class PrimeCalculatorTest {

    private PrimeCalculator primeCalculator = new PrimeCalculator();

    @Test
    public void testFirstPrime() {
        Assertions.assertThat(primeCalculator.nth(1)).isEqualTo(2);
    }

    //@Ignore("Remove to run test")
    @Test
    public void testSecondPrime() {
        Assertions.assertThat(primeCalculator.nth(2)).isEqualTo(3);
    }

    //@Ignore("Remove to run test")
    @Test
    public void testSixthPrime() {
        Assertions.assertThat(primeCalculator.nth(6)).isEqualTo(13);
    }

    //@Ignore("Remove to run test")
    @Test
    public void testBigPrime() {
        Assertions.assertThat(primeCalculator.nth(10001)).isEqualTo(104743);
    }

    //@Ignore("Remove to run test")
    @Test
    public void testUndefinedPrime() {
        assertThrows(
            IllegalArgumentException.class,
            () -> primeCalculator.nth(0));
    }

}
