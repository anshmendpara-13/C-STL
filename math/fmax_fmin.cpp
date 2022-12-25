/* fmax example */
#include <stdio.h> /* printf */
#include <math.h>  /* fmax */

int main()
{
    // this choice only one value which are big in compare to both
    printf("fmax (100.0, 1.0) = %f\n", fmax(100.0, 1.0));
    printf("fmax (-100.0, 5.0) = %f\n", fmax(-100.0, 5.0));
    printf("fmax (-100.0, -1.0) = %f\n", fmax(-100.0, -1.0));

    // this choice only one value which are small in compare to both
    printf("fmin (100.0, 1.0) = %f\n", fmin(100.0, 1.0));
    printf("fmin (-100.0, 1.0) = %f\n", fmin(-100.0, 1.0));
    printf("fmin (-100.0, -1.0) = %f\n", fmin(-100.0, -1.0));
    return 0;
}

/*
fmax
x, y
Values among which the function selects a maximum.

fmin
x, y
Values among which the function selects a minimum.

*/