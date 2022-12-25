// tuple_size
#include <iostream> // cout
#include <tuple>    // tuple, tuple_size

using namespace std;

int main()
{
    tuple<int, char, double> mytuple(10, 'a', 3.14);

    cout << "mytuple has ";
    cout << tuple_size<decltype(mytuple)>::value;
    // in above senctance value contain decltype(mytuple) value    cout << " elements." << '\n';

    return 0;
}