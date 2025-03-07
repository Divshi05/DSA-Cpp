#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //******CONSTANTS IN C++******
    const int a = 45;
    cout << "the constant value of a is " << a << endl;

    //******MANIPULATORS******
    int x = 1, y = 23, z = 1543;
    cout << "value of x without setw is" << x << endl;
    cout << "value of y without setw is" << y << endl;
    cout << "value of z without setw is" << z << endl;

    cout << "value of x with setw is " << setw(5) << x << endl;
    cout << "value of y with setw is " << setw(5) << y << endl;
    cout << "value of z with setw is " << setw(5) << z << endl;

    /* *****Operator precedence******  ----->
 https://en.cppreference.com/w/ vali site pe jaa */

     return 0;
}