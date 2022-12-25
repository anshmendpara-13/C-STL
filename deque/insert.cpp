// inserting into a deque
#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    deque<int> mydeque;

    // set some initial values:
    for (int i = 1; i < 6; i++)
    {
        mydeque.push_back(i);
    } // 1 2 3 4 5

    deque<int>::iterator it = mydeque.begin();
    // index 0
    ++it;
    // index 1

    it = mydeque.insert(it, 10); // 1 10 2 3 4 5
    // "it" now points to the newly inserted 10

    mydeque.insert(it, 2, 20); // 1 20 20 10 2 3 4 5
    // function executing start where ?
    // where this pointer point at last this position are starting position to executing new think

    // "it" no longer valid!

    it = mydeque.begin() + 2;

    vector<int> myvector(2, 30);
    // this line are start from index 2
    // this start before index 2 and after 1

    mydeque.insert(it, myvector.begin(), myvector.end());
    // 1 20 30 30 20 10 2 3 4 5

    cout << "mydeque contains:";
    for (it = mydeque.begin(); it != mydeque.end(); ++it)
    {
        cout << ' ' << *it;
        // cout << '\n';
    }
    return 0;
}