// unordered_multimap::bucket_count
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_multimap<string, string> myumm = {
        {"bed", "bedroom"},
        {"oven", "kitchen"},
        {"towel", "bathroom"},
        {"towel", "beach"},
        {"plant", "garden"}};

    unsigned n = myumm.bucket_count();

    cout << "myumm has " << n << " buckets.\n";

    for (unsigned i = 0; i < n; ++i)
    {
        cout << "bucket #" << i << " contains: ";
        for (auto it = myumm.begin(i); it != myumm.end(i); ++it)
        {
            cout << "[" << it->first << ":" << it->second << "] ";
        }
        cout << "\n";
    }

    return 0;
}

// load_factor, max_backet_count, max_size, max_load_factor are already in the unordered_map