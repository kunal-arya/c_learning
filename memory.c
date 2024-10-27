#include <stdio.h>

int main() {
    // Memory = An Array of bytes within RAM ( Street )
    // Memory Block = A Single Unit (Byte) within memory, used to hold some value (person)
    // Memory Address = The Address of where a memory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%lu bytes \n", sizeof(a));
    printf("%lu bytes \n", sizeof(b));
    printf("%lu bytes \n", sizeof(c));

    /*
        These are all Contiguous memory,
        It means that It is store continuosly in memory
        either going down by 2 or up by 2 because
        size of each char is 1 byte
        run and check it yourself
     */

    printf("%p \n",&a);
    printf("%p \n",&b);
    printf("%p \n",&c);

    short d = 'X';
    short e = 'Y';
    short f = 'Z';

    printf("%lu bytes \n", sizeof(d));
    printf("%lu bytes \n", sizeof(e));
    printf("%lu bytes \n", sizeof(f));

    /*
        These are all Contiguous memory,
        It means that It is store continuosly in memory
        either going down by 2 or up by 2 becuase
        size of each short is 2 bytes
        run and check it yourself
     */

    printf("%p \n",&d);
    printf("%p \n",&e);
    printf("%p \n",&f);

    int g = 'X';
    int h = 'Y';
    int i = 'Z';

    printf("%lu bytes \n", sizeof(g));
    printf("%lu bytes \n", sizeof(h));
    printf("%lu bytes \n", sizeof(i));

    /*
        These are all Contiguous memory,
        It means that It is store continuosly in memory
        either going down by 4 or up by 4 becuase
        size of each int is 4 bytes
        run and check it yourself
     */

    printf("%p \n",&g);
    printf("%p \n",&h);
    printf("%p \n",&i);

    // Same for double, it uses 8 bytes of memory

    /*
        For Array, It's different.
        It uses memory according to how much space
        we gave it to it

        For Char Array => 
            Length of Arr = 3
            Array is of Char takes = 1 byte per Char
            Total Bytes = 3
        
        For short Array => 
            Length of Arr = 3
            Array is of short takes = 2 byte per short
            Total Bytes = 6

        For int Array => 
            Length of Arr = 3
            Array is of int takes = 4 byte per int
            Total Bytes = 12
        
        For double Array => 
            Length of Arr = 3
            Array is of double takes = 8 byte per double
            Total Bytes = 24
     */

    char charArr[3];

    printf("%lu bytes \n", sizeof(charArr));
    printf("%p \n",&charArr);

    short shortArr[3];

    printf("%lu bytes \n", sizeof(shortArr));
    printf("%p \n",&shortArr);

    int intArr[3];

    printf("%lu bytes \n", sizeof(intArr));
    printf("%p \n",&intArr);

    double doubleArr[3];

    printf("%lu bytes \n", sizeof(doubleArr));
    printf("%p \n",&doubleArr);

    char strArr[2][3] = {"Gee","Hii"};

    printf("\nArray of Strings \n");
    printf("%lu bytes \n", sizeof(strArr));
    printf("%p \n",&strArr);
}

