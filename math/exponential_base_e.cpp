/* exp example */
#include <stdio.h> /* printf */
#include <math.h>  /* exp */
// [Mathematics] ex = exp(x) [C++ Programming]

int main()
{
    double param, result, result1;
    param = 1.0;
    result = exp(param);
    printf("The exponential value of %f is %f.\n", param, result);

    // result1 = expm1(param);
    // printf("The exponential value of %f is %f.\n", param, result1);
    // above function are erro only (getting value -1)
    return 0;
}