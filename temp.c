#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("\n Is the temperature in (F) or (C)?: ");
    scanf("%c",&unit);

    unit = toupper(unit); // to make unit Uppercase

    if(unit == 'C') {
        printf("\nEnter the temp in Celsius: ");
        scanf("%f",&temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe Temp in Farenheit is: %.1f \n",temp);
    } else if(unit == 'F') {
        printf("\nEnter the temp in Farenheit: ");
        scanf("%f",&temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp is Celsius is: %.1f",temp);
    } else {
        printf("\n %c is not a valid unit of measurement\n",unit);
    }

    return 0;
}