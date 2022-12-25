// map::begin/end
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> mymap;
    // map<char, int>::iterator it;

    mymap['b'] = 100;
    mymap['a'] = 200;
    mymap['c'] = 300;
    mymap['1'] = 100;
    mymap['4'] = 400;
    mymap['2'] = 200;
    mymap['3'] = 300;
    mymap['5'] = 500;
    // mymap print the element in sorted order
    // first number and after alphabet

    // show content:
    for (auto it = mymap.begin(); it != mymap.end(); ++it)
    {
        cout << it->first << " => " << it->second << '\n';
    }

    return 0;
}

// we also use crbegin and crend to reverse print the element