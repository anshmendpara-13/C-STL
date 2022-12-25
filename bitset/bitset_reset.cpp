// bitset::reset
#include <iostream> // cout
#include <string>   // string
#include <bitset>   // bitset

using namespace std;

int main()
{
    bitset<4> foo(string("1011"));

    cout << foo.reset(1) << '\n'; // 1001
    cout << foo.reset() << '\n';  // 0000
    // reset are make all element are 0
    // we can change the value with index number

    return 0;
}