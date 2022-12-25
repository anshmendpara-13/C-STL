#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);

    stack.pop();
    // stack.pop();

    while (!stack.empty())
    {
        cout << ' ' << stack.top();
        stack.pop();
    }
}

// stack work in the filo method
// first in last out
// this are point the last in argument which are in the first position