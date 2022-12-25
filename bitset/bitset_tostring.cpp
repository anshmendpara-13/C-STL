// bitset::to_string
#include <iostream> // cout
#include <string>   // string
#include <bitset>   // bitset

using namespace std;

int main()
{
    bitset<4> mybits; // mybits: 0000
    mybits.set();     // mybits: 1111

    string mystring = mybits.to_string<char, string::traits_type, string::allocator_type>();

    cout << "mystring: " << mystring << '\n';

    return 0;
}