// queue::empty
#include <iostream> // cout
#include <queue>    // queue

using namespace std;

int main()
{
    queue<int> myqueue;
    int sum(0);

    for (int i = 1; i <= 10; i++)
    {
        myqueue.push(i);
    }

    while (!myqueue.empty())
    {
        sum += myqueue.front();
        myqueue.pop();
    }

    cout << "total: " << sum << '\n';

    return 0;
}