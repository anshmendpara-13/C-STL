// unordered_multiset::bucket_count
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<int> myums =
        {1, 2, 3, 4, 5, 6, 5, 5, 8, 5, 6, 2, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    unsigned n = myums.bucket_count();

    cout << "myums has " << n << " buckets.\n";

    for (unsigned i = 0; i < n; ++i)
    {
        cout << "bucket #" << i << " contains:";
        for (auto it = myums.begin(i); it != myums.end(i); ++it)
        {
            cout << " " << *it;
        }
        cout << "\n";
    }

    return 0;
}