// array::fill example
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 6> myarray;  // this array size is 6 

    myarray.fill(13);   // this array all position become value of 5

    cout << "myarray contains:";
    for (int &x : myarray)
    {
        cout << ' ' << x;
    }

    cout << '\n';

    return 0;
}