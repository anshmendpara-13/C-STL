// unordered_multimap::empty
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_multimap<int, int> first;
    unordered_multimap<int, int> second = {{1, 10}, {2, 20}, {1, 15}};
    cout << "first " << (first.empty() ? "is empty" : "is not empty") << endl;
    cout << "second " << (second.empty() ? "is empty" : "is not empty") << endl;
    return 0;
}