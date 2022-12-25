// bitset::any
#include <iostream> // cin, cout
#include <bitset>   // bitset

using namespace std;

int main()
{
    bitset<16> foo;

    cout << "Please, enter a binary number: ";
    cin >> foo;

    // cout << foo.count() << endl; 

    // if (foo.any())
    if (foo.none())
    {
        // cout << foo << " has " << foo.count() << " bits set.\n";
        cout << foo << " has no bits set.\n";
    }
    else
    {
        // cout << foo << " has no bits set.\n";
        cout << foo << " has " << foo.count() << " bits set.\n";
    }

    return 0;
}