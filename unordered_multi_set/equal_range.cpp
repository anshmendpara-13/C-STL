// unordered_multiset::equal_range
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<int> myums =
        {1, 2, 3, 4, 5, 6, 7, 8, 8, 7, 5, 3, 4, 5, 1, 7, 6, 8, 9, 2, 15, 23, 10, 12, 17, 3, 14, 19, 18, 5, 12, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    auto myrange = myums.equal_range(1);

    cout << "These 1 were found:";

    while (myrange.first != myrange.second)
    {
        cout << " " << *myrange.first++;
    }

    cout << endl;

    return 0;
}