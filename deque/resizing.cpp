// resizing deque
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> mydeque;
    deque<int>::iterator it;

    // set some initial content:
    for (int i = 1; i < 10; ++i)
    {
        mydeque.push_back(i);
    }

    mydeque.resize(5);
    mydeque.resize(8, 100);
    mydeque.resize(12);

    /*
    The deque::resize() is an inbuilt function in C++ STL which changes the size of the deque. 
    If the given size is greater than the current size, then new elements are inserted at the end of the deque. 
    If the given size is smaller than the current size, then extra elements are destroyed.
    */

    cout << "mydeque contains:";
    for (it = mydeque.begin(); it != mydeque.end(); ++it)
    {
        cout << ' ' << *it;
        // cout << '\n';
    }

    return 0;
}