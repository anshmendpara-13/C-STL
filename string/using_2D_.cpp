// C++ program to demonstrate array of strings using
// 2D character array
#include <iostream>

using namespace std;

int main()
{
    // Initialize 2D array
    char colour[4][10] = {"Blue", "Red", "Orange", "Yellow"};
    // this line meas total 4 point and all 4 size is 10

    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)
    {
        cout << colour[i] << "\n";
    }

    return 0;
}