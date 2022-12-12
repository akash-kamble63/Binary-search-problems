#include<iostream>
using namespace std;

int rotatedBS(int arr[], int len , int target){
    int start = 0;
    int end = len - 1;
    
    while(start<=end){
        int mid = start+(end - start)/2;
        //return ans
        if(arr[mid]==target){
            return mid;
        }
        //left side from midel elemet is sorted
        if( arr[start] < arr[mid] ){
            
            if(arr[start] < target && target < arr[mid]){
                end = mid - 1;
            }else{
                start = mid + 1;
            }

        }else{
            //right side from midel elemet is sorted
            if(arr[mid +1] < target && target <= arr[end]){
                start = mid+1;
            }else{
                end = mid -1;
            }

        }
    }
    return -1;
}

int main(){
    
    int arr[] = {20,30,40,50,60,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int t = 30;
    
    cout<<rotatedBS(arr, n , t);
    
    return 0;
}