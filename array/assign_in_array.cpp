// array::at
#include <iostream>
#include <array>
using namespace std;

int main()
{
    // array<int, 10> myarray;

    int myarray[10];

    // assign some values:
    for (int i = 0; i < 10; i++)
    {
        // myarray.at(i) = i + 1;
        myarray[i] = i + 1;
    }

    // print content:
    cout << "myarray contains : \n";
    for (int i = 0; i < 10; i++)
    {
        // cout << ' ' << myarray.at(i);
        // cout << '\n'
        cout << myarray[i] << endl;
    }

    array<int, 0> first;  // this is a empty array becaous of this array contain zero element space
    array<int, 5> second; // this array is not empty this contain 5 elements space
    cout << "first " << (first.empty() ? "is empty" : "is not empty") << '\n';
    cout << "second " << (second.empty() ? "is empty" : "is not empty") << '\n';

    return 0;
}