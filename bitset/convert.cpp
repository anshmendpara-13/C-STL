#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{

    string a = "1010100";
    string b = "0100101";
    int c = a.length();

    int d[c];
    for (int i = 0; i < a.length(); i++)
    {
        d[i] = a[i] ^ b[i];
        cout << d[i];
    }

    return 0;
}