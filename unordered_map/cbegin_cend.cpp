// unordered_map::cbegin/cend example
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> mymap;
    mymap = {{"Australia", "Canberra"}, {"U.S.", "Washington"}, {"France", "Paris"}};

    cout << "mymap contains:";
    cout << endl;
    for (auto it = mymap.cbegin(); it != mymap.cend(); ++it)
    {
        cout << it->first << ":" << it->second; // cannot modify *it
        cout << endl;
    }
    cout << "mymap's buckets contain:\n";
    for (unsigned i = 0; i < mymap.bucket_count(); ++i)
    {
        cout << "bucket #" << i << " contains:";
        for (auto local_it = mymap.cbegin(i); local_it != mymap.cend(i); ++local_it)
        {
            cout << " " << local_it->first << ":" << local_it->second;
        }
        cout << endl;
    }

    return 0;
}