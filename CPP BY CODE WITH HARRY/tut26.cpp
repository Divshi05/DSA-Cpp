#include <iostream>
using namespace std;

// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i
class complex
{
    int a, b;
    friend complex complexSum(complex o1, complex o2);

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // ye line public ya private kahin bhi likh sakte ho --->
    // friend complex complexSum(complex o1, complex o2);

    /* Below line means that non member - sumComplex funtion is allowed to
    do anything with my private parts (members)*/

    void DisplayData(void)
    {
        cout << "The complex number is " << a << "+" << b << "i" << endl;
    }
};

complex complexSum(complex o1, complex o2)
{
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 5);
    c1.DisplayData();

    c2.setData(3, 4);
    c2.DisplayData();

    c3 = complexSum(c1, c2);
    c3.DisplayData();
    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/