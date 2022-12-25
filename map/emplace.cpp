// map::emplace
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> mymap;

    mymap.emplace('x', 100);
    mymap.emplace('y', 200);
    mymap.emplace('z', 100);

    cout << "mymap contains:";
    for (auto &x : mymap)
    {
        cout << " [" << x.first << ':' << x.second << ']';
        // cout << '\n';
    }
    return 0;
}