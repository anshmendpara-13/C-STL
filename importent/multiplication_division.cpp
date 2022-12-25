#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n = n << 8; // multiply n with 2
    // in above line 8 is a power of 2
    cout << n << endl;
    n = n >> 9;
    cout << n << endl; // divide n by 2
    return 0;
}