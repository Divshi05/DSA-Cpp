#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void compnum(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void compnumSum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void displayData(void)
    {
        cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.compnum(1, 3);
    c1.displayData();

    c2.compnum(2, 4);
    c2.displayData();

    c3.compnumSum(c1, c2);
    c3.displayData();

    return 0;
}