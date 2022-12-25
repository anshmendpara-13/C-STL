// deque::push_front
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> mydeque(2, 100); // two ints with a value of 100
    deque<int>::iterator it;

    mydeque.push_front(200);
    mydeque.push_front(300);
    mydeque.push_back(123);
    mydeque.push_back(100);

    cout << "mydeque contains:";
    for (it = mydeque.begin(); it != mydeque.end(); ++it)
    {
        cout << ' ' << *it;
    }
    cout << endl;

    mydeque.pop_front();
    mydeque.pop_back();

    cout << "mydeque contains:";
    for (it = mydeque.begin(); it != mydeque.end(); ++it)
    {
        cout << ' ' << *it;
    }

    return 0;
}