// set::max_size
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int i;
    set<int> myset;

    if (myset.max_size() > 1000)
    {
        for (i = 0; i < 1000; i++)
        {
            myset.insert(i);
        }
        cout << "The set contains 1000 elements.\n";
    }
    else
        cout << "The set could not hold 1000 elements.\n";

    return 0;
}