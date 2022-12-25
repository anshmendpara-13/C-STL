// unordered_multiset::bucket
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<int> myums =
        {1, 2, 3, 4, 5, 6, 5, 5, 8, 5, 6, 2, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    for (const int &x : myums)
    {
        cout << x << " is in bucket #" << myums.bucket(x) << endl;
    }

    return 0;
}