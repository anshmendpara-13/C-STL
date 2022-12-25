// set::cbegin/cend
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> myset = {50, 20, 60, 10, 25};

    cout << "myset contains:";
    for (auto it = myset.cbegin(); it != myset.cend(); ++it)
    {
        cout << ' ' << *it;
        // cout << '\n';
    }
    return 0;
}