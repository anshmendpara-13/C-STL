// C++ program to demonstrate array of strings using
// pointers character array
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Initialize array of pointer
    const char *colour[4] = {"Blue", "Red", "Orange", "Yellow"};
    // in above line * is point to position

    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)
    {
        cout << colour[i] << "\n";
    }

    return 0;
}