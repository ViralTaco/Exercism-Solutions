package com.viraltaco.rot;
/* * * * * * * * * * * * * * * * * * * * * * * * *
 *  RotationalCipher.java:                       *
 *  Copyright (c) 2020 viraltaco_                *
 *  SPDX-License-Identifier: MIT                 *
 *  <http://www.opensource.org/licenses/MIT>     *
 * * * * * * * * * * * * * * * * * * * * * * * * */

import java.util.HashMap;
import java.util.Map;

import static java.lang.Character.codePointAt;
import static java.lang.Character.toUpperCase;

public class RotationalCipher {
    private static final char[] alphabet;
    private static final int alphabetLength;

    static {
        alphabet = "abcdefghijklmnopqrstuvwxyz".toCharArray();
        alphabetLength = alphabet.length;
    }

    private final Map<Integer, Integer> cipherMap;

    public RotationalCipher(final int shiftKey) {
        this.cipherMap = RotationalCipher.rotateMap(shiftKey);
    }

    public String rotate(final String data) {
        if (data == null) { return null; }
        return data.codePoints()
                   .map(c -> this.cipherMap.getOrDefault(c, c))
                   .collect(StringBuilder::new,
                            StringBuilder::appendCodePoint,
                            StringBuilder::append)
                   .toString();
    }

    /**
     * This class method builds a {@link HashMap}
     * using {@link RotationalCipher#alphabet} as an alphabet.
     * It adds entries for each character and its uppercase counterpart
     * as a key; Their respective values are equivalent to the key after the
     * ROT algorithm is applied to it.
     * @param rot the alphabet shift
     * @return the aforespecified {@link Map}
     * @see java.util.HashMap
     */
    private static Map<Integer, Integer> rotateMap(final int rot) {
        var map = new HashMap<Integer, Integer>();
        for (var i = 0; i < alphabetLength; ++i) {
            final var key = codePointAt(alphabet, i);
            final var value = codePointAt(alphabet,
                                          (i + rot) % alphabetLength);

            map.put(key, value);
            map.put(toUpperCase(key), toUpperCase(value));
        }
        return map;
    }

}
