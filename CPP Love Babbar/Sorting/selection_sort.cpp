#include <iostream>
using namespace std;
void selection_sort(int arr[], int size){
    int min;
for (int i=0;i<size-1;i++){
    min = i;
    for(int j=i+1;j<size;j++){
        if(arr[min]>arr[j]){
            min=j;
        }
        }
        swap(arr[min],arr[i]);
    
}
for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
}


}
int main(){
     int arr1[5]={64,2,19,10,49};
 selection_sort(arr1,5);

    return 0;
}