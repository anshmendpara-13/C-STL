// constructing bitsets
#include <iostream> // cout
#include <string>   // string
#include <bitset>   // bitset

using namespace std;

int main()
{
    bitset<16> foo;
    bitset<16> bar(0xfa2);
    bitset<16> bar1(16);
    bitset<16> baz(string("0101111001"));

    cout << "foo: " << foo << '\n';
    cout << "bar: " << bar << '\n';
    cout << "bar: " << bar1 << '\n';
    cout << "baz: " << baz << '\n';

    return 0;
}