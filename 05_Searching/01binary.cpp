#include<iostream>
using namespace std;

int binarySearch(int arr[], int size,int target){

int start = 0;
int end = size - 1;

int mid = start + (end - start)/2;

while (start <=end){  //element found return index
   
 int element = arr[mid];

 if (target == element){
    
    return mid;

 }

 else if( target < element){

    //search in left
    end = mid-1;

 }

 else{

    //search in right (traget > elemnt)
    end = mid +1;
 }

 mid = start + (end - start)/2;

}

//element not found 

return -1;

}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int size = 9;

    int target = 10;

    int indexOfTarget = binarySearch(arr,size,target);

    if(indexOfTarget == -1){
        cout << "target is not found" << endl ;
    }

    else{
        cout << " target is found at :" << indexOfTarget  <<endl;
    }

    return 0;


}