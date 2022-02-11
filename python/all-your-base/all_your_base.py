def power(base, exponent):
    if (exponent == 0):
        return 1
    n = 1
    for i in range(1, exponent):
        n *= base
    
    return n

def rebase(input_base, digits, output_base):
    index = len(digits) - 1
    number = 0
    outDigits = []
    
    for digit in digits:
        number += digit * pow(input_base, index)
        index -= 1 

    while number > 0:
        outDigits.append(number % output_base)
        number /= output_base
    
    return outDigits.reverse()