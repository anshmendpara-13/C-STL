// stack::swap
#include <iostream> // cout
#include <stack>    // stack

using namespace std;

int main()
{
    stack<int> foo, bar;
    foo.push(10);
    foo.push(20);
    foo.push(30);
    bar.push(111);
    bar.push(222);

    foo.swap(bar);

    cout << "size of foo: " << foo.size() << '\n';
    cout << "size of bar: " << bar.size() << '\n';

    return 0;
}