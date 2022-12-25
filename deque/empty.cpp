// deque::empty
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> mydeque;
    int sum(0);
    // int sum = 0;
    int mult(1);

    for (int i = 1; i <= 5; i++)
    {
        mydeque.push_back(i);
    }

    while (!mydeque.empty())
    {
        sum += mydeque.front();
        mult *= mydeque.front();
        mydeque.pop_front();
    }

    cout << "sum :- " << sum << '\n';
    cout << "factorial :- " << mult << '\n';

    return 0;
}