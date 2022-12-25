// comparing size, length, capacity and max_size
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str("i am ansh");
    cout << "size: " << str.size() << endl;
    cout << "length: " << str.length() << endl;
    cout << "capacity: " << str.capacity() << endl;
    cout << "max_size: " << str.max_size() << endl;
    cout << "before clear " << endl;
    cout << str << endl;
    cout << "after clear " << endl;
    str.clear();
    cout << str << endl;

    return 0;
}