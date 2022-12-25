/*
note :-
begin() returns an iterator to beginning while cbegin() returns a const_iterator to beginning. 
The basic difference between these two is iterator (i.e begin() ) 
lets you change the value of the object it is pointing to and 
const_iterator will not let you change the value of the object.

The crbegin() is a built-in function in C++ STL which returns a 
constant iterator pointing to the last element in the container. 
The iterator cannot be used to modify the elements in the set container. 
The iterators can be increased or decreased to traverse the set accordingly.
*/


// deque::begin
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> mydeque;

    for (int i = 1; i <= 5; i++)
    {
        mydeque.push_back(i);
        // always adding new element in the end of deque
    }
    cout << "mydeque contains:";

    deque<int>::iterator it = mydeque.begin();

    while (it != mydeque.end())
    {
        cout << ' ' << *it++;
        // cout << '\n';
    }

    return 0;
}