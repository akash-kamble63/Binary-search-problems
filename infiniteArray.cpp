//Infinite array
#include<iostream>
using namespace std;

int binarySearch(int arr[], int target, int start, int end){
    while(start <= end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        //right side of an array
        if(arr[mid]<target){
            start = mid + 1;
        }else{
            //left side of an array
            end = mid - 1;
        }
    }
    return -1;
}

int ans(int arr[], int target){
    
    // first find the range
    // first start with a box of size 2
        int start = 0;
        int end = 1;

        // condition for the target to lie in the range
        while (target > arr[end]) {
            int temp = end + 1; // this is my new start
            // double the box value
            // end = previous end + sizeofbox*2
            end = end + (end - start + 1) * 2;
            start = temp;
        }
        return binarySearch(arr, target, start, end);
}

int main(){
    int arr[]={3, 5, 7, 9, 10, 90,
                100, 130, 140, 160, 170,180,190,200,210,220,230,240,250};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 100;
    cout<<ans(arr, target);
    return 0;
}