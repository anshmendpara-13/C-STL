#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5] = {0};
    // changes a to {10,11,12,13,14}
    char c[3] = {0};
    // changes c to {'a','b','c'}

    iota(a, a + 5, 10);
    iota(c, c + 5, 'a');

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << c[i] << endl;
    }

    return 0;
}