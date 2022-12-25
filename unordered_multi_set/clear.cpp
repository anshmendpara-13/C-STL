// unordered_multiset::clear
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_multiset<string> myums =
        {"chair", "table", "lamp", "sofa", "chair"};

    cout << "myums contains:";

    cout << (int)("human") << endl;
    cout << (int)("klingon") << endl;
    cout << (int)("vulcan") << endl;
    cout << (int)("romulan") << endl;
    cout << (int)("cardassian") << endl;

    for (const string &x : myums)
    {
        cout << " " << x;
        cout << endl;
    }

    myums.clear();
    myums.insert("bed");
    myums.insert("bed");
    myums.insert("wardrobe");
    myums.insert("nightstand");

    cout << "myums contains:";
    for (const string &x : myums)
        cout << " " << x;
    cout << endl;

    return 0;
}