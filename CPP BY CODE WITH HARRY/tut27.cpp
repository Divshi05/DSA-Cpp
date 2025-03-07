// #include <iostream>
// using namespace std;

// class complex;

// class calculator
// {
//     int sum(int a, int b)
//     {
//         return (a + b);
//     }
//     int sumRealComplex(complex, complex);
//     int sumCompComplex(complex, complex);
// };

// class complex
// {
//     int a, b;
//     friend class calculator;
// // friend int calculator :: sumRealComplex( complex , complex );
// // friend int calculator :: sumCompComplex( complex , complex );

// public:
//     void compnum(int v1, int v2)
//     {
//         a = v1;
//         b = v2;
//     }

//     void displayData(void)
//     {
//         cout << "The complex number is " << a << "+" << b << "i" << endl;
//     }
// };

// int calculator ::sumRealComplex(complex o1, complex o2)
// {
//     return (o1.a + o2.a);
// }

// int calculator ::sumCompComplex(complex o1, complex o2)
// {
//     return (o1.b + o2.b);
// }
// int main()
// {
//     complex o1, o2;
//     o1.compnum(1, 4);
//     o2.compnum(5, 7);
//     calculator calc;
//     int res = calc.sumRealComplex(o1, o2);
//     cout << "The sum of real part of o1 and o2 is " << res << endl;
//     int resc = calc.sumCompComplex(o1, o2);
//     cout << "The sum of complex part of o1 and o2 is " << resc << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

class complex;

class calculator{
    int sum(int a , int b){
      return(a+b);
    }
    public:
    int sumRealComplex(complex , complex);
    int sumCompComplex(complex , complex);
};

class complex{

    int a, b;
    friend class calculator;
    public:
    void setData(int n1, int n2){
         a=n1;
         b=n2;
    }
void DisplayData(void){
cout<<a<<" + "<<b<<" i "<<endl;
}
};

int calculator:: sumRealComplex(complex o1, complex o2){
    return(o1.a+o2.a);
}

int calculator:: sumCompComplex(complex o1, complex o2){
    return(o1.b+o2.b);
}
int main()
{
    complex o1, o2;
    o1.setData(1, 4);
    o2.setData(5, 7);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
};