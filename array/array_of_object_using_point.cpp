#include <iostream>
#include <string>

using namespace std;

class shopitem
{
    int id;
    float price;

public:
    void setdata(int a, int b)
    {
        id = a;
        price = b;
    }
    void getdata(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};

// 1 2 3
//     ^
//     |
//     |
//     ptr
// ptrtemp

int main()
{
    int size = 3;

    // int *ptr = &size;
    // int *ptr = new int[25];

    shopitem *ptr = new shopitem[size];
    shopitem *ptrtemp = ptr;
    int p, i;
    float q;
    // general store item
    // veggies item
    // hardware item

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // *(ptr).setdata(p,q);
        ptr->setdata(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Item number : " << i + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}