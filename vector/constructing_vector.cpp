// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>::iterator it;
    // constructors used in the same order as described above:
    vector<int> first;                               // empty vector of ints
    vector<int> second(4, 100);                      // four ints with value 100
    vector<int> third(second.begin(), second.end()); // iterating through second
    // begin and end are use for iterating process
    vector<int> fourth(third); // a copy of third

    // the iterator constructor can also be used to construct from arrays:
    int myints[] = {16, 2, 77, 29};
    vector<int> fifth(myints, myints + sizeof(myints) / sizeof(int));
    // above line is very importent for vector

    cout << "The contents of fifth are:";
    for (it = fifth.begin(); it != fifth.end(); ++it)
    {
        cout << ' ' << *it;
        // cout << '\n';
    }
    return 0;
}