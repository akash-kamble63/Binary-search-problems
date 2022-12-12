//Order agnostic binary search

#include<iostream>
using namespace std;

//return the index of element
//return -1 if element is not found 

int BinarySearch(int arr[],int leng ,int target){
    int start = 0;
    int end = leng-1;
    // chech whether given array is in ascendin or decending order 
    bool isAsc = arr[start] < arr[end];
    while(start <= end){
        //find middle element
        // int mid = (start + end)/2; //might be possible that (start + end) exceeds the range of int 
    
        int mid = start +(end - start)/2;
        
        if(target == arr[mid]){
            return mid;
        }
        if(isAsc){
            if(target < arr[mid]){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }else{
            if(target > arr[mid]){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
    }

    return -1;
}

int main(){

    int arr[]={-18 , -12 , -3 , 0 , 2, 4, 7, 9, 10, 20, 25 , 30, 35};
    int arr2[] = {35,30,25,20,15,10,5,0};
    int l = sizeof(arr)/sizeof(arr[0]);
    int l2 = sizeof(arr2)/sizeof(arr2[0]);
    int t = 35;
    cout<<BinarySearch(arr2, l , t);

    return 0;
}