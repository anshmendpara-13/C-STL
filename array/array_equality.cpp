#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int j = 0; j < a; j++)
    {
        // int size;
        int cnt = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        int max = 0, mmax = 0;
        for (auto x : m)
        {
            if (max <= x.second)
            {
                mmax = max;
                max = x.second;
            }
        }
        if (max > (n + 1) / 2)
        {
            cout << "NO" << endl;
        }
        else if (max < (n + 1) / 2)
        {
            cout << "YES" << endl;
        }
    }

    // cout <<  <<endl;
    return 0;
}