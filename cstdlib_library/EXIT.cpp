/* _Exit example */
#include <stdio.h>  /* printf, fopen */
#include <stdlib.h> /* _Exit, EXIT_FAILURE */

int main()
{
    FILE *pFile;
    pFile = fopen("myfile.txt", "r");
    if (pFile == NULL)
    {
        printf("Error opening file");
        // this file not empty so this are return else statement
        _Exit(EXIT_FAILURE);

        // fputs("error opening file\n", stderr);
        // abort();

        /*
        The abort function, also declared in the standard
        include file <stdlib. h>, terminates a C++ program.
        The difference between exit and abort is that exit allows
        the C++ runtime termination processing to take place
        (global object destructors get called).
        abort terminates the program immediately.
        */
    }
    else
    {
        /* file operations here */
    }
    fclose(pFile);
    return 0;
}

