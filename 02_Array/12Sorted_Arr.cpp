#include<iostream>
#include<limits.h>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=0 ; i<7 ;i++){
       if (arr[i] < arr[i+1]){
        return false;
       }
        
    }
    return true;
}
int main(){
    int arr[6] = {1,2,3,7,5,6};
    int n = 6;

    if(isSorted(arr,n)){
        cout << "Array is sorted" ;
    }
    else{
        cout << "Not Sorted ";
    }
}