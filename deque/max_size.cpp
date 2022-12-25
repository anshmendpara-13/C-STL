// deque::max_size
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    unsigned int i;
    deque<int> mydeque;

    cout << "Enter number of elements: ";
    cin >> i;

    if (i < mydeque.max_size())
    {
        mydeque.resize(i);
    }
    else
    {
        cout << "That size exceeds the limit.\n";
    }

    return 0;
}