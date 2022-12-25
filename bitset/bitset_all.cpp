// bitset::all
#include <iostream> // cin, cout, boolalpha
#include <bitset>   // bitset

using namespace std;

int main()
{
    bitset<8> foo;

    cout << "Please, enter an 8-bit binary number: ";
    cin >> foo;

    cout << boolalpha;
    cout << "all: " << foo.all() << '\n';  // this true when all are 1
    cout << "any: " << foo.any() << '\n';  // this true when any are 1
    cout << "none: " << foo.none() << '\n';  // this true when all are 0

    return 0;
}