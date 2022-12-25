// unordered_multiset::emplace
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<string> myums;

    myums.emplace("milk");
    myums.emplace("tea");
    myums.emplace("coffee");
    myums.emplace("milk");

    cout << "myums contains:";
    for (const string &x : myums)
    {
        cout << " " << x;
        cout << endl;
    }
    return 0;
}