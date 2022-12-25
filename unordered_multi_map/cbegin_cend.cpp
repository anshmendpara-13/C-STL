// unordered_multimap::cbegin/cend example
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_multimap<string, string> myumm = {
        {"apple", "red"},
        {"apple", "green"},
        {"orange", "orange"},
        {"strawberry", "red"}};

    cout << "myumm contains:";
    cout << endl;
    for (auto it = myumm.cbegin(); it != myumm.cend(); ++it)
    {
        cout << it->first << ":" << it->second; // cannot modify *it
        cout << endl;
    }

    cout << "myumm's buckets contain:\n";
    for (unsigned i = 0; i < myumm.bucket_count(); ++i)
    {
        cout << "bucket #" << i << " contains:";
        for (auto local_it = myumm.cbegin(i); local_it != myumm.cend(i); ++local_it)
        {
            cout << " " << local_it->first << ":" << local_it->second;
        }
        cout << endl;
    }

    return 0;
}