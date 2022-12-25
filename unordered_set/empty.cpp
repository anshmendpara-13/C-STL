// unordered_set::empty
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<string> first;
    unordered_set<string> second = {"alpha", "beta", "gamma"};
    cout << "first " << (first.empty() ? "is empty" : "is not empty") << endl;
    cout << "second " << (second.empty() ? "is empty" : "is not empty") << endl;
    return 0;
}