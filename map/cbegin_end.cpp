// map::cbegin/cend
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> mymap;

    mymap['b'] = 100;
    mymap['a'] = 200;
    mymap['c'] = 300;

    // print content:
    cout << "mymap contains:";
    for (auto it = mymap.cbegin(); it != mymap.cend(); ++it)
    {
        // cout << " [" << (*it).first << ':' << (*it).second << ']';
        cout << " [" << (it)->first << ':' << (it)->second << ']';
        // cout << '\n';
    }

    return 0;
}

/*
the conntainer is accessed
no contained elements are accessed by the call, but the iterrator returned can be used to access them.
concurrently accessing or modifying different elements is safe.
*/