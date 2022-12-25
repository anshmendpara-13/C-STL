// unordered_multiset::key_eq
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<string> myums;

    bool case_insensitive = myums.key_eq()("case", "CASE");

    cout << "myums.key_eq() is ";
    cout << (case_insensitive ? "case insensitive" : "case sensitive");
    cout << endl;

    return 0;
}