// set::value_comp
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> myset;

    set<int>::value_compare mycomp = myset.value_comp();

    for (int i = 0; i <= 5; i++)
    {
        myset.insert(i);
    }

    cout << "myset contains:";

    int highest = *myset.rbegin();
    set<int>::iterator it = myset.begin();
    do
    {
        cout << ' ' << *it;
    } while (mycomp(*(++it), highest));

    cout << '\n';

    return 0;
}