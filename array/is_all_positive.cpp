// c++ code to demonstrate working of all_of()
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    // initiallizing array
    int ar[6] = {1, 2, 3, 4, 5, -6};
    // checking if all elements are positive
    all_of(ar, ar + 6, [](int x)
           { return x > 0; })
        ? cout << "all are positive elements"
        : cout << "all are not positive elements" << endl;
}