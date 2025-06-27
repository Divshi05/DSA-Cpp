#include <iostream>
using namespace std;

int bubblesort(int arr[],int size){
    bool swapped = false;
    for(int i=1;i<size;i++)
    // for 0 to n-1 round
    {
        for (int j=0;j< size-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }
    }
    
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr1[5]={64,2,19,10,49};
    int arr2[6]={1,2,3,4,5,6};
    bubblesort(arr1,5);
    bubblesort(arr2,6);
    return 0;
}