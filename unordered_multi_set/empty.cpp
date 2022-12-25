// unordered_multiset::empty
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
  unordered_multiset<string> first;
  unordered_multiset<string> second = {"mom", "dad", "son", "daughter", "son"};
  cout << "first " << (first.empty() ? "is empty" : "is not empty") << endl;
  cout << "second " << (second.empty() ? "is empty" : "is not empty") << endl;
  return 0;
}