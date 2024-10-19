#include <stdio.h>
#include <string.h>

int main() {

    int age;

    printf("What's your age?\n");
    scanf("%d",&age);

    /*
        scanf() needs the memory address of the variable to store the user's input.
        When you pass age (without the &), 
        you're passing the current value of age instead of its memory address.

        Since scanf() expects an address but gets an integer value,
        it tries to treat this integer value as if it were a memory address.  
     */

    char name[25]; // 25 bytes

    printf("\nWhat's your name?");

    // scanf("%s",&name); // incorrect
    // scanf("%s",name); // Correct but this will read after whitespace like Kunal Arya will be stored as Kunal
    /*
        This is throwing the warning:
            format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘char (*)[25]’ 
        
        Why the Warning Happens:
        The %s format specifier in scanf() expects a pointer to a char (i.e., char *), 
        which is the address of the first element of a string.

        However, when you use &name, you're passing the address of the entire array (i.e., char (*)[25], 
        which is a pointer to an array of 25 characters), not a pointer to the first character (char *).

        Solution:
        You don't need to use & with arrays, 
        because the name of the array (name) is already treated as a pointer to the first element (name[0]).
     */


    /*

    Due to the fact that after entering your age using scanf("%d", &age);
    there's a newline character ('\n') left in the input buffer when you press Enter. 
    This newline is immediately read by fgets() as the "name" input, 
    which causes the program to output an empty string for the name.
    
    Fix:
    We need to consume the leftover newline character from the buffer before calling fgets().
     */

   // Clear the input buffer to remove the leftover '\n' character after scanf
    getchar();  // This will consume the newline character left by scanf

    fgets(name,25,stdin); // this will store 25 bytes and can read whitespaces
    name[strlen(name) - 1] = '\0'; // remove the newline

    printf("\nYou are %d years old", age);
    printf("\nHello %s, How are u?\n",name);

    return 0;
}