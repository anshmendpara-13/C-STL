#include <iostream>
#include <string>

using namespace std;

void isPowerOfTwo(int x)
{
    /*
    first x in the below expression is for the case when x is 0 */
    int y = x && (!(x & (x - 1)));
    if (y == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    isPowerOfTwo(n);
    return 0;
}