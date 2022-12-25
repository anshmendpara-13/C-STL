// C++ program to illustrate
// map::max_size()
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // initialize container
    map<int, int> mymap, mp2;

    cout << "Enter the number of element :" << endl; 
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cout << "Enter the key and value with space :- " << endl; 
        cin >> a >> b;
        mymap.insert({a, b});
    }

    // mymap.insert({1, 2});
    // mymap.insert({2, 3});
    // mymap.insert({3, 4});

    cout << "mymap contains:\n";
    for (auto it = mymap.begin(); it != mymap.end(); ++it)
    {
        cout << it->first << " => " << it->second << '\n';
    }

    // max size of Empty-map
    cout << "\nThe size of mp2 is " << mymap.size();
    cout << "\nThe max size of mp2 is " << mp2.max_size();
    return 0;
}