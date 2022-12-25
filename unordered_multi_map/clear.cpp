// clearing unordered_multimap
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_multimap<string, string> myumm =
        {{"Tom", "Produce"}, {"Bob", "Toys"}, {"Bob", "Garden"}};

    cout << "myumm contains:";
    cout << endl;
    for (auto &x : myumm)
    {
        cout << x.first << ":" << x.second;
        cout << endl;
    }

    myumm.clear();
    myumm.insert(make_pair("Bob", "Jail"));

    cout << "myumm contains:";
    {
        for (auto &x : myumm)
            cout << " " << x.first << ":" << x.second;
        cout << endl;
    }

    return 0;
}