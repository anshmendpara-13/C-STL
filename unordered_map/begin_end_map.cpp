// unordered_map::begin/end example
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> mymap;
    mymap = {{"Australia", "Canberra"}, {"U.S.", "Washington"}, {"France", "Paris"}};

    cout << "mymap contains:";
    cout << "" << endl;
    for (auto it = mymap.begin(); it != mymap.end(); ++it)
    {
        cout << it->first << ":" << it->second;
        cout << endl;
    }

    cout << "" << endl;

    cout << "mymap's buckets contain:\n";
    for (unsigned i = 0; i < mymap.bucket_count(); ++i)
    {
        cout << "bucket #" << i << " contains:";
        for (auto local_it = mymap.begin(i); local_it != mymap.end(i); ++local_it)
        {
            cout << " " << local_it->first << ":" << local_it->second;
        }
        cout << endl;
    }

    return 0;
}