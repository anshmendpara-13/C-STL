// clearing unordered_map
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> mymap =
        {{"house", "maison"}, {"car", "voiture"}, {"grapefruit", "pamplemousse"}};

    cout << "mymap contains:";
    cout << endl; 
    for (auto &x : mymap)
    {
        cout << " " << x.first << "=" << x.second;
        cout << endl;
    }
    mymap.clear();
    mymap["hello"] = "bonjour";
    mymap["sun"] = "soleil";

    cout << "mymap contains:";
    cout << endl; 


    for (auto &x : mymap)
    {
        cout << " " << x.first << "=" << x.second;
        cout << endl;
    }
    return 0;
}