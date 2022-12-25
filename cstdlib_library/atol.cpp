/* atol example */
#include <stdio.h>  /* printf, fgets */
#include <stdlib.h> /* atol */

int main()
{
    int li, i;
    char buffer[256];
    printf("Enter a number: ");
    fgets(buffer, 256, stdin);
    li = atol(buffer);
    li = atoll(buffer);
    i = atoi (buffer);
    printf("The value entered is %d. Its double is %ld.\n", li, li * 2);
    printf("The value entered is %d. Its double is %ld.\n", li, li * 2);
    printf ("The value entered is %d. Its double is %d.\n",i,i*2);
    return 0;
}
// atol
// On success, the function returns the converted integral number as a long int value.
// atoll
// On success, the function returns the converted integral number as a long long int value.
// atoi
// On success, the function returns the converted integral number as an int value

// function
// strtoul
