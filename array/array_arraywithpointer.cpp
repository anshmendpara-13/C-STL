#include <iostream>

using namespace std;

int main()
{
    // int marks[5] = {10,20,30,40,50};

    // int mathmarks[4];
    // mathmarks[0] = 100;
    // mathmarks[1] = 200;
    // mathmarks[2] = 300;
    // mathmarks[3] = 400;

    // cout << mathmarks[0] <<endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << marks[i] << endl;

    // }

    // for (int i = 0; i < 4 ; i++)
    // {
    //     cout << mathmarks[i] << endl;

    // }

    // you can change the value of array
    // in array address start from the zero th index

    /*
    ***** Pointer arithmatic *****
    address new = address current + (i * sizeof(data_type))
    */

    int marks[] = {10, 20, 30, 40, 50};
    int *p = marks;

    // // print the value of the array
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;

    // // print the value of the array with pointer
    // cout << *(p) << endl;
    // cout << *(p + 1) << endl;
    // cout << *(p + 2) << endl;

    // // print the address of the array
    // cout << (p) << endl;
    // cout << (p + 1) << endl;
    // cout << (p + 2) << endl;
    // cout << (p + 3) << endl;
    // // in this address p++ method also work but it is little complex
    // // one time you ++ the address then pointer point next elemet and
    // // this is temp store in memory and next ++ address pointer jump to next address pointer

    // // print the address of the array with integer value
    // // use below formula
    // // address new = address current + (i * sizeof(data_type))

    // cout << (int)(p) << endl;
    // cout << (int)(p + 1) << endl;
    // cout << (int)(p + 2) << endl;

    // print the value in different way with loop

    for (int i = 0; i < 3; i++)
    {
        cout << p[i] << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << (int)p[i] << endl;
    }

    return 0;
}