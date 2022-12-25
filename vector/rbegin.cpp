// vector::rbegin/rend
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myvector(5); // 5 default-constructed ints
    vector<int>::iterator it;
    int i = 0;

    vector<int>::reverse_iterator rit = myvector.rbegin();
    for (rit = myvector.rbegin(); rit != myvector.rend(); ++rit)
    {
        *rit = ++i;
    }
    cout << "myvector contains:";
    for (it = myvector.begin(); it != myvector.end(); ++it)
    {
        cout << ' ' << *it;
        // cout << '\n';
    }
    return 0;
}