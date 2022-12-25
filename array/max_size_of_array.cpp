#include <iostream>
#include <array>

using namespace std;

int main(void)
{

    array<int, 25> arr; /* array of 10 integers */

    cout << "maximum size of arr = " << arr.max_size() << endl;

    cout << "size of arr = " << arr.size() << endl;

    return 0;
}