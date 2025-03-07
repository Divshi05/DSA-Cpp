#include <iostream>
/*  #include "this.h" ---> this will produce an error if this.h 
is not present in the current directory  */

using namespace std;

int main()
{
    int num1=90, num2=40;
    cout<<"Hello everyone. "<< "This is my first C++ self made program\n";
    cin >>  num1 >> num2 ;
    cout << num1+num2;
    return 0;
}
// <<   ---> Insertion operator
// >>   ---> Extraction operator