// deque::operator[] example: reversing order
#include <iostream>
#include <deque>

/*
A signed integer is a 32-bit datum that encodes an integer in the range [-2147483648 to 2147483647]. 
An unsigned integer is a 32-bit datum that encodes a nonnegative integer in the range [0 to 4294967295]. 
The signed integer is represented in twos complement notation.
*/

using namespace std;

int main()
{
    deque<int> mydeque(10); // 10 zero-initialized elements
    
    // size_type are operator which give same of deque to new integer variable 
    deque<int>::size_type sz = mydeque.size();

    // assign some values:
    for (unsigned i = 0; i < sz; i++)
    {
        mydeque[i] = i;
    }

    // reverse order of elements using operator[]:
    for (unsigned i = 0; i < sz / 2; i++)
    {
        int temp;
        temp = mydeque[sz - 1 - i];
        mydeque[sz - 1 - i] = mydeque[i];
        mydeque[i] = temp;
    }

    // print content:
    cout << "mydeque contains:";
    for (unsigned i = 0; i < sz; i++)
    {
        cout << ' ' << mydeque[i];
        //   cout << '\n';
    }
    return 0;
}