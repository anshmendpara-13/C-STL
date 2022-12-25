/* system example : DIR */
#include <stdio.h>  /* printf */
#include <stdlib.h> /* system, NULL, EXIT_FAILURE */

int main()
{
    int i;
    printf("Checking if processor is available...");
    if (system(NULL))
    {
        puts("Ok");
    }
    else
    {
        exit(EXIT_FAILURE);
    }
    printf("Executing command DIR...\n");
    i = system("dir");
    printf("The value returned was: %d.\n", i);
    return 0;
}

/*
If command is a null pointer, the function returns a non-zero value in case a command processor is available and a zero value if it is not.

If command is not a null pointer, the value returned depends on the system and library implementations, 
but it is generally expected to be the status code returned by the called command, if supported.
*/