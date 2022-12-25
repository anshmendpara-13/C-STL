// unordered_map::emplace
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> mymap;
    // emplace one type of a inserting

    mymap.emplace("NCC-1701", "J.T. Kirk");
    mymap.emplace("NCC-1701-D", "J.L. Picard");
    mymap.emplace("NCC-74656", "K. Janeway");

    cout << "mymap contains:" << endl;
    for (auto &x : mymap)
    {
        cout << x.first << ": " << x.second << endl;
        // cout << endl;
    }
    return 0;
}