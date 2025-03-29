#include <iostream>
using namespace std;


void reverse(int arr[],int size ){
    for(int i=0;i<size;i++){
        arr[i]=arr[size-1];
        
    }
}
int main()
{
    int arr[5]={2,4,5,8,1};
    int i, j=5;
    int c;
    for (int k=0;k<=5;k++){
    cout<<arr[k] << endl;
}

    for (i=0;i<j;i++){
c=arr[i];
arr[i]=arr[j];
arr[j]=c;    }


for (int k=0;k<=5;k++){
    cout<<arr[k];
}
    return 0;
}