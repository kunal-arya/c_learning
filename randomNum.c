#include <stdio.h>    // Standard input/output library for printf function
#include <stdlib.h>   // Standard library for rand() and srand() functions
#include <time.h>     // Library to work with time() for seeding srand()

int main() {
    /*
        Pseudo Random Numbers:
        - A set of values or elements that are statistically random but not truly random.
        - These are generated using a mathematical formula, so they're called "pseudo-random".
        - Don't use these for cryptographic security as they're predictable if the seed is known.
    */

    // Seed the random number generator with the current time
    // srand() initializes the random number generator to ensure different sequences of random numbers each time the program runs.
    // time(0) provides the current time in seconds, making sure the seed is different on each run.
    srand(time(0));

    // Generate random numbers between 1 and 6 (inclusive), simulating dice rolls.
    // rand() generates a pseudo-random integer, and we use the modulus operator (%) to restrict the range.
    // Adding 1 ensures the result is between 1 and 6 (instead of 0 to 5).
    int dice1 = (rand() % 6) + 1;
    int dice2 = (rand() % 6) + 1;
    int dice3 = (rand() % 6) + 1;

    // Print the generated random numbers (dice rolls) to the console.
    // These numbers will be different each time you run the program, thanks to srand(time(0)).
    printf("%d \n", dice1);
    printf("%d \n", dice2);
    printf("%d \n", dice3);

    return 0; // Indicating successful program termination.
}
