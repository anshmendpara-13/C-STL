// array::begin example
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 5> myarray = {2, 16, 77, 34, 50};

    cout << "myarray contains :-";
    for (auto it = myarray.begin(); it != myarray.end(); ++it)
    {
        cout << ' ' << *it;
        //   cout << '\n';
    }

    cout << "" << endl;
    array<int, 5> ansh = {4, 5, 3, 4, 2};
    cout << "ansh array contain :- ";
    for (auto i = ansh.begin(); i != ansh.end(); ++i)
    {
        cout << *i << " ";
    }
    return 0;
}

/*
note :-
begin , end & cbegin , cend
in use of begin and end we can change the front and back element
but in use of cbegin and cend we can't be change

rbegin , rend
in use of rbegin reverse the array till to rend 

crbegin , crend
in use of this funciton we can print array to reverse order
and can't be modify
*/
