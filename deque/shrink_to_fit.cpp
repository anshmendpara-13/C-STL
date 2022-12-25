// deque::shrink_to_fit
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> mydeque(100);
    cout << "1. size of mydeque: " << mydeque.size() << '\n';

    mydeque.resize(10);
    cout << "2. size of mydeque: " << mydeque.size() << '\n';

    mydeque.shrink_to_fit();

    return 0;
}