// bitset::to_ullong
#include <iostream> // cout
#include <bitset>   // bitset

using namespace std;

int main()
{
    // this program give int value from the bit

    bitset<4> foo; // foo: 0000
    foo.set();     // foo: 1111

    cout << foo << " as an integer is: " << foo.to_ullong() << '\n';
    cout << foo << " as an integer is: " << foo.to_ulong() << '\n';
    return 0;
}