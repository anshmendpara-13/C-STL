// unordered_set::cbegin/cend example
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<string> myset =
        {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"};

    cout << "myset contains:";
    for (auto it = myset.cbegin(); it != myset.cend(); ++it)
    {
        cout << " " << *it; // cannot modify *it
        cout << endl;
    }
    cout << "myset's buckets contain:\n";
    for (unsigned i = 0; i < myset.bucket_count(); ++i)
    {
        cout << "bucket #" << i << " contains:";
        for (auto local_it = myset.cbegin(i); local_it != myset.cend(i); ++local_it)
        {
            cout << " " << *local_it;
        }
        cout << endl;
    }

    return 0;
}