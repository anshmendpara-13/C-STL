// swap deques
#include <iostream>
#include <deque>

using namespace std;

main()
{
    unsigned int i;
    deque<int>::iterator it;
    deque<int> foo(3, 100); // three ints with a value of 100
    deque<int> bar(5, 200); // five ints with a value of 200

    foo.swap(bar);

    cout << "foo contains:";
    for (it = foo.begin(); it != foo.end(); ++it)
    {
        cout << ' ' << *it;
        //   cout << '\n';
    }

    cout << endl; 
    
    cout << "bar contains:";
    for (it = bar.begin(); it != bar.end(); ++it)
    {
        cout << ' ' << *it;
        //   cout << '\n';
    }

    return 0;
}