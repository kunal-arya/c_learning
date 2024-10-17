#include <stdio.h>
#include <stdbool.h>

int main() {
    char a = 'C';  // Single Character %c
    char b[] = "Bro";  // Array of characters %s

    float c = 3.141592645635363; // 4 bytes ( 32 bits of precision ) 6 -7 digits %f
    double d = 3.14159265343434; // 8 bytes ( 64 bits of precision ) 15-16 digits %lf

    bool e = true;   // 1 byte ( true or false ) %d

    char f = 100; // 1 byte ( -128 to +127 ) %d or %c
    unsigned char g = 255; // 1 byte (0 to +255) &d or %c

    short h = 32767; // 2 bytes (-32,768 to +32767) %d
    unsigned short i = 65535; // 2 bytes (0 to +65,535) %d

    int j = 214748364; // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295; // 4 bytes (0 to +4,294,967,295) %d

    long long int l = 9224334343434; // 8 Bytes ( -9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 88843434734384; // 8 Bytes ( 0 to + 18 quintillion ) %llu

    // Print ========================= //

    printf("%c\n",a); // Char
    printf("%s\n",b); // character array
    
    printf("%0.15f\n", c); // float to the precision of 15 decimal digits
    printf("%0.15lf\n", d); // double to the precision of 15 decimal digits

    printf("%d\n",e);
 

    // ------------------------------------- //

    // Now, on char u can store integer or characters
    
    // As Integer
    printf("%d\n",f); // Output - 100

    // As Character
    printf("%c\n",f); // Output - d because 100 in ASCII is lowecase d

    // Unsinged Character
    printf("%c\n",g); // Output - ASCII character at 255
    
    // ----------------------------------- //

    printf("%d\n",h); // SHORT
    printf("%d\n",i); // UNSIGNED Short

    printf("%d\n",j); // Integer
    printf("%d\n",k); // Unsigned Integer

    printf("%lld\n",l); // long long integer
    printf("%llu\n",m); // Unsigned Long Long Integer

    return 0;
}