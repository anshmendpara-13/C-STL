// unordered_multiset::insert
#include <iostream>
#include <string>
#include <array>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<string> myums = {"red", "green", "blue"};
    array<string, 2> myarray = {"red", "yellow"};
    string mystring = "red";

    myums.insert(mystring);                       // copy insertion
    myums.insert(mystring + "dish");              // move insertion
    myums.insert(myarray.begin(), myarray.end()); // range insertion
    myums.insert({"purple", "orange"});           // initializer list insertion

    cout << "myums contains:";
    for (const string &x : myums)
    {
        cout << " " << x;
        cout << endl;
    }
    return 0;
}