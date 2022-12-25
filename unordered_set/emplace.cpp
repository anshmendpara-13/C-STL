// unordered_set::emplace
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std; 

int main()
{
    unordered_set<string> myset;

    myset.emplace("potatoes");
    myset.emplace("milk");
    myset.emplace("flour");

    cout << "myset contains:";
    for (const string &x : myset)
    {
        cout << " " << x;
    }

    cout << endl;
    return 0;
}