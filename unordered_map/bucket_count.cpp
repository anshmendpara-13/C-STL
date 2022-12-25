/*
-   Return number of buckets
-   Returns the number of buckets in the unordered_map container.

-   A bucket is a slot in the container's internal hash table to which elements are assigned based on the hash value of their key.

-   The number of buckets influences directly the load factor of the container's hash table (and thus the probability of collision).
The container automatically increases the number of buckets to keep the load factor below a specific threshold (its max_load_factor),
causing a rehash each time the number of buckets needs to be increased.

*/

// unordered_map::bucket_count
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> mymap = {
        {"house", "maison"},
        {"apple", "pomme"},
        {"tree", "arbre"},
        {"book", "livre"},
        {"door", "porte"},
        {"grapefruit", "pamplemousse"}};

    unsigned n = mymap.bucket_count();

    cout << "mymap has " << n << " buckets.\n";

    for (unsigned i = 0; i < n; ++i)
    {
        cout << "bucket #" << i << " contains: ";
        for (auto it = mymap.begin(i); it != mymap.end(i); ++it)
        {
            cout << "[" << it->first << ":" << it->second << "] ";
        }
        cout << "\n";
    }

    return 0;
}