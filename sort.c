#include <stdio.h>


void swap(int num[],int size) {
    
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}

void print(int num[], int size) {
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",num[i]);
    }
    printf("\n");
}


int main() {
    int numbers[] = {6,9,4,3,2,5,8,1,7};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    swap(numbers,size);
    print(numbers,size);

    return 0;
}