// array::operator[]
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> myarray;
    unsigned int i;

    // assign some values:
    for (i = 0; i < 12; i++)
    {
        myarray[i] = i;
    }

    // print content
    cout << "myarray contains:";
    for (i = 0; i < 12; i++)
    {
        cout << ' ' << myarray[i] + 1;
        // cout << '\n';
    }

    return 0;
}