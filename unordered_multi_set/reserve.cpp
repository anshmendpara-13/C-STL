// unordered_multiset::reserve
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<string> myums;

    myums.reserve(5);

    myums.insert("klingon");
    myums.insert("human");
    myums.insert("vulcan");
    myums.insert("klingon");
    myums.insert("klingon");

    cout << "myums contains:";
    for (const string &x : myums)
    {
        cout << " " << x;
        cout << endl;
    }

    return 0;
}