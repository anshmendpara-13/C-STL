/* atexit example */
#include <stdio.h>  /* puts */
#include <stdlib.h> /* atexit */

void fnExit1(void)
{
    puts("Exit function 1.");
}

void fnExit2(void)
{
    puts("Exit function 2.");
}

int main()
{
    atexit(fnExit1);    // third
    atexit(fnExit2);    // second
    puts("Main function.");    // first
    return 0;
}