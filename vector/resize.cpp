// resizing vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myvector;

    // set some initial content:
    for (int i = 1; i < 10; i++)
    {
        myvector.push_back(i);
    }

    myvector.resize(5);
    myvector.resize(8, 100);
    myvector.resize(12);

    cout << "myvector contains:";
    for (int i = 0; i < myvector.size(); i++)
    {
        cout << ' ' << myvector[i];
        //   cout << '\n';
    }
    return 0;
}