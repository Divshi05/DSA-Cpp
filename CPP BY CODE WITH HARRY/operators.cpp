// endl ---> for new line 

#include <iostream>

using namespace std;
int main()
{
    int a , b;
    cout <<"enter the value of a"<< endl;
    cin >> a;
    cout<<"ENter the valur of b"<<endl;
    cin>> b;
    //assignment operator 
    cout << a+b <<endl;
    //comparison operator
    cout<< (a==b) <<endl;
    //logical operator
    cout<< ((a>=b)||(a==b))<<endl;
    return 0;
}