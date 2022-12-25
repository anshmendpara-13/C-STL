// unordered_multimap::equal_range
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;
typedef unordered_multimap<string, string> stringmap;

int main()
{
    stringmap myumm = {
        {"orange", "FL"},
        {"strawberry", "LA"},
        {"strawberry", "OK"},
        {"pumpkin", "NH"}};

    cout << "Entries with strawberry:";
    auto range = myumm.equal_range("strawberry");
    for_each(
        range.first,
        range.second,
        [](stringmap::value_type &x)
        { cout << " " << x.second; });

    return 0;
}