//first and last number
#include <iostream>
using namespace std;

int search(int arr[], int len, int target, bool firstTime){
    //initialize the answer
    int ans = -1;
    int start = 0;
    int end = len -1;
    
    //start binary search
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] < target){
            start = mid+1;
        }else if(arr[mid]>target){
            end = mid -1;
        }else{
            //potential answer
            ans = mid;
            //check for first time 
            if(firstTime){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
    }
    
    return ans;
}

int main(){
    int arr[]={5,7,7,7,7,8,8,9};
    int ans[]={-1,-1};
    int n =sizeof(arr)/sizeof(arr[0]);
    int t = 8;
    
    int f = search(arr,n,t,true);
    int l = search(arr,n,t,false);
    arr[0] = f;
    arr[1] = l;
    cout<<arr[0]<<" "<<arr[1]<<endl;
    return 0;
}