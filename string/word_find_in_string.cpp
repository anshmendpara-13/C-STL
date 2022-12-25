// string::find
#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    string str("There are two needles in this haystack with needles.");
    string str2("needle");

    // different member versions of find in the same order as above:
    size_t found = str.find(str2);

    if (found != string::npos)
    {
        cout << "first 'needle' found at: " << found << endl;
    }

    // found = str.find("needle", found + 1, 6); // this strart from index (found + 1) upto end
    // if (found != string::npos)
    // {
    //     cout << "second 'needle' found at: " << found << endl;
    // }

    // found = str.find("haystack");
    // if (found != string::npos)
    // {
    //     cout << "'haystack' also found at: " << found << endl;
    // }

    // found = str.find('.');
    // if (found != string::npos)
    // {
    //     cout << "Period found at: " << found << endl;
    // }

    // // let's replace the first needle:
    // str.replace(str.find(str2), str2.length(), "preposition");
    // cout << str << endl;

    return 0;
}