// // C++ program to count occurrences
// // of pattern in a text.
// #include <iostream>
// using namespace std;

// void computeLPSArray(string pat, int M, int lps[])
// {

//     // Length of the previous longest
//     // prefix suffix
//     int len = 0;
//     int i = 1;
//     lps[0] = 0; // lps[0] is always 0

//     // The loop calculates lps[i] for
//     // i = 1 to M-1
//     while (i < M)
//     {
//         if (pat[i] == pat[len])
//         {
//             len++;
//             lps[i] = len;
//             i++;
//         }
//         else // (pat[i] != pat[len])
//         {

//             // This is tricky. Consider the example.
//             // AAACAAAA and i = 7. The idea is similar
//             // to search step.
//             if (len != 0)
//             {
//                 len = lps[len - 1];

//                 // Also, note that we do not
//                 // increment i here
//             }
//             else // if (len == 0)
//             {
//                 lps[i] = len;
//                 i++;
//             }
//         }
//     }
// }

// int KMPSearch(string pat, string txt)
// {
//     int M = pat.length();
//     int N = txt.length();

//     // Create lps[] that will hold the longest
//     // prefix suffix values for pattern
//     int lps[M];
//     int j = 0; // index for pat[]

//     // Preprocess the pattern (calculate lps[]
//     // array)
//     computeLPSArray(pat, M, lps);

//     int i = 0; // index for txt[]
//     int res = 0;
//     int next_i = 0;

//     while (i < N)
//     {
//         if (pat[j] == txt[i])
//         {
//             j++;
//             i++;
//         }
//         if (j == M)
//         {

//             // When we find pattern first time,
//             // we iterate again to check if there
//             // exists more pattern
//             j = lps[j - 1];
//             res++;
//         }

//         // Mismatch after j matches
//         else if (i < N && pat[j] != txt[i])
//         {

//             // Do not match lps[0..lps[j-1]]
//             // characters, they will match anyway
//             if (j != 0)
//             {
//                 j = lps[j - 1];
//             }
//             else
//             {
//                 i = i + 1;
//             }
//         }
//     }
//     return res;
// }

// // Driver code
// int main()
// {
//     string txt = "geeksforgeeks";
//     string pat = "eeks";
//     int ans = KMPSearch(pat, txt);

//     cout << ans;

//     return 0;
// }

/*      ***** OR *****      */

// Simple C++ program to count occurrences
// of pat in txt.
#include <bits/stdc++.h>
using namespace std;

int countFreq(string &pat, string &txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;

    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        /* For current index i, check for
           pattern match */
        int j;
        for (j = 0; j < M; j++)
        {
            if (txt[i + j] != pat[j])
            {
                break;
            }
        }

        // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        if (j == M)
        {
            res++;
        }
    }
    return res;
}

/* Driver program to test above function */
int main()
{
    string txt = "harshit";
    string pat1 = "a";
    string pat2 = "b";
    string pat3 = "c";
    string pat4 = "d";
    string pat5 = "e";
    string pat6 = "f";
    string pat7 = "g";
    string pat8 = "h";
    string pat9 = "i";
    string pat10 = "j";
    string pat11 = "k";
    string pat12 = "l";
    string pat13 = "m";
    string pat14 = "n";
    string pat15 = "o";
    string pat16 = "p";
    string pat17 = "q";
    string pat18 = "r";
    string pat19 = "s";
    string pat20 = "t";
    string pat21 = "u";
    string pat22 = "v";
    string pat23 = "w";
    string pat24 = "x";
    string pat25 = "y";
    string pat26 = "z";
    for (int i = 1; i <=26 ; i++)
    {
    cout << countFreq(pati, txt);
    }
    
    return 0;
}