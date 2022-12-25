// deque::emplace
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> mydeque = {10, 20, 30};

    // in starting it are in first index
    auto it = mydeque.emplace(mydeque.begin() + 1, 100);
    // emplace function are first argument are index and
    // second argument are value of this index

    mydeque.emplace(it, 200);
    mydeque.emplace(mydeque.end(), 300);

    mydeque.emplace_front(212);
    mydeque.emplace_front(232);
    mydeque.emplace_back(123);
    mydeque.emplace_back(100);

    cout << "mydeque contains:";
    for (auto &x : mydeque)
    /*
    in this type of for loop &x are pointing first index of mydeque
    in this sentance index means this index value
    */
    {
        cout << ' ' << x;
        // this statement are print the value of the given index
    }
    return 0;
}