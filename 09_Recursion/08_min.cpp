#include<iostream>
#include<limits.h>
using namespace std;
void findMini(int arr[],int i,int size,int& mini){
    // Base Case
    if(i == size)
        return; 
    // Processing
    if(arr[i]<mini) // Maximum element condition
        mini = min(arr[i],mini);
    // Recursive Relation
    findMini(arr,i+1,size,mini);
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int i = 0;
    int mini = INT_MAX;
    findMini(arr,i,size,mini);
    cout<<mini;
    return 0;
}