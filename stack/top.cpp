// stack::top
#include <iostream> // cout
#include <stack>    // stack

using namespace std;

int main()
{
    stack<int> mystack;

    mystack.push(10);
    mystack.push(20);

    mystack.top() -= 5;

    cout << "mystack.top() is now " << mystack.top() << '\n';

    return 0;
}