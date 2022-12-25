#include <iostream>
#include <string>
#include <wchar.h>

using namespace std;

int main()
{
    wchar_t string1[] = L"my name is ansh";
    wchar_t *string2 = wcsstr(string1, L"ansh");
    wcsncpy(string2, L"neev", 4);
    wcout << string1 << endl;
    // cout <<  <<endl;
    return 0;
}