// set::emplace_hint
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    set<string> myset;
    auto it = myset.cbegin();
                            
    myset.emplace_hint(it, "alpha");
    it = myset.emplace_hint(myset.cend(), "omega");
    it = myset.emplace_hint(it, "epsilon");
    it = myset.emplace_hint(it, "beta");

    cout << "myset contains:";
    for (const string &x : myset)
    {
        cout << ' ' << x;
        //   cout << '\n';
    }
    return 0;
}