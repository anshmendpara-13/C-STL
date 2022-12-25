// clearing deques
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    unsigned int i;
    deque<int> mydeque;
    deque<int>::iterator it;

    mydeque.push_back(100);
    mydeque.push_back(200);
    mydeque.push_back(300);

    cout << "mydeque contains:";
    for (it = mydeque.begin(); it != mydeque.end(); ++it)
    {
        cout << ' ' << *it;
        //   cout << '\n';
    }

    mydeque.clear();
    // this line clear all elememts which contain deque

    mydeque.push_back(1101);
    mydeque.push_back(2202);
    cout << endl;

    cout << "mydeque contains:";
    for (it = mydeque.begin(); it != mydeque.end(); ++it)
    {
        cout << ' ' << *it;
        //   cout << '\n';
    }
    return 0;
}