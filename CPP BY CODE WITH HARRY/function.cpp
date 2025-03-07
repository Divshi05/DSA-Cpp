#include <iostream>
using namespace std;

// Function prototype
// type function-name (arguments);
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 
 int sum(int, int); //--> Acceptable 
// void g(void); //--> Acceptable 
 void g(); //--> Acceptable 


int main()
{
    /* FUNCTION ---> apne program ko tukdon 
    mein tod do aur unn tukdon se alag alag kaam karwao */
    int num1 , num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin >> num2;
     // num1 and num2 are actual parameters
    cout << "the sum is = "<<sum(num1 , num2);
  g();
    return 0;
}


int sum(int a , int b)
{
    /* Formal Parameters a and b will be taking values 
    from actual parameters num1 and num2. */  
    int c = a+b;
    return c;
}

void g(){
    cout<<"\nHello, Good Morning";
}