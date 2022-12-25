// for_each_example
#include <iostream>  // cout
#include <algorithm> // for_each
#include <vector>    // vector

using namespace std;

void myfunction(int i)
{ // function:
    cout << ' ' << i;
}

struct myclass
{ // function object type:
    void operator()(int i)
    {
        cout << ' ' << i;
    }

} myobject;

int main()
{
    vector<int> myvector;
    myvector.push_back(10);
    myvector.push_back(20);
    myvector.push_back(30);

    cout << "myvector contains with myfunction :";
    for_each(myvector.begin(), myvector.end(), myfunction);
    cout << '\n';

    // or:
    cout << "myvector contains with myvector :";
    for_each(myvector.begin(), myvector.end(), myobject);
    cout << '\n';

    return 0;
}