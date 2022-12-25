#include <iostream>
#include <string.h>

using namespace std;

/*
funciton to print permutation of string
this function takes three parameters :
string
starting index of the string
ending index of the string
*/
void permute(string a, int s, int e)
{
    // base case
    if (s == e)
    {
        cout << a << endl;
    }
    else
    {
        // permutation made
        for (int i = s; i <= e; i++)
        {
            // swapping done

            swap(a[s], a[i]);

            // recursion called
            permute(a, s + 1, e);

            // backtrack
            swap(a[i], a[s]);
        }
    }
}

// driver code
int main()
{

    string str = "abc";
    int n = str.size();
    permute(str, 0, n - 1);
    // cout <<  <<endl;
    return 0;
}