/*
NOTE:
Locate element's bucket
Returns the bucket number where the element with value k is located.

A bucket is a slot in the container's internal hash table to which elements are assigned based on their hash value. 
Buckets are numbered from 0 to (bucket_count-1).

The order number of the bucket corresponding to k.

Member type size_type is an unsigned integral type.
*/

// unordered_set::bucket
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<string> myset = {"water", "sand", "ice", "foam"};

    for (const string &x : myset)
    {
        cout << x << " is in bucket #" << myset.bucket(x) << endl;
    }

    return 0;
}