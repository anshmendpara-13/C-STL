// bitset::operator[]
#include <iostream> // cout
#include <bitset>   // bitset

using namespace std;

int main()
{
    bitset<4> foo;
    // only decalration bit alway default value is 0

    foo[1] = 1;      // 0010
    foo[2] = foo[1]; // 0110

    cout << "foo: " << foo << '\n';

    return 0;
}