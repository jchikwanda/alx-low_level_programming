# Bit Manipulation Functions

This repository contains C functions for performing various bit manipulation operations on unsigned long integers. The function prototypes are listed below:

1. `unsigned int binary_to_uint(const char *b)`: This function takes a string representing a binary number as input and returns its unsigned integer representation. If the input string is invalid (i.e., contains non-binary characters), the function returns 0.

2. `void print_binary(unsigned long int n)`: This function takes an unsigned long integer as input and prints its binary representation to the console.

3. `int get_bit(unsigned long int n, unsigned int index)`: This function takes an unsigned long integer `n` and an index `index` as input, and returns the value of the bit at the specified index. The index is zero-based, so the least significant bit has index 0. If the index is greater than or equal to the number of bits in the input integer, the function returns -1.

4. `int set_bit(unsigned long int *n, unsigned int index)`: This function takes a pointer to an unsigned long integer `n` and an index `index` as input, and sets the value of the bit at the specified index to 1. If the index is greater than or equal to the number of bits in the input integer, the function returns -1. Otherwise, the function returns 1 to indicate success.

5. `int clear_bit(unsigned long int *n, unsigned int index)`: This function takes a pointer to an unsigned long integer `n` and an index `index` as input, and sets the value of the bit at the specified index to 0. If the index is greater than or equal to the number of bits in the input integer, the function returns -1. Otherwise, the function returns 1 to indicate success.

6. `unsigned int flip_bits(unsigned long int n, unsigned long int m)`: This function takes two unsigned long integers `n` and `m` as input, and returns the number of bits you would need to flip to get from `n` to `m`. This function uses the XOR operation to determine the bits that differ between the two numbers.

## Usage

To use these functions, simply include the `main.h` header file in your C program, and link to the `bitManipulation.c` implementation file. 

### Example Usage:

```c
#include "main.h"
#include <stdio.h>

int main() {
    const char *binary = "110101";
    unsigned int num = binary_to_uint(binary);
    printf("Unsigned integer value of %s is %u\n", binary, num);

    unsigned long int num2 = 42;
    printf("Binary representation of %lu is ", num2);
    print_binary(num2);
    
    unsigned int bitValue = get_bit(num2, 3);
    printf("The value of bit at index 3 in %lu is %u\n", num2, bitValue);

    int setRes = set_bit(&num2, 2);
    if (setRes == -1) {
        printf("Failed to set bit at index 2 in %lu because index is invalid.\n", num2);
    } else {
        printf("Setting bit at index 2 to 1 in %lu gives %lu\n", num2-4, num2);
    }
    
    int clearRes = clear_bit(&num2, 3);
    if (clearRes == -1) {
        printf("Failed to clear bit at index 3 in %lu because index is invalid.\n", num2);
    } else {
        printf("Clearing bit at index 3 in %lu gives %lu\n", num2+8, num2);
    }

    unsigned long int num3 = 7;
    unsigned long int num4 = 20;
    unsigned int num_flipped_bits = flip_bits(num3, num4);
    printf("Number of bits needed to flip to get from %lu to %lu is %u\n", num3, num4, num_flipped_bits);

    return 0;
}

