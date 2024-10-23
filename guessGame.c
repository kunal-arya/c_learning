#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    printf("Let's Play a GAME ========================== \n");
    printf(" ====== GUESS Number from 1 to 100 ========= \n");


    // Seeding the Random Numbers using Time
    srand(time(0));

    const int MAX = 100;
    const int MIN = 1;
    int random = rand() %  MAX + MIN;

    int guessed_num;
    int guesses = 0;

    do {
        if(guesses) {
            if(guessed_num > random) {
                printf("Too high \n");
            } else if (guessed_num < random) {
                printf("Too Low \n");
            }
        }
        printf("Guess the num: ");
        scanf("%d", &guessed_num);
        guesses++;
    } while(guessed_num != random);
    
    printf("*****************************************************\n");
    printf("You Won!! Congratulations. correct ans: %d , Your Score: %d\n", random, guesses);
    printf("*****************************************************\n");

    return 0;
}