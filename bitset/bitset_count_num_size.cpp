// bitset::count
#include <iostream> // cout
#include <string>   // string
#include <bitset>   // bitset

using namespace std;

int main()
{
    bitset<128> foo(string("10110011"));
    // bitset also contain the string
    
    bitset<4> bar;
    cout << foo << " as an integer is: " << foo.to_ulong() << '\n';

    cout << foo << " has ";
    cout << foo.count() << " ones and ";
    // count function only count 1
    cout << (foo.size() - foo.count()) << " zeros.\n";
    cout << "foo.size() is " << foo.size() << '\n';
    cout << "bar.size() is " << bar.size() << '\n';

    return 0;
}