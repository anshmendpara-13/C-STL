// unordered_map::erase
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> mymap;

    // populating container:
    mymap["U.S."] = "Washington";
    mymap["U.K."] = "London";
    mymap["France"] = "Paris";
    mymap["Russia"] = "Moscow";
    mymap["China"] = "Beijing";
    mymap["Germany"] = "Berlin";
    mymap["Japan"] = "Tokyo";

    cout << "before delete" << endl;
    for (auto &x : mymap)
    {
        cout << x.first << ": " << x.second << endl;
    }
    cout << endl;

    // erase examples:
    mymap.erase(mymap.begin());                    // erasing by iterator
    mymap.erase("France");                         // erasing by key
    mymap.erase(mymap.find("China"), mymap.end()); // erasing by range

    cout << "after delete" << endl;
    // show content:
    for (auto &x : mymap)
    {
        cout << x.first << ": " << x.second << endl;
    }

    return 0;
}