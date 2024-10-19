#include <stdio.h>

void print2(char name[],int age); // This is Function Prototype

int main() {

    char name[] = "Kunal";
    int age = 21;

    print1(name); // this will not throw an error
    // but it will result in unexpected behaviours
    /*
     -- What’s Happening:
        - When you call print1(name);, only the name is passed as an argument, 
        but print1() is defined to expect two arguments: a char[] (name) and an int (age).

        - Since you don't pass the second argument (age), the function ends up reading garbage values 
        from the memory where it expects age to be stored, leading to undefined or "unexpected behavior" 

     -- Why No Error:
        - C doesn’t perform strict runtime checks for function calls to ensure that the number of arguments 
        passed matches the number expected. This is because C is not a "safe" language; 
        it relies on the programmer to provide the correct number and types of arguments.

        - This results in undefined behavior, where the program doesn't crash 
        but produces invalid output because it is accessing the wrong memory location for age.
 
     -- GARBAGE VALUES:
        A **garbage value** is an unpredictable, random value from memory when a variable or argument 
        is not properly initialized. In C, if a function expects an argument and it’s not provided, 
        it reads whatever data is in that memory location, causing undefined behavior.
     */



    // Function Prototype

    // What is it?
    // Function Declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct Arguments

    // IMPORTANT NOTES
    // Many C Compliers do not check for parameter matching
    // Missing arguments will result in unexpected behavior
    // A function Prototype causes the complier to flag an error if argument is Missing

    print2(name); // This will throw an error , not just give me some random data.
}

void print1(char name[],int age){
    printf("\nHello %s",name);
    printf("\nYour age is %d",age);
}

void print2(char name[],int age){
    printf("\nHello %s",name);
    printf("\nYour age is %d",age);
}