// deque::end
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> mydeque;

    for (int i = 1; i <= 5; i++)
    {
        mydeque.insert(mydeque.end(), i);
        // insert first index take position and second take value
        // in this case this index alway are last because of the loop
        // in this case loop are running and i value incerese and store in deque
    }

    cout << "mydeque contains:";

    deque<int>::iterator it = mydeque.begin();

    while (it != mydeque.end())
    {
        cout << ' ' << *it++;
        //   cout << '\n';
    }
    return 0;
}