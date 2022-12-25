// forward_list::assign
#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> first;
    forward_list<int> second;

    first.assign(4, 15); // 15 15 15 15

    second.assign(first.begin(), first.end()); // 15 15 15 15

    first.assign({77, 2, 16}); // 77 2 16

    cout << "first contains: ";
    for (auto &x : first)
    {
        cout << ' ' << x;
        //   cout << '\n';
    }

    cout << "" << endl; 
    
    cout << "second contains: ";
    for (auto &x : second)
    {
        cout << ' ' << x;
        //   cout << '\n';
    }
    return 0;
}