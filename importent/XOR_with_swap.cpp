#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    b = a ^ b;
    a = a ^ b;
    b = a ^ b;
    cout << a << endl;
    cout << b << endl;
    return 0;
}