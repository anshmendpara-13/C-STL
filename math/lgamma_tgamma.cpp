/* lgamma example */
#include <stdio.h> /* printf */
#include <math.h>  /* lgamma */

int main()
{
    double param, result;
    param = 0.5;
    result = lgamma(param);
    printf("lgamma(%f) = %f\n", param, result);

    result = tgamma(param);
    printf("tgamma(%f) = %f\n", param, result);

    return 0;
}

/*

x
Parameter for the log-gamma function.

x
Parameter for the gamma function.

*/