//ceiling of a number
#include<iostream>
using namespace std;

int ceilingNumber(int arr[], int len, int num ){
    
    int start = 0;
    int end = len - 1;
    
    while(start <= end){
        int mid = start + (end - start)/2;

        if(num>arr[end]){
            return -1;
        }

        //if element is found return it
        if(arr[mid]==num){
            return mid;
        }
        if(num < arr[mid]){
            end = mid -1;
        }else{
            start = mid + 1;
        }
    }
    //if element is not found return start point
    return start;
}

int main(){
    int arr[]={2,3,5,9,12,14,16,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    int t = 12;
    cout<<ceilingNumber(arr,n,t);
    
    return 0;
}