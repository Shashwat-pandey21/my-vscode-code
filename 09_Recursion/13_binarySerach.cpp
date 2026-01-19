#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>&arr,int target,int n, int s, int e){

    //base case

    // case 1=> key not found
    if(s>e){
        return -1;
    }

    // case 2 => key found;
    int mid = s + (e-s)/2;
    if(arr[mid]== target){
        return mid;
    }

    // //recursion 

    // // arr[mid]<target -> right me search karo
    // if(arr[mid]<target){
    //     return binarySearch(arr, target, n, mid+1, e);
    // }
    // else{ //arr[mid]>target -> left me search karo
    //     return binarySearch(arr,target,n,s,mid-1);
    // }


    //we can use ternary operator to make recurssion code more small

    return (arr[mid]<target) ?  binarySearch(arr, target, n, mid+1, e) : binarySearch(arr,target,n,s,mid-1);
}


int main(){
    vector<int>arr = {3,13,20,23,43,56,868};
    int target = 3;
    int n = arr.size();
    int s=0 ;
    int e = n-1;
    int i =0;

    int ans = binarySearch(arr,target,n,s,e);

    cout << "Target is found " << ans << endl;

}