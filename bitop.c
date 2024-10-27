#include <stdio.h>

int main() {
    /*
        BITWISE OPERATOR = Special Operators used in bit level programming
        (Knowing binary is important for this topic)

        & = AND => Both of the bits should be 1

        | = OR => Any of the bits should be 1
        
        ^ = XOR => Any of the bits should be 1 , change to 1 but If both of the
                    bits is 1, don't change the bits to one.
        
        << Left Shift
        
        >> Right Shift
     */

    int x = 6;  // 6  = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  // 0  = 00000000

    z = x & y; // 00000100 => 4

    printf("AND = %d\n",z);

    z = x | y; // 00001110 = 14

    printf("OR = %d\n",z);

    z = x ^ y; // 00001010 = 10

    printf("XOR = %d\n",z);

    z = x << 2;

    printf("Left Shift = %d\n",z); // 00011000 = 24

    z = x >> 1;

    printf("Right Shift = %d\n",z); // 00000011 = 3

    return 0;
}