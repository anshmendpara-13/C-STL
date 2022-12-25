// fill algorithm example
#include <iostream>  // cout
#include <algorithm> // fill
#include <vector>    // vector

using namespace std;

// IN VECTOR : print the value of vactor so we always use the iterator and --> next line
// point the vlaue with poiter and conduct (++) operation and print the value with for or any loop.

// vector only contain one argument and this argument are type of variable
// array contain type of variable and size of the array
// vector are manage space dynamicaly

int main()
{
    vector<int> myvector(8); // myvector: 0 0 0 0 0 0 0 0

    fill(myvector.begin(), myvector.begin() + 4, 5);   // myvector: 5 5 5 5 0 0 0 0
    fill(myvector.begin() + 3, myvector.end() - 2, 8); // myvector: 5 5 5 8 8 8 0 0

    cout << "myvector contains:";
    for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
    {
        cout << ' ' << *it; // alway point the iterator it  --> *it
        // cout << '\n';
    }

    return 0;
}