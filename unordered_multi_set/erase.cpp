// unordered_multiset::erase
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<int> myums =
        // {"fish", "duck", "cow", "cow", "pig", "hen", "sheep"};
        {2,5,1,4,2,4,5};

    // myums.erase(myums.begin());                   // erasing by iterator
    // myums.erase("sheep");                         // erasing by key
    // myums.erase(myums.find("fish"), myums.end()); // erasing by range

    cout << "myums contains:";
    for (const int &x : myums)
    {
        cout << " " << x;
        cout << endl;
    }

    return 0;
}