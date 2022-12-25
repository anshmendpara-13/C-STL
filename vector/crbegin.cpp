// vector::crbegin/crend
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myvector = {1, 2, 3, 4, 5};

    cout << "myvector backwards:";
    for (auto rit = myvector.crbegin(); rit != myvector.crend(); ++rit)
    {
        cout << ' ' << *rit;
        //   cout << '\n';
    }
    return 0;
}