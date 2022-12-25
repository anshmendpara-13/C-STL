/* acosh example */
#include <stdio.h> /* printf */
#include <math.h>  /* acosh, exp, sinh */

#define PI 3.14159265

int main()
{
    double param, result, param1, result1;

    param = exp(2) - sinh(2);
    result = asinh(param);
    printf("The area hyperbolic sine of %f is %f radians.\n", param, result);

    result = acosh(param);
    printf("The area hyperbolic cosine of %f is %f radians.\n", param, result);

    param1 = tanh(-1);
    result1 = atanh(param1);
    printf("The area hyperbolic tangent of %f is %f radians.\n", param1, result1);

    return 0;
}