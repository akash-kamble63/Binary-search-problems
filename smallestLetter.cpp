//smallest letter
#include<iostream>
using namespace std;

char smallestNumber(char arr[], int len, char letter ){
    
    int start = 0;
    int end = len - 1;
    
    while(start <= end){
        int mid = start + (end - start)/2;
        
        if(letter < arr[mid]){
            end = mid -1;
        }else{
            start = mid + 1;
        }
    }
    //return element of array
    return arr[start%len];
}

int main(){
    char arr[]={'c','f','m'};
    int n = sizeof(arr)/sizeof(arr[0]);
    char t = 'z';
    cout<<ceilingNumber(arr,n,t);
    
    return 0;
}