/* tanh example */
#include <stdio.h> /* printf */
#include <math.h>  /* tanh, log */

int main()
{
    double param, result;
    param = log(2.0);

    result = sinh(param);
    printf("The hyperbolic sine of %f is %f.\n", param, result);

    result = cosh(param);
    printf("The hyperbolic cosine of %f is %f.\n", param, result);

    result = tanh(param);
    printf("The hyperbolic tangent of %f is %f.\n", param, result);
    return 0;
}