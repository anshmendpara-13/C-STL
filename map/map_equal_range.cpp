// map::equal_range
#include <iostream>
#include <map>
#include <string.h>

using namespace std;

int main()
{
    map<char, int> mymap;

    // const char *g = "'h'";
    // cout << g << endl;

    mymap['a'] = 10;
    mymap['b'] = 20;
    mymap['f'] = 30;
    mymap['d'] = 40;

    pair<map<char, int>::iterator, map<char, int>::iterator> ret;
    ret = mymap.equal_range('b');

    cout << "lower bound points to: ";
    cout << ret.first->first << " => " << ret.first->second << '\n';

    cout << "upper bound points to: ";
    cout << ret.second->first << " => " << ret.second->second << '\n';

    return 0;
}

/*

What is lower bound C++?
The lower_bound() method in C++ is used to return an iterator pointing to the first element in the range [first, last)
which has a value not less than val. This means that the function returns an iterator pointing to the next smallest number
just greater than or equal to that number.

What is upper bound C++?
upper_bound() is a standard library function in C++ defined in the heade. It returns an iterator pointing to
the first element in the range [first, last) that is greater than value, or last if no such element is found.
The elements in the range shall already be sorted or at least partitioned with respect to val.

*/