#include <stdio.h>
#include <stdlib.h>
#include "middlesquare-rng.h"

#define timesToRun 15
#define SEED       26284

int main()
{
    unsigned long seed = SEED;

    printf("The original seed is:\t%lu\n", seed);

    int iter;
    for(iter = 0; iter < timesToRun; iter++)
    {
        seed = midSquareRNG(seed);
        printf("Iteration %i:\t\t%lu\n", iter+1, seed);
    }

    scanf("Press enter to continue...");

    return(0);
}
