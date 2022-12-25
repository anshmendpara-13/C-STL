// bitset::set
#include <iostream> // cout
#include <bitset>   // bitset

using namespace std;

int main()
{
  bitset<4> foo;

  cout << foo.set() << '\n';     // 1111
  cout << foo.set(2, 0) << '\n'; // 1011
  // in above line first argument contain the index number and second argument contain only 1 or 0
  cout << foo.set(2) << '\n';    // 1111
  // in this first index are (conatain position and second deflault 1 we can change to 0)
  // in bit operator index start from right side
  return 0;
}