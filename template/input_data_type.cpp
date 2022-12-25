// C++ program to demonstrate the use of class templates

#include <iostream>
using namespace std;

// Class template
template <class T>
class Number
{
private:
    // Variable of type T
    T num;

public:
    Number(T n) : num(n) {} // constructor

    T getNum()
    {
        return num;
    }
};

/*
NOTE:
-   Notice that the code template <class T> is repeated while defining the function outside of the class.
This is necessary and is part of the syntax.
-   If we look at the code in Above Example, we have a function getNum() that is defined inside the class template Number.
-   We can define getNum() outside of Number with the following code:

template <class T>
class Number {
    ... .. ...
    // Function prototype
    T getnum();
};

// Function definition
template <class T>
T Number<T>::getNum() {
    return num;
}
*/

int main()
{

    // create object with int type
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}