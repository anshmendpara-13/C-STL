/* atof example: sine calculator */
#include <stdio.h>  /* printf, fgets */
#include <stdlib.h> /* atof */
#include <math.h>   /* sin */

int main()
{
    double n, m;
    double pi = 3.1415926535;
    char buffer[256];
    printf("Enter degrees: ");
    fgets(buffer, 256, stdin);

    /*
    The stdin is the short form of the “standard input”, in C programming the term “stdin” is used
    for the inputs which are taken from the keyboard either by the user or from a file.
    The “stdin” is also known as the pointer because the developers access the data from the users
    or files and can perform an action on them.
    */

    n = atof(buffer);
    // convert float to double
    // in this case buffer are float 
    m = sin(n * pi / 180);
    printf("The sine of %f degrees is %f\n", n, m);
    return 0;
}
