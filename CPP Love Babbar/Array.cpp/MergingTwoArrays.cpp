#include <iostream>
using namespace std;
void merge(int arr1[], int m , int arr2[], int n , int arr3[] ){
    int i=0, j=0,k=0;
    while(i<m&& j<n){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
         
    }
    while(i<m){
        arr3[k]=arr1[i];
        k++;
        i++;
    }

     while(j<n){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}

void print(int arr3[], int n){
    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
}
int main()
{
    int nums1[5]={1,3,5,7,8};
    int nums2[3]={2,4,100};
    
    int nums3[8]={0};
    merge(nums1, 5, nums2, 3, nums3);
    print(nums3, 8);
    return 0;
}