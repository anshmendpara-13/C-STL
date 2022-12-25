// C++ program to count words in
// a string using stringstream.
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int countWords(string str)
{
    // Breaking input into word
    // using string stream

    // Used for breaking words
    stringstream s(str);
    // above line breck the line (space) and store the small string in (s)

    // To store individual words
    string word;

    int count = 0;
    while (s >> word)
    {
    cout << word << endl; 
        count++;
    }
    return count;
}

// Driver code
int main()
{
    string s = "geeks for geeks geeks contribution placements";
    cout << "Number of words are: " << countWords(s);
    return 0;
}