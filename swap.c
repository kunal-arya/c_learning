#include <stdio.h>
#include <string.h>

int main() {
    char x[] = "water";
    char y[] = "soda";
    char temp[15];

    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);

    printf("x = %s\n",x);
    printf("y = %s\n",y);

    /*
        Output -
            x = 
            y = water
        
        This is happening because y < x, 
        to solve this provide length to x , y and temp
     */

    char a[15] = "waterN";
    char b[15] = "sodaN";
    char tempN[15];

    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);

    printf("a = %s\n",a);
    printf("b = %s\n",b);

    return 0;
}