// constructing maps
#include <iostream>
#include <map>

using namespace std;

bool fncomp(char lhs, char rhs)
{
    return lhs < rhs;
}

struct classcomp
{
    bool operator()(const char &lhs, const char &rhs) const
    {
        return lhs < rhs;
    }
};

int main()
{
    map<char, int> first;
    // map have two arguments
    // this argument in pair

    first['a'] = 10;
    first['b'] = 30;
    first['c'] = 50;
    first['d'] = 70;

    map<char, int> second(first.begin(), first.end());
    // second contain all element of the first

    map<char, int> third(second);
    // third contain hole second

    map<char, int, classcomp> fourth; // class as Compare
    // map third argument are comparator

    bool (*fn_pt)(char, char) = fncomp;
    map<char, int, bool (*)(char, char)> fifth(fn_pt); // function pointer as Compare

    return 0;
}