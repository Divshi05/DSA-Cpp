#include <iostream>
using namespace std;

int bubblesort(int arr[],int size){
    for(int i=1;i<size;i++)
    // for 0 to n-1 round
    {
        for (int j=0;j< size-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr1[5]={64,2,19,10,49};
    bubblesort(arr1,5);
    return 0;
}