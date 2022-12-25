// unordered_multiset::find
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<string> myums =
        {"cow", "cow", "pig", "sheep", "pig"};

    unordered_multiset<string>::iterator it = myums.find("pig");

    if (it != myums.end())
    {
        cout << *it << " found" << endl;
    }

    return 0;
}