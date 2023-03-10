// CPP code for bubble sort
// using template function
#include <iostream>
    using namespace std;

// A template function to implement bubble sort.
// We can use this for any data type that supports
// comparison operator < and swap works for it.
template <class T>
void bubbleSort(T a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; i < j; j--)
        {
            if (a[j] < a[j - 1])
            {
                swap(a[j], a[j - 1]);
            }
        }
    }
}
// Driver Code
int main()
{
    char a[5] = {'g', 'o', 'd', 'f', 'b'};
    int n = sizeof(a) / sizeof(a[0]);

    // calls template function
    bubbleSort<char>(a, n);

    cout << "Sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        // cout << endl;
    }

    return 0;
}