// set::crbegin/crend
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> myset = {50, 20, 60, 10, 25};

    cout << "myset backwards:";
    for (auto rit = myset.crbegin(); rit != myset.crend(); ++rit)
    {
        cout << ' ' << *rit;
        // cout << '\n';
    }
    return 0;
}