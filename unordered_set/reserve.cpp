// unordered_set::reserve
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std; 

int main()
{
    unordered_set<string> myset;

    myset.reserve(5);

    myset.insert("office");
    myset.insert("house");
    myset.insert("gym");
    myset.insert("parking");
    myset.insert("highway");

    cout << "myset contains:";
    for (const string &x : myset)
    {
        cout << " " << x;
        cout << endl;
    }

    return 0;
}