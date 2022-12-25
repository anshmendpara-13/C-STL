/* acos example */
#include <stdio.h> /* printf */
#include <math.h>  /* acos */

#define PI 3.14159265

int main()
{
    double param, result;
    param = 1;

    result = acos(param) * 180.0 / PI;
    printf("The arc cosine of %f is %f degrees.\n", param, result);

    result = asin(param) * 180.0 / PI;
    printf("The arc sine of %f is %f degrees\n", param, result);

    result = atan(param) * 180.0 / PI;
    printf("The arc tangent of %f is %f degrees\n", param, result);

    double x, y, result2;
    x = 10.0;
    y = 10.0;
    result2 = atan2(y, x) * 180 / PI;
    printf("The arc tangent for (x=%f, y=%f) is %f degrees\n", x, y, result2);
    // above function angle contain -180 to 180

    return 0;
}