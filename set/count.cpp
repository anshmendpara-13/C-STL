// set::count
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> myset;

    // set some initial values:
    for (int i = 1; i < 5; ++i)
    {
        myset.insert(i * 3);
    } // set: 3 6 9 12

    for (int i = 0; i < 13; ++i)
    {
        cout << i;
        if (myset.count(i) != 0)
        {
            cout << " is an element of myset.\n";
        }
        else
        {
            cout << " is not an element of myset.\n";
        }
    }

    return 0;
}