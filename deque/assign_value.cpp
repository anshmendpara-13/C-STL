// deque::assign
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> first;
    deque<int> second;
    deque<int> third;

    // first are index and second are that index value
    first.assign(7, 100); // 7 ints with a value of 100

    deque<int>::iterator it;
    it = first.begin() + 1;
    // cout << *it << endl; 

    second.assign(it, first.end() - 1); // the 5 central values of first
    // cout << *it << endl; 

    int myints[] = {1776, 7, 4};
    third.assign(myints, myints + 3); // assigning from array.

    cout << "Size of first: " << int(first.size()) << '\n';
    cout << "Size of second: " << int(second.size()) << '\n';
    cout << "Size of third: " << int(third.size()) << '\n';
    return 0;
}