#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << (__gcd(a, b)) << endl;
    // gcd means common highest factor
    return 0;
}

/*
Suppose, 4, 8 and 16 are three numbers. Then the factors of 4, 8 and 16 are:

4 → 1,2,4

8 → 1,2,4,8

16 → 1,2,4,8,16

Therefore, we can conclude that 4 is the highest common factor among all three numbers.
*/