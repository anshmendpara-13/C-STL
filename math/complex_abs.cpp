// abs complex example
#include <iostream> // cout
#include <complex>  // complex, abs

using namespace std;
using ::abs;

int main()
{
    complex<double> mycomplex(3.0, 4.0);
   
    cout << "The absolute value of " << mycomplex << " is " << abs(mycomplex) << '\n';

    return 0;
}