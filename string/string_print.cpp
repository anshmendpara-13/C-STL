#include <bits/stdc++.h>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100] = ("hi i am ansh");
    char str1[100] = ("collage :- pdeu");

    cout << str << endl;
    cout << str1 << endl;

    cout << strlen(str) << endl;
    cout << strlen(str1) << endl;

    cout << strcat(str, str1) << endl;
    cout << strcpy(str, str1) << endl;

    cout << strrev(str) << endl;
    cout << strrev(str1) << endl;

    cout << strrev(str) << endl;
    cout << strrev(str1) << endl;

    cout << strupr(str) << endl;
    cout << strlwr(str) << endl;

    wchar_t string[] = L"my collage name is pdeu";
    wchar_t delim[] = L" ";
    wchar_t *token = wcstok(string, delim);

    while (token)
    {
        wcout << token << endl;
        token = wcstok(NULL, delim);
    }

    return 0;
}