// tuple_element
#include <iostream> // cout
#include <tuple>    // tuple, make_tuple, tuple_element, get

using namespace std;

int main()
{
    auto mytuple = make_tuple(10, 'a');

    tuple_element<0, decltype(mytuple)>::type first = get<0>(mytuple);
    tuple_element<1, decltype(mytuple)>::type second = get<1>(mytuple);

    cout << "mytuple contains: " << first << " and " << second << '\n';

    return 0;
}