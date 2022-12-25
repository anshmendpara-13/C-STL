// set::empty
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> myset;

    myset.insert(20);
    myset.insert(30);
    myset.insert(10);

    cout << "myset contains:";
    while (!myset.empty())
    {
        cout << ' ' << *myset.begin();
        myset.erase(myset.begin());
    }
    cout << '\n';

    return 0;
}