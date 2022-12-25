// fill_n example
#include <iostream>  // cout
#include <algorithm> // fill_n
#include <vector>    // vector

// algorithem also have the generator function

using namespace std;

// fill_n functoin to use the fill value in your choice index

int main()
{
    vector<int> myvector(8, 10); // myvector: 10 10 10 10 10 10 10 10

    fill_n(myvector.begin(), 4, 20);     // myvector: 20 20 20 20 10 10 10 10
    fill_n(myvector.begin() + 3, 3, 33); // myvector: 20 20 20 33 33 33 10 10

    cout << "myvector contains:";
    for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
    {
        cout << ' ' << *it;
        // cout << '\n';
    }

    return 0;
}