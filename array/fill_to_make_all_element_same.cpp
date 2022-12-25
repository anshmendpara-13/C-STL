#include <iostream>
#include <array>

using namespace std;

int main(void)
{

    int i;
    array<int, 5> arr;

    for (i = 0; i < 5; ++i)
    {
        arr[i] = i + 1;
    }

    cout << "Original array\n";
    for (i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
        cout << endl;
    }

    arr.fill(10);

    cout << "Modified array\n";
    for (i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}