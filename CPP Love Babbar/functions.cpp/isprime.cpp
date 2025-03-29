#include <iostream>
using namespace std;


bool isprime(int num){
    int count = 0;
    for (int i=1; i<=num; i++){
        if (num%i ==0){
            count++;
        }    
        }
        if (count==2){
            return 1;
        }
        else{
            return 0;
        }
}
int main()
{
    int n;
    cin >> n;
    if(isprime(n)){
        cout<<n <<" is a prime number";
    }
    else{
        cout<<n <<" is not a prime number";
    }
    return 0;
}