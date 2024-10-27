#include <stdio.h>

int main() {

    /*
        Pointers = A 'Variable-like' reference that holds a memory address to
        another variable, array etc. 
        - Some Tasks are performed more easily
        with pointers.
        
        * = indirection operator ( value at address )

        Advantages of using Pointers
        - Less time in program execution
        - Working on the original Variable.
        - With the help of pointers, we can create data structures
        (linked-list, stack, queue)
        - Returning more than one values from functions.
        - Searching and sorting Large Data very easily.
        - Dynamically Memory Allocation.
    */

   int age = 21;

   int *pAge = &age; // Pointer

   printf("Address of age: %p \n", &age);
   printf("Value of pAge:  %p \n", pAge); // Pointer Printing

   printf("Size of age: %lu bytes\n",sizeof(age));
   printf("Size of Pointer age: %lu bytes\n",sizeof(pAge));


   printf("Value of age: %d \n", age);
   printf("Value at stored address: %d \n", *pAge); // Value at Pointer Address




//    Detailed Explanation - https://www.youtube.com/watch?v=2ybLD6_2gKM&t=14s

    int x = 4;
    // ENGLISH - Integer named X is set to 4

    int * pX = &x;
    // ENGLISH - Integer Pointer pX is set to the address of X

    int y = *pX;
    // ENGLISH - Integer named Y is set to the thing pointed to by pX


    // BENEFITS -
    // 1) We break down code into small chunks in Functions
    // we pass the variable's address which will be a pointer so that we don't have to create the variable again and again

    // 2) Static vs Dynamic Memory
    // Stack - Stack Memory, for variables who's length is known to us
    // Dynamic - Heap Memory, when using dynamic allocation that comes from the heap
    // through malloc() or s-break or other kinds of memory allocators , you are
    // going to get a pointer to memory that is out of scope. If you ever want to
    // be able to use this kind of memory, you need to know how pointers work.
    


    return 0;
}