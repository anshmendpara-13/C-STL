/* fpclassify example */
#include <stdio.h> /* printf */
#include <math.h>  /* fpclassify, signbit, FP_* */

int main()
{
    double d = 1.0 / 0.0;
    switch (fpclassify(d))
    {
    case FP_INFINITE:
        printf("infinite");
        break;
    case FP_NAN:
        printf("NaN");
        break;
    case FP_ZERO:
        printf("zero");
        break;
    case FP_SUBNORMAL:
        printf("subnormal");
        break;
    case FP_NORMAL:
        printf("normal");
        break;
    }
    if (signbit(d))
    {
        printf(" negative\n");
    }
    else
    {
        printf(" positive or unsigned\n");
    }
    return 0;
}

/*
Classify floating-point value
Returns a value of type int that matches one of the classification macro constants, depending on the value of x:

value	                    description
FP_INFINITE	                Positive or negative infinity (overflow)
FP_NAN	                    Not-A-Number
FP_ZERO	                    Value of zero
FP_SUBNORMAL	            Sub-normal value (underflow)
FP_NORMAL	                Normal value (none of the above)

Note that each value pertains to a single category: zero is not a normal value.
*/