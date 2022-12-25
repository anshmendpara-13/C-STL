// search_n example
#include <iostream>  // cout
#include <algorithm> // search_n
#include <vector>    // vector

using namespace std;

bool mypredicate(int i, int j)
{
    return (i == j);
}

int main()
{
    int myints[] = {10, 20, 30, 30, 20, 10, 10, 10, 20};
    vector<int> myvector(myints, myints + 9);

    // convert array to vactor and using iterator find the value in array

    vector<int>::iterator it;

    // using default comparison:
    it = search_n(myvector.begin(), myvector.end(), 2, 30);

    if (it != myvector.end())
    {
        cout << "two 30s found at position " << (it - myvector.begin()) << '\n';
    }
    else
    {
        cout << "match not found\n";
    }

    // using predicate comparison:
    it = search_n(myvector.begin(), myvector.end(), 2, 10, mypredicate);

    if (it != myvector.end())
    {
        cout << "two 10s found at position " << int(it - myvector.begin()) << '\n';
    }
    else
    {
        cout << "match not found\n";
    }

    return 0;
}