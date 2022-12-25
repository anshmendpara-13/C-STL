/* llrint example */
#include <stdio.h> /* printf */
#include <fenv.h>  /* fegetround, FE_* */
#include <math.h>  /* llrint */

int main()
{
    printf("llrint (2.3) = %lld\n", llrint(2.3));
    printf("llrint (3.8) = %lld\n", llrint(3.8));
    printf("llrint (-2.3) = %lld\n", llrint(-2.3));
    printf("llrint (-3.8) = %lld\n", llrint(-3.8));

    printf("llround (2.3) = %lld\n", llround(2.3));
    printf("llround (3.8) = %lld\n", llround(3.8));
    printf("llround (-2.3) = %lld\n", llround(-2.3));
    printf("llround (-3.8) = %lld\n", llround(-3.8));

    return 0;
}