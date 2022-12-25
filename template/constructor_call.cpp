#include <iostream>
#include <string>
using namespace std;

template <class T = int, class U = int>
class A
{
    T x;
    U y;

public:
    A() { cout << "Constructor Called" << endl; }
};

int main()
{
    A<char, char> a;
    A<int, double> b;
    A<> c;
    return 0;
}