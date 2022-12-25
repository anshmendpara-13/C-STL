// queue::front
#include <iostream> // cout
#include <queue>    // queue

using namespace std;

int main()
{
    queue<int> myqueue;

    myqueue.push(77);
    myqueue.push(14);
    myqueue.push(14);

    myqueue.front() -= myqueue.back(); // 77-14=63
    // this function are delete first(input) - last(input)

    cout << "myqueue.front() is now " << myqueue.front() << '\n';

    return 0;
}