#include <iostream>
using namespace std;

int main()
{
    int a[4]={ 7, 8 , 9, 10};
    int b =a[4];
    a[0]=90; 
    cout<< b[0];
    return 0;
}