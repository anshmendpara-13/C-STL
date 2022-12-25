// assignment operator with sets
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int myints[] = {12, 82, 37, 64, 15};
    set<int> first(myints, myints + 5); // set with 5 ints
    set<int> second;                    // empty set

    second = first;     // now second contains the 5 ints
    first = set<int>(); // and first is empty

    cout << "Size of first: " << int(first.size()) << '\n';
    cout << "Size of second: " << int(second.size()) << '\n';
    return 0;
}

// set.size() use for find the size of the set