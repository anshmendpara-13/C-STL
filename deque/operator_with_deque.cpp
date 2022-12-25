// assignment operator with deques
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> first(3);  // deque with 3 zero-initialized ints
    deque<int> second(5); // deque with 5 zero-initialized ints

    second = first;
    // in above line second contain first size 
    first = deque<int>();
    // in above line at start first contain 5 size and after calling 
    // above line this size reduce to 0

    cout << "Size of first: " << int(first.size()) << '\n';
    cout << "Size of second: " << int(second.size()) << '\n';
    return 0;
}