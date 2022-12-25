// set::clear
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> myset;

    myset.insert(100);
    myset.insert(200);
    myset.insert(300);

    cout << "myset contains:";
    for (set<int>::iterator it = myset.begin(); it != myset.end(); ++it)
    {
        cout << ' ' << *it;
        // cout << '\n';
    }

    cout << endl;

    myset.clear();
    myset.insert(1101);
    myset.insert(2202);

    cout << "myset contains:";
    for (set<int>::iterator it = myset.begin(); it != myset.end(); ++it)
    {
        cout << ' ' << *it;
        // cout << '\n';
    }
    return 0;
}