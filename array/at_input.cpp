// array::at
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> myarray;

    // // assign some values:
    // for (int i = 0; i < 10; i++)
    // {
    //     myarray.at(i) = i + 1;
    // }

    // // print content:
    // cout << "myarray contains :- ";
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << ' ' << myarray.at(i);
    //     //   cout << '\n';
    // }
    cout << "please enter the vaule :- " << endl; 
    for (int i = 0; i < 5; i++)
    {
        int c;
        cin >> c;
        myarray.at(i) = c;
    }
    cout << "myarray contain :- " << endl; 
    for (int i = 0; i < 5; i++)
    {
        cout << myarray.at(i) << " ";
    }

    return 0;
}