/* copysign example */
#include <stdio.h> /* printf */
#include <math.h>  /* copysign */

int main()
{
    printf("copysign ( 10.0,-1.0) = %f\n", copysign(10.0, -1.0));
    printf("copysign (-10.0,-1.0) = %f\n", copysign(-10.0, -1.0));
    printf("copysign (-10.0, 1.0) = %f\n", copysign(-10.0, 1.0));

    return 0;
}

/*

x
Value with the magnitude of the resulting value.
y
Value with the sign of the resulting value.

-> The value with a magnitude of x and the sign of y.

*/