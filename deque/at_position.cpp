// deque::at
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<unsigned> mydeque(10); // 10 zero-initialized unsigneds
    // first perameter in this funciton are size of the deque

    // assign some values:
    for (unsigned i = 0; i < mydeque.size(); i++)
    {
        mydeque.at(i) = i;
    }

    cout << "mydeque contains:";
    for (unsigned i = 0; i < mydeque.size(); i++)
    {
        cout << ' ' << mydeque.at(i);
        //   cout << '\n';
    }
    return 0;
}

// we also insert own value