// vector::emplace_back
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> myvector = {10, 20, 30};

    myvector.emplace_back(100);
    myvector.emplace_back(200);

    cout << "myvector contains:";
    for (auto &x : myvector)
    {
        cout << ' ' << x;
        //   cout << '\n';
    }
    return 0;
}