#include <iostream>
#include <string>
#include <cwchar>

using namespace std;

int main()
{
    wchar_t name[] = L"<ansh is my name>";
    wchar_t name1[20];
    wcscpy(name1, name);
    wcout << L"the length of " << name << L" is " << wcslen(name) - 2 << endl;
    wcout << "copy string is : " << name1 << endl;
    wcscat(name, name1);
    wcout << L"concatenated wide string is " << name << endl;
    wcout << L"the length of " << name << L" is " << wcslen(name) << endl;

    return 0;
}