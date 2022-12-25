// string::begin/end
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str("Test string...");
    for (string::iterator it = str.begin(); it != str.end(); ++it)
    {
        cout << *it;
        // cout << '\n';
    }

    cout << "" << endl; 

    string str1("now step live...");
    for (string::reverse_iterator rit = str1.rbegin(); rit != str1.rend(); ++rit)
    {
        cout << *rit;
        // cout << '\n'; 
    }

    return 0;
}