// vector::data
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myvector(5);

    int *p = myvector.data();

    *p = 10;
    ++p;
    *p = 20;
    // above line point to 1 index
    p[2] = 100;
    // above line are start from index 1 to +2 index

    cout << "myvector contains:";
    for (unsigned i = 0; i < myvector.size(); ++i)
    {
        cout << ' ' << myvector[i];
        //   cout << '\n';
    }
    return 0;
}