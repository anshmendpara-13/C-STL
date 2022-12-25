// queue::emplace
#include <iostream> // cin, cout
#include <queue>    // queue
#include <string>   // string, getline(string)

using namespace std;

int main()
{
    queue<string> myqueue;

    myqueue.emplace("First sentence");
    myqueue.emplace("Second sentence");
    // emplace function to add senctance in myqueue

    cout << "myqueue contains:\n";
    while (!myqueue.empty())
    {
        cout << myqueue.front() << '\n';
        myqueue.pop();
    }

    return 0;
}