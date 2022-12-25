// unordered_multiset::count
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<int> myums =
        {1, 2, 3, 4, 5, 6, 7, 8, 8, 7, 5, 3, 4, 5, 1, 7, 6, 8, 9, 2, 15, 23, 10, 12, 17, 3, 14, 19, 18, 5, 12, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    for (auto &x : {1, 8, 13})
    {
        cout << x << ": " << myums.count(x) << endl;
    }

    return 0;
}