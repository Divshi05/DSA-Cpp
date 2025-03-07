#include <iostream>
using namespace std;


int sum (int a, int b)
{
    int c=a+b;
    return c;
}

//This will not swap a and b
void swap(int a , int b)   //temp   a   b
{                          // 4     4   5
   int temp=a;             // 4     5   5
    a=b;                   // 4     5   4
    b=temp;
}

//Call by reference using pointers
void swapPointer (int* a, int* b)
{                                 // temp   a    b
    int temp = *a;                //  4     4    5
     *a =  *b;                    //  4     5    5
     *b = temp ;                  //  4     5    4
} 

//Call by reference using C++ reference variables
// int & swapReferenceVar (int &a, int & b)
void swapReferenceVar (int &a, int & b)

{                                // temp   a    b
    int temp = a;                //  4     4    5
     a =  b;                     //  4     5    5
     b = temp ;                  //  4     5    4
    //return a;
}


int main()
{
    int x=4,y=5;
    // cout << "The sum of 5 and 10 is = "<<(sum(5,10));
cout<<"The value of x before is "<< x <<" the value of y is "<< y <<endl;
    // swap(x,y);           // This will not swap a and b
//swapPointer(&x, &y);// This will swap a and b using pointer reference
swapReferenceVar(x ,y);//This will swap a and b using reference variables
//swapReferenceVar(x ,y) =766;//This will swap a and b using reference variables

    cout<<"The value of x after is "<< x <<" The value of y after is "<<y;
    return 0;
}
