// queue::swap
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> foo, bar;
    foo.push(10);
    foo.push(20);
    foo.push(30);
    bar.push(111);
    bar.push(222);

    foo.swap(bar);

    cout << "size of foo : " << foo.size() << '\n';
    cout << "size of bar : " << bar.size() << '\n';

    cout << foo.front() << endl; 
    cout << bar.front() << endl; 
    
    return 0;
}