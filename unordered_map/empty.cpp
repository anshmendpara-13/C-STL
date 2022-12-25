// unordered_map::empty
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, int> first;
    unordered_map<int, int> second = {{1, 10}, {2, 20}, {3, 30}};
    cout << "first " << (first.empty() ? "is empty" : "is not empty") << endl;
    cout << "second " << (second.empty() ? "is empty" : "is not empty") << endl;
    return 0;
}