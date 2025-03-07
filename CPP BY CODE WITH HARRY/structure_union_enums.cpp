#include <iostream>
using namespace std;

/* 1) STRUCTURE --->user defined data type available in C++
    used to combine different types of items
   2) UNIONS ---> similar to structure but 
   provide a better memory management*/
typedef struct employee
{
    /* data */
    int id;
    char favchar;
    float salary;
} ep;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
} ;



int main()
{
     enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    // cout<<(m1==2);

    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;

    // union money m1;
    //     m1.rice = 34;
    //     m1.car='c';
    //     // cout<<m1.rice;
    
    // struct employee div;
    // ep div;
    // div.id=01;
    // div.favchar= 'd';
    // div.salary= 120000000 ;
    
    // cout << "The value is " <<div.id <<endl;
    // cout << "The value is " <<div.favchar <<endl;
    // cout << "The value is " <<div.salary <<endl;
    
    return 0;
}