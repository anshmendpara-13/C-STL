// size_t is an unsigned integral type
// comp :- int compar (const void* pkey, const void* pelem);
// taking two pointer as arguments : the first is always key, and the second points to an element of the array.
// the function shall return
/*
return value	meaning
<0	            The element pointed to by pkey goes before the element pointed to by pelem
0	            The element pointed to by pkey is equivalent to the element pointed to by pelem
>0	            The element pointed to by pkey goes after the element pointed to by pelem
*/

/* bsearch example */
#include <stdio.h>  /* printf */
#include <stdlib.h> /* qsort, bsearch, NULL */

int compareints(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int values[] = {50, 20, 60, 40, 10, 30};

int main()
{
    int *pItem;
    int key = 40;
    qsort(values, 6, sizeof(int), compareints);
    pItem = (int *)bsearch(&key, values, 6, sizeof(int), compareints);
    if (pItem != NULL)
    {
        printf("%d is in the array.\n", *pItem);
    }
    else
    {
        printf("%d is not in the array.\n", key);
    }

    return 0;
}