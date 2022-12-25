// bitset::size
#include <iostream> // cout
#include <bitset>   // bitset

using namespace std;

int main()
{
    bitset<8> foo;
    bitset<4> bar;

    cout << "foo.size() is " << foo.size() << '\n';
    cout << "bar.size() is " << bar.size() << '\n';

    return 0;
}