// array::data
#include <iostream>
#include <cstring>
#include <array>

using namespace std;

int main()
{
    const char *cstr = "Test string";
    array<char, 12> charray;

    memcpy(charray.data(), cstr, 3);

    cout << charray.data() << '\n';

    return 0;
}