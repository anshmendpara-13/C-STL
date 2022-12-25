#include <iostream>
#include <string>

using namespace std;

class Line
{
public:
    void setLength(double len);
    double getLength(void);
    Line(double len);
    // this is the constructor

private:
    double length;
};

// member funciton definition including constructor
Line::Line(double len)
{
    cout << "Object is being created , length = " << len << endl;
    length = len;
}

void Line::setLength(double len)
{
    length = len;
}

double Line::getLength(void)
{
    return length;
}

// main function for the program
int main()
{
    Line line(10.0);
    //  get initially set length
    cout << "Length of line : " << line.getLength() << endl;
    // set line length again
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() << endl;

    return 0;
}