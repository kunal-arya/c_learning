#include <stdio.h>
#include <string.h>

// Custom implementation of strset
void strset(char *str, char ch) {
    while (*str) {
        *str = ch;
        str++;
    }
}

int main() {
    char string1[] = "Bro";
    char string2[] = "Code";

    // strlwr(string1); // Converts string to lowercase
    // strupr(string2);  // converts string to uppercase
    // strcat(string1,string2); // append string2 to end of string1
    // strncat(string1,string2, 1); // appends n characters from string1 to string2
    // strcpy(string1,string2); // copy string2 to string1
    // strncpy(string1,string2,2); // copy n characters of string2 to string1

    // strset(string1,'?'); // Sets all characters of a string to a given character(s)
    // strnset(string1, 'x' ,1); // Sets first n characters of a string to a given characters
    // strrev(string1); // reverses a string

    // int result = strlen(string1); // returns string length as int
    // int result = strcmp(string1,string2); // string compare all characters
    // int result = strncmp(string1,string1,1); // string compare n characters
    // int result = strcmp1(string1,string1); // string compare all (ignore case)
    // int result = strincmp(string1,string1,1); // string compare n characters ( Ignore case )

    // printf("%s",string1);
    // printf("%d \n",result);
}