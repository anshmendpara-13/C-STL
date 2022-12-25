#include <iostream>
#include <string>

using namespace std;

template <typename T>
class array
{
private:
    T *ptr;
    int size;

public:
    array(T arr[], int s);
    void print();
};

template <typename T>
array<T>::array(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = arr[i];
    }
}

template <typename T>
void array<T>::print()
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << *(ptr + i);
        // cout << endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    array<int> a(arr, 5);
    a.print();

    return 0;
}