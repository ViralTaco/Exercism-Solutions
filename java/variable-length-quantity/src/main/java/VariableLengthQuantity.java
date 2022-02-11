import java.util.*;

class VariableLengthQuantity {
// constants:
   private static final Long END_MASK = 0b1000_0000L;
   private static final Long OCTET_MASK = 0b0111_1111L;
   
   private static final int OFFSET = 7;

// public methods:
   public List<String> encode(List<Long> numbers) {
      var encoded = new ArrayList<String>();
      for (var number: numbers) {
         var tmp = new ArrayList<String>();
         // last byte doesn't have bit #7 set so deal with it first
         tmp.add(hexString(number & OCTET_MASK));
         number >>= OFFSET;
         
         for (; number != 0; number >>= OFFSET) {
            tmp.add(hexString((number & OCTET_MASK) | END_MASK));
         }
         
         Collections.reverse(tmp);
         encoded.addAll(tmp);
      }
      return encoded;
   }

   public List<String> decode(List<Long> bytes) 
   throws IllegalArgumentException {
      if (!hasEndByte(bytes.get(bytes.size() - 1))) {
          throw VariableLengthQuantity.error();
      }
      
      var fixedLength = 0L;
      var decoded = new ArrayList<String>();
      
      for (var octet: bytes) {
         fixedLength <<= OFFSET;
         fixedLength += octet & OCTET_MASK;
         
         if (hasEndByte(octet)) {
            decoded.add(hexString(fixedLength));
            fixedLength = 0L;
         } 
      }
      
      return decoded;
   }

// private static methods:
   private static boolean hasEndByte(final Long octet) {
      return (octet & END_MASK) == 0L;
   }

   private static String hexString(final Long number) {
      return String.format("%#x", number);
   }
   
// private static IllegalArgumentException factory:
   private static IllegalArgumentException error() {
      return new IllegalArgumentException(
         "Invalid variable-length quantity encoding"
      );
   }
}
