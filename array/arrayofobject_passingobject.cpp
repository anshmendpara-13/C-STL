#include <iostream>
#include <string>

using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;
        cout << "Enter the id of employee " << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of this employee id " << id << endl;
    }
};

int main()
{

    // employee ansh,om,lovish,rock;
    // ansh.setid();
    // ansh.getid();

    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();

        fb[i].getid();
    }

    return 0;
}