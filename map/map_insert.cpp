// map::insert (C++98)
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> mymap;

    // first insert function version (single parameter):
    mymap.insert(pair<char, int>('a', 100));
    mymap.insert(pair<char, int>('z', 200));

    pair<map<char, int>::iterator, bool> ret;
    ret = mymap.insert(pair<char, int>('z', 500));
    if (ret.second == false)
    {
        cout << "element 'z' already existed";
        cout << " with a value of " << ret.first->second << '\n';
    }

    // second insert function version (with hint position):
    map<char, int>::iterator it = mymap.begin();
    mymap.insert(it, pair<char, int>('b', 300)); // max efficiency inserting
    mymap.insert(it, pair<char, int>('c', 400)); // no max efficiency inserting

    // third insert function version (range insertion):
    map<char, int> anothermap;
    anothermap.insert(mymap.begin(), mymap.find('c'));
    // above line add contain till this function find key c in this case that can be happen

    // showing contents:
    cout << "mymap contains:\n";
    for (it = mymap.begin(); it != mymap.end(); ++it)
    {
        cout << it->first << " => " << it->second << '\n';
    }

    cout << "anothermap contains:\n";
    for (it = anothermap.begin(); it != anothermap.end(); ++it)
    {
        cout << it->first << " => " << it->second << '\n';
    }

    return 0;
}

/*

insert elements
-   extends the container by inserting new elements, effectivelly increasing the container size by the nubmer of elements inserted.
-   because element keys in a map are unique, the insertion operation checks whether each inserted elements has a key equivalent to
the one of an element already in the container, and if so, the elements is not inserted, returning an iterator to this existing elements
-   for a similar container allowing for duplicate elements, see
-   an alternative way to insert elements in a map is by using member function map::operator[]
-   internally, map containers keep all their elements sorted by their key following the criterion specified by its comparison object.
the elements are always inserted in its respective position following this ordering.
-   the parameters determine how many elements are inserted and to which values they are initialilzed.

*/