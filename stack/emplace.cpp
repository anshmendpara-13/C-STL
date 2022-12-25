// stack::emplace
#include <iostream> // cin, cout
#include <stack>    // stack
#include <string>   // string, getline(string)

using namespace std;

int main()
{
    stack<string> mystack;

    mystack.emplace("First sentence");
    mystack.emplace("Second sentence");

    cout << "mystack contains :-\n";
    while (!mystack.empty())
    {
        cout << mystack.top() << '\n';
        mystack.pop();
    }

    return 0;
}