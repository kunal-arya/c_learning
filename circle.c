#include <stdio.h>
#include <math.h>


int main() {

    const float PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter radius of a circle: ");
    scanf("%lf",&radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius,2);

    printf("Circumference: %lf",circumference);
    printf("Area: %lf",area);

    return 0;
}