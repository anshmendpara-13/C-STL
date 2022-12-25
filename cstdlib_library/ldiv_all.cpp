/* ldiv example */
#include <stdio.h>  /* printf */
#include <stdlib.h> /* ldiv, ldiv_t */

int main()
{
    ldiv_t ldivresult;
    long int l = 1045500L;
    ldivresult = ldiv(l, 132L);
    printf("%ld div 132 => %ld, remainder %ld.\n", l, ldivresult.quot, ldivresult.rem);
    return 0;
}

// function llabs return the absolute value
// llabs
// lldiv
// in above to line ll means long long
