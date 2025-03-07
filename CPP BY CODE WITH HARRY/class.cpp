#include <iostream>
using namespace std;


    /* classes are used instead of structures because :
     1) data cannot be kept private
     2) functions can't be used in structures. */
    class Employee
    {
    private:
        int a, b, c;

    public:
        int d, e;
        void setback(int a1, int b1, int c1); // Declaration
        void getback()
        {
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
            cout << "The value of c is " << c << endl;
            cout << "The value of d is " << d << endl;
            cout << "The value of e is " << e << endl;
        }
    };

    void Employee :: setback(int a1, int b1, int c1)
    {
        a = a1 ;
        b = b1 ;
        c = c1 ;
    }

    int main()
    {
        Employee divya;
        // divya.a = 134; -->This will throw error as a is private
        divya.d = 34;
        divya.e = 56;
        divya.setback(1 , 3 , 5);
        divya.getback();
    return 0;
}

// #include<iostream>
// using namespace std;

// class Employee
// {
//     private:
//         int a, b, c;
//     public:
//         int d, e;
//         void setData(int a1, int b1, int c1); // Declaration
//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//             cout<<"The value of b is "<<b<<endl;
//             cout<<"The value of c is "<<c<<endl;
//             cout<<"The value of d is "<<d<<endl;
//             cout<<"The value of e is "<<e<<endl;
//         }
// };

// void Employee :: setData(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main(){
//     Employee harry;
//     // harry.a = 134; -->This will throw error as a is private
//     harry.d = 34;
//     harry.e = 89;
//     harry.setData(1,2,4);
//     harry.getData();
//     return 0;
// }
