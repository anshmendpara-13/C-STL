/* fma example */
#include <stdio.h> /* printf */
#include <math.h>  /* fma, FP_FAST_FMA */

int main()
{
    double x, y, z, result;
    x = 10.0, y = 20.0, z = 30.0;

    result = fma(x, y, z);  
    // above statement are faster then below statement 
    // result = x * y + z;

    printf("10.0 * 20.0 + 30.0 = %f\n", result);
    return 0;
}