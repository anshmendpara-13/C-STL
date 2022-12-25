// bitset::flip
#include <iostream> // cout
#include <string>   // string
#include <bitset>   // bitset

using namespace std; 

int main()
{
    bitset<4> foo(string("0001"));

    cout << foo.flip(2) << '\n'; // 0101
    cout << foo.flip() << '\n';  // 1010
    // flip are change hole index
    // we can flip value with index
    //  but in bitset index start from right side

    return 0;
}