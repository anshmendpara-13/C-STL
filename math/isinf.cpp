/* isinf example */
#include <stdio.h> /* printf */
#include <math.h>  /* isinf, sqrt */

int main()
{
    // A non-zero value (true) if x is an infinity; and zero (false) otherwise.
    printf("isinf(0.0)       : %d\n", isinf(0.0));
    printf("isinf(1.0/0.0)   : %d\n", isinf(1.0 / 0.0));
    printf("isinf(-1.0/0.0)  : %d\n", isinf(-1.0 / 0.0));
    printf("isinf(sqrt(-1.0)): %d\n", isinf(sqrt(-1.0)));
    return 0;
}