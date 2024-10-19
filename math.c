#include <stdio.h>


int main() {

    // Arithmetic Operations

    // + ( Addition )
    // - ( Subtraction )
    // * ( Multiplication )
    // / ( Division )
    // % ( Modulus )
    // ++ ( Increment )
    // -- ( decrement )

    int x = 5;
    int y = 2;

    int add = x + y; // output = 7
    int sub = x - y; // output = 3
    int mul = x * y; // output = 10
    int div = x / y; // output = 2 => Why Not 2.5 ?
                     // because we are storing it as an int, which stores only whole number
    
    float divF = x / y; // Output = 2.0000 => WHy not 2.5?
    /*
        Since both x and y are integers, the result of x / y will be truncated to 2 
        (the integer part of 2.5). After that, the result is stored in divF, 
        which is a float, but by then, the value has already been truncated.
     */

    /*
    Solution:
        To perform floating-point division, at least one of the operands must be a
        floating-point number. You can cast one of the operands to float or double:
     */
    float divF = (float)x / y;  // or cast y to float: (float)y
    // output = 2.5


    int mod = x % y; // output = 1, gives remainder

    x++; // incremenet
    y--; // decrement

}