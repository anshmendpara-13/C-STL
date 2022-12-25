// arrays as tuples
#include <iostream>
#include <array>
#include <tuple>

using namespace std;

int main()
{
    array<int, 3> myarray = {10, 20, 30};
    tuple<int, int, int> mytuple(10, 20, 30);

    tuple_element<0, decltype(myarray)>::type myelement; // int myelement

    myelement = get<2>(myarray);
    get<2>(myarray) = get<0>(myarray);
    get<0>(myarray) = myelement;

    cout << "first element in myarray: " << get<0>(myarray) << "\n";
    cout << "first element in mytuple: " << get<0>(mytuple) << "\n";

    return 0;
}

