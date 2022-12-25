// forward_list::before_begin
#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> mylist = {20, 30, 40, 50};

    mylist.insert_after(mylist.before_begin(), 11);

    cout << "mylist contains:";
    for (int &x : mylist)
    {
        cout << ' ' << x;
        // cout << '\n';
    }
    return 0;
}