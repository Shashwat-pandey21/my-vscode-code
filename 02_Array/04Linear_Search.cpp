#include<iostream>
using namespace std;
bool findElement(int arr[],int size,int key){
    for(int i=0; i< size; i++){
        if(arr[i]==key){
            return true;
        }
    }
}
int main(){
    int arr[] = {2,9,6,7,4,12,15};
    int size = 344;
    int key = 16;
    if(findElement(arr,size,key)){ // calling the boolean function
        cout<<"Found element"; // condition true then just cout found element
    }
    else{
        cout<<"Not Found"; // condition false
    }
    return 0;
}