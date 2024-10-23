#include <stdio.h>

enum Day{Sun = 1,Mon = 2,Tue = 3,Wed = 4,Thu = 5,Fri = 6,Sat = 7};

int main() {
    // enum = a user defined type of named integer indentifier
    // helps to make a program more readable

    enum Day today = Sun;
    enum Day Friday = Fri;

    printf("%d \n",today);
    printf("%d \n",Friday);

    // if(today = 1 || today == 7)
    if(today = Sun || today == Sat)
    {
        printf("It's the weekend! Party Time! |n");
    } else {
        printf("I have to work today");
    }

}