// set::emplace
#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    set<string> myset;

    myset.emplace("foo");
    myset.emplace("bar");
    auto ret = myset.emplace("foo");

    if (!ret.second)
    {
        cout << "foo already exists in myset\n";
    }

    return 0;
}