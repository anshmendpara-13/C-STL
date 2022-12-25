// unordered_multimap::emplace
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_multimap<string, string> myumm;

    myumm.emplace("NCC-1701", "C. Pike");
    myumm.emplace("NCC-1701", "J.T. Kirk");
    myumm.emplace("NCC-1701-D", "J.L. Picard");
    myumm.emplace("NCC-74656", "K. Janeway");

    cout << "myumm contains:" << endl;
    for (auto &x : myumm)
    {
        cout << x.first << ": " << x.second << endl;
        // cout << endl;
    }
    return 0;
}

/*
NOTE:
-   Construct and insert element with hint
-   Inserts a new element in the unordered_multimap container. 
-   This new element is constructed in place using args as the arguments for the element's constructor. 
-   position points to a location in the container suggested as a hint on where to start the search for 
its insertion point (the container may or may not use this suggestion to optimize the insertion operation).

This effectively increases the container size by one.

A similar member function exists, insert, which either copies or moves an existing object into the container, and may also take a position hint.
*/