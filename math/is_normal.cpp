/* isnormal example */
#include <stdio.h> /* printf */
#include <math.h>  /* isnormal */

int main()
{
    // non zero value so true
    printf("isnormal(1.0)    : %d\n", isnormal(1.0));
    printf("isnormal(0.0)    : %d\n", isnormal(0.0));
    printf("isnormal(1.0/0.0): %d\n", isnormal(1.0 / 0.0));
    return 0;
}