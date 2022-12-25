/* erf example */
#include <stdio.h> /* printf */
#include <iostream>
#include <math.h> /* erf */

using namespace std;

int main()
{
    double param, result, result1;
    param = 1.0;

    result = erf(param);
    printf("erf (%f) = %f\n", param, result);

    result1 = erfc(param);
    printf("erfc(%f) = %f\n", param, result1);

    cout << "erf(result) + erfc(result1) : " << result + result1 << endl;

    return 0;
}

/*

x
Parameter for the error function.

Return Value
Error function value for x.


x
Parameter for the complementary error function.

Return Value
Complementary error function value for x.
If x is too large, an underflow range error occurs.

*/