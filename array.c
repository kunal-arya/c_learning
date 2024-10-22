#include <stdio.h>
#include <string.h>

int main() {

    // Array = A Data Structure that can store many values of the same data types.

    double prices[] = {10.34,54.76,32.43,654.4};


    /*
        length of the array = Size of Array / Size of one Element
    */
    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) {
        printf("$%.1f \n",prices[i]);
    }

    // 2D Array = an Array, where each element is an entire array
    // useful if u need a matrix, grid, or table of data

    // mentioning length of rows in 2d array is optional 
    // but complusory to mention length of columns in 2d array

    int numbers[3][3] = {
        {1,2,3},
        {4,5,6}
        };

    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    printf("\n\nRows: %d\n",rows);
    printf("Columns: %d\n\n",columns);

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d\t",numbers[i][j]);
        }
        printf("\n\n");
    }

    // Array of Strings ================= //

    char cars[4][10] = {"Mustang","Corvette","Camaro"};

    // Add
    // cars[0] = "Tesla"; // Incorrect
    strcpy(cars[3],"Tesla"); // Correct

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++) {
        printf("%s\n",cars[i]);
    }

    return 0;
}