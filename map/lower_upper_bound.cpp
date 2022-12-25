// map::lower_bound/upper_bound
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> mymap;
    map<char, int>::iterator itlow, itup;

    mymap['a'] = 20;
    mymap['b'] = 40;
    mymap['c'] = 60;
    mymap['d'] = 80;
    mymap['e'] = 100;

    itlow = mymap.lower_bound('b'); // itlow points to b
    itup = mymap.upper_bound('d');  // itup points to e (not d!)
    // above line till e are open
    // -> [itlow, itup + 1]

    mymap.erase(itlow, itup); // erases [itlow,itup)
    // so in this case a are not deleted but d are deleted

    // print content:
    for (auto it = mymap.begin(); it != mymap.end(); ++it)
    {
        cout << it->first << " => " << it->second << '\n';
    }

    return 0;
}