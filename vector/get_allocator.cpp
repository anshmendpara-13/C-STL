// vector::get_allocator
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myvector;
    int *p;
    unsigned int i;

    // allocate an array with space for 5 elements using vector's allocator:
    p = myvector.get_allocator().allocate(5);

    // construct values in-place on the array:
    for (i = 0; i < 5; i++)
    {
        myvector.get_allocator().construct(&p[i], i);
    }

    cout << "The allocated array contains:";
    for (i = 0; i < 5; i++)
    {
        cout << ' ' << p[i];
        // cout << '\n';
    }
    // destroy and deallocate:
    for (i = 0; i < 5; i++)
    {
        myvector.get_allocator().destroy(&p[i]);
    }
    myvector.get_allocator().deallocate(p, 5);

    return 0;
}