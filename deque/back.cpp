// deque::back
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> mydeque;
    deque<int>::iterator it;

    mydeque.push_back(100);

    while (mydeque.back() != 0)
    {
        mydeque.push_back(mydeque.back() - 1);
    }

    cout << "mydeque contains:";

    for (it = mydeque.begin(); it != mydeque.end(); ++it)
    {
        cout << ' ' << *it;
        // cout << '\n';
    }
    return 0;
}