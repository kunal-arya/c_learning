#include <stdio.h>

int main() {
    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    // %1 minimum field width, in this example 1
    // %.1 = decimal precision , in this 1
    // &- = left align

    printf("Item 1: %f\n",item1);

    printf("Item 2: %-8.2f",item2); // left align decimal precision of 2 with field width of 8

    printf("Item 3: %4.2f",item3); // right align with decimal precison of 2 with field width of 4

    return 0;
}