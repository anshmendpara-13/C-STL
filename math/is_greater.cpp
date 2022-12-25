/* isgreater example */
#include <stdio.h> /* printf */
#include <math.h>  /* isgreater, log */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    double result;
    result = log(10.0);
    cout << result << endl;

    if (isgreater(result, 2.1))
    {
        printf("log(10.0) is positive");
    }
    else
    {
        printf("log(10.0) is not positive");
    }

    /*
    isless
    islessequal
    islessgreater
    isgreater
    isgreaterequal
    */

    return 0;
}