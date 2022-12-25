// array::front
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 3> myarray = {2, 16, 77};

    cout << "front is: " << myarray.front() << endl; // 2
    cout << "back is: " << myarray.back() << endl;   // 77

    myarray.front() = 100;
    myarray.back() = 50;

    cout << "myarray now contains:";
    for (int &x : myarray)
    {
        cout << ' ' << x;

        // cout << '\n';
    }

    return 0;
}