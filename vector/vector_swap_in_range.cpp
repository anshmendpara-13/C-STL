// swap_ranges example
#include <iostream>  // cout
#include <algorithm> // swap_ranges
#include <vector>    // vector

using namespace std;

int main()
{
  vector<int> foo(5, 10); // foo: 10 10 10 10 10
  vector<int> bar(5, 33); // bar: 33 33 33 33 33

  swap_ranges(foo.begin() + 1, foo.end() - 1, bar.begin());

  // print out results of swap:
  cout << "foo contains:";
  for (vector<int>::iterator it = foo.begin(); it != foo.end(); ++it)
  {
    cout << ' ' << *it;
    // cout << '\n';
  }

  cout << "" << endl; 

  cout << "bar contains:";
  for (vector<int>::iterator it = bar.begin(); it != bar.end(); ++it)
  {
    cout << ' ' << *it;
    // cout << '\n';
  }

  return 0;
}