// unordered_multiset::cbegin/cend example
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<int> myums =
        // {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    // cout << (int)("a") << endl;
    // cout << (int)("b") << endl;

    cout << "myums contains:";
    for (auto it = myums.begin(); it != myums.end(); ++it)
    {
        cout << " " << *it; // cannot modify *it
    }
    cout << endl;
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