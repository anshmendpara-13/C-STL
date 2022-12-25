/* free example */
#include <stdlib.h> /* malloc, calloc, realloc, free */
#include <iostream>
using namespace std;

int main()
{
    int *buffer1, *buffer2, *buffer3;
    buffer1 = (int *)malloc(100 * sizeof(int));
    cout << sizeof(buffer1) << endl;
    // above sentance allocate the memory of the 100 time's of int size

    buffer2 = (int *)calloc(100, sizeof(int));
    cout << sizeof(buffer2) << endl;
    // above sentance allocate the memory of 100 block of size of int

    buffer3 = (int *)realloc(buffer2, 500 * sizeof(int));
    cout << sizeof(buffer3) << endl;
    // above sentance raalloc the memory of the buffer2
    // and now buffer2 new memory is 500 time's of int size

    free(buffer1);
    free(buffer3);
    return 0;
}