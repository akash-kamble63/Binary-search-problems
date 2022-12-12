/*

# Binary search is used for sorted array(ascending or decending order).

what is binary search?
Binary Search is a searching algorithm used in a sorted array by repeatedly dividing 
the search interval in half. The idea of binary search is to use the information 
that the array is sorted and reduce the time complexity to O(Log n). 

Algorithm:-
->find the middel element
->If the value of the search key is equal to the item then return an index of the search key.
->Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
->Otherwise, narrow it to the upper half.
->Repeatedly check from the second point until the value is found or the interval is empty.

Binary Search Algorithm can be implemented in the following two ways
->Iterative Method
->Recursive Method

why binary search?
total number of comparisons in the worst case is logN.

suppose we have to find a particular number in an array of size 1 million, linear search will run for 1 million times(in worst case scenario)
but binary search will run only for 19 or 20 times(in worst case scenario).

Complexities
Time complexity :- O(logN) ... worst and average case
                   O(1)    ... Best case
    
Space complexity :-O(1) for iterative, O(logN) for recursive

*/

#include<iostream>
using namespace std;

//return the index of element
//return -1 if element is not found 
int BinarySearch(int arr[],int leng ,int target){
    int start = 0;
    int end = leng;

    while(start <= end){
        //find middle element
        // int mid = (start + end)/2; //might be possible that (start + end) exceeds the range of int 
    
        int mid = start +(end - start)/2;
        if(target < arr[mid]){
            end = mid - 1;
        }else if(target > arr[mid]){
            start = mid + 1;
        }else{
            return mid;
        }
    }

    return -1;
}

int main(){

int arr[]={-18 , -12 , -3 , 0 , 2, 4, 7, 9, 10, 20, 25 , 30, 35};
    int l = sizeof(arr)/sizeof(arr[0]);
    int t = -12;
    cout<<BinarySearch(arr, l , t);

    return 0;
}
