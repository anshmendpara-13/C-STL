// map::empty
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> mymap;

    mymap['a'] = 10;
    mymap['b'] = 20;
    mymap['c'] = 30;

    while (!mymap.empty())
    {
        cout << mymap.begin()->first << " => " << mymap.begin()->second << '\n';
        mymap.erase(mymap.begin());
    }

    return 0;
}