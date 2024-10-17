#include <stdio.h>

int main() {
    /*
        Variable -
        Allocated space in memory to store a value.
        We refer to a variable's name to access the stored value.
        That variable now behaves as if it was the value it contains.
        BUT we need to declare what type of data we are storing.
     */

    // Declaration
    int x;

    // initialization
    x = 123;

    int y = 321; // declaration and initialization

    int age = 21; // integer
    float gpa = 2.05; //Floating  point number
    char grade = 'C'; // Single Character
    
    // C is not object oriented Language
    // that's why there is no string datatypes
    // because strings are technically object
    char name[] = "Bro"; // Technically, Array of characters

    printf("Hello! %s\n",name);
    printf("You are %d years old\n",age);
    printf("Your average grade is %c\n",grade);
    printf("Your GPA is %f\n",gpa);

    return 0;
}