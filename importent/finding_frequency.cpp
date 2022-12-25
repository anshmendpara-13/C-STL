#include <bits/stdc++.h>
using namespace std;
int frequency(int arr[], int size)
{
    bool check[size];
    for (int i = 0; i < size; i++)
    {
        check[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        if (check[i] == 1)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                check[j] = 1;
                count++;
            }
        }
        cout << "frequency of " << arr[i] << " is: " << count << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 2, 4, 8, 6, 4, 4, 4, 4, 5, 2, 4, 1, 2, 3};
    // calculate the size of an array
    int size = sizeof(arr) / sizeof(arr[0]);
    // call function to calculate the frequency
    frequency(arr, size);
    return 0;
}

// /* **** OR **** */
// #include <bits/stdc++.h>
// using namespace std;
// void frequency(int arr[], int size)
// {
//     unordered_map < int, int < um;
//     for (int i = 0; i < size; i++)
//     {
//         um[arr[i]]++;
//     }
//     for (auto x : um)
//     {
//         cout << "frequency of " << x.first << " is: " << x.second << endl;
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 1, 2, 3};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     frequency(arr, size);
//     return 0;
// }
