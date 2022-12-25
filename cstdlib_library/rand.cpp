/* rand example: guess the number */
#include <stdio.h>  /* printf, scanf, puts, NULL */
#include <stdlib.h> /* srand, rand */
#include <time.h>   /* time */

int main()
{
    int iSecret, iGuess;

    /* initialize random seed: */
    srand(time(NULL));

    /* generate secret number between 1 and 10: */
    iSecret = rand() % 10 + 1;

    do
    {
        printf("Guess the number (1 to 10): ");
        scanf("%d", &iGuess);
        if (iSecret < iGuess)
        {
            puts("The secret number is lower");
        }
        else if (iSecret > iGuess)
        {
            puts("The secret number is higher");
        }
    } while (iSecret != iGuess);

    puts("Congratulations!");
    return 0;
}

/*
v1 = rand() % 100;         // v1 in the range 0 to 99
v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
v3 = rand() % 30 + 1985;   // v3 in the range 1985 to 2014 
*/