// bitset::test
#include <iostream> // cout
#include <string>   // string
#include <cstddef>  // size_t
#include <bitset>   // bitset

using namespace std;

int main()
{
  bitset<5> foo(string("01011"));

  cout << "foo contains:\n";
  cout << boolalpha;

  /*
      Is Size_t better than int?
      When writing C code you should always use size_t whenever dealing with memory ranges.
      The int type on the other hand is basically defined as the size of the (signed) integer value that
      the host machine can use to most efficiently perform integer arithmetic.
  */

  for (size_t i = 0; i < foo.size(); ++i)
  {
    cout << foo.test(i) << '\n';
  }
  // test ruturn true or false only

  return 0;

}