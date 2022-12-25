// erasing from deque
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> mydeque;
    deque<int>::iterator it;
    // set some values (from 1 to 10)
    for (int i = 1; i <= 10; i++)
    {
        mydeque.push_back(i);
    }

    // erase the 6th element
    mydeque.erase(mydeque.begin() + 5);
    // this index start from 0

    // erase the first 3 elements:
    mydeque.erase(mydeque.begin(), mydeque.begin() + 3);

    cout << "mydeque contains:";
    for (it = mydeque.begin(); it != mydeque.end(); ++it)
    {
        cout << ' ' << *it;
        //   cout << '\n';
    }
    return 0;
}