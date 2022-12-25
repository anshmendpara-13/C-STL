// unordered_multimap::bucket
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_multimap<string, string> myumm = {
        {"John", "Middle East"},
        {"John", "Africa"},
        {"Adam", "Europe"},
        {"Bill", "Norh-America"}};

    for (auto &x : myumm)
    {
        cout << "Element [" << x.first << ":" << x.second << "]";
        cout << " is in bucket #" << myumm.bucket(x.first) << endl;
    }

    return 0;
}

/*
return the bucket number where the elements with key k are located
a bucket is a slot in the container's internal hash table to which elements are assigned based on the hash value of their key.
elements with the same key arre located in the same bucket.
buckets are numbered from 0 to (bucket_count - 1)
*/