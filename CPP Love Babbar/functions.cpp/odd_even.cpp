#include <iostream>
using namespace std;

void oddeven(int n){
    if (n%2==0){
        cout<< n <<" is an even number";   }

        else{
        cout<< n <<" is an odd number";   }
}
int main(){

    int num;
    cin>> num ;

    oddeven(num);
    return 0;
}