#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start =0, end = size-1, mid;
    mid = start + (end-start)/2;
    while(start<=end){
        if (arr[mid]== target){
            return mid;
        }
        else if (arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
int arr[5] = {3,4,5,6,7};
int brr[8] = {0,1,2,3,4,5,6,7};
int index = binarySearch(arr,5, 8);
int index2 = binarySearch(brr, 8, 6);
cout<<index<< endl;
cout<<index2<<endl;

    return 0;
}