// map::key_comp
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> mymap;

    map<char, int>::key_compare mycomp = mymap.key_comp();
    // key compare operator :- map<char,int> :: key_compare new = old.key_comp()

    mymap['a'] = 500;
    mymap['a'] = 200;
    mymap['c'] = 300;

    cout << "mymap contains:\n";

    char highest = mymap.rbegin()->first; // key value of last element

    map<char, int>::iterator it = mymap.begin();
    do
    {
        cout << it->first << " => " << it->second << '\n';
    } while (mycomp((*it++).first, highest));

    cout << '\n';

    return 0;
}

/*
return a copy of the comparison object used by the container to compare keys
two keys are considerd equivalent if key_comp returns false reflexively 
i.e, no matter the order in which the keys are passed as argument

note :-
when we declair same keys so last key are considerable and another are deleted

*/