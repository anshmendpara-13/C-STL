// CPP program to remove duplicate character
// from character array and print in sorted
// order
// #include <bits/stdc++.h>
// using namespace std;

// char *removeDuplicate(char str[], int n)
// {
//     // Used as index in the modified string
//     int index = 0;

//     // Traverse through all characters
//     for (int i = 0; i < n; i++)
//     {

//         // Check if str[i] is present before it
//         int j;
//         for (j = 0; j < i; j++)
//         {
//             if (str[i] == str[j])
//             {
//                 break;
//             }
//         }

//         // If not present, then add it to
//         // result.
//         if (j == i)
//         {
//             str[index++] = str[i];
//         }
//     }

//     return str;
// }

// // Driver code
// int main()
// {
//     char str[] = "geeksforgeeks";
//     int n = sizeof(str) / sizeof(str[0]);
//     cout << removeDuplicate(str, n);
//     return 0;
// }

/*   ******* OR ******* */

// C++ program to create a unique string
#include <bits/stdc++.h>
using namespace std;

string unique(string s)
{
    string str;
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        char c = s[i];
        auto found = str.find(c);
        if (found == std::string::npos)
        {
            str += c;
        }
    }
    return str;
}

int main()
{
    int n1;
    cin >> n1;
    string s;
    while (n1--)
    {
        getline(cin, s);
        int d = s.length();
        int e = unique(s).length();
        cout << (e * 2) + (d - e) << endl;
    }
    return 0;
}