// unordered_multimap::bucket_size
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
int main()
{
    unordered_multimap<string, string> myumm = {
        {"John", "Alpha"},
        {"Alfred", "Beta"},
        {"Thomas", "Gamma"},
        {"John", "Delta"}};

    unsigned nbuckets = myumm.bucket_count();

    cout << "myumm has " << nbuckets << " buckets:\n";

    for (unsigned i = 0; i < nbuckets; ++i)
    {
        cout << "bucket #" << i << " has " << myumm.bucket_size(i) << " elements.\n";
    }

    return 0;
}