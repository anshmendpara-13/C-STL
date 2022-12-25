// unordered_multiset::bucket_size
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<int> myums =
        {1, 2, 3, 4, 5, 6, 5, 5, 8, 5, 6, 2, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    unsigned nbuckets = myums.bucket_count();

    cout << "myums has " << nbuckets << " buckets:\n";

    for (unsigned i = 0; i < nbuckets; ++i)
    {
        cout << "bucket #" << i << " has " << myums.bucket_size(i) << " elements.\n";
    }

    return 0;
}