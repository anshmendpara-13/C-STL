// unordered_set::hash_function
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

typedef unordered_set<string> stringset;

int main()
{
    stringset myset;
    stringset::hasher fn = myset.hash_function();

    cout << "that: " << fn("that") << endl;
    cout << "than: " << fn("than") << endl;

    return 0;
}