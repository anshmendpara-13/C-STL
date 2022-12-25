// unordered_multiset::begin/end example
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<string> myums =
        {"father", "mother", "son", "daughter", "son", "son"};

    cout << "myums contains:";
    for (auto it = myums.begin(); it != myums.end(); ++it)
    {
        cout << " " << *it;
        cout << endl;
    }
    cout << "myums's buckets contain:\n";
    for (unsigned i = 0; i < myums.bucket_count(); ++i)
    {
        cout << "bucket #" << i << " contains:";
        for (auto local_it = myums.begin(i); local_it != myums.end(i); ++local_it)
        {
            cout << " " << *local_it;
        }
        cout << endl;
    }

    return 0;
}