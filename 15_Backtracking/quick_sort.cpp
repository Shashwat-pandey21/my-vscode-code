#include<bits/stdc++.h>
using namespace std;

int partion(vector<int>&arr,int st, int end){

   int i = st + 1;
   int pivot = arr[st];
   int j = end;

   while(i <= j){
     
    if(arr[i]<=pivot){
        i++;
    }

    else if(arr[j]>pivot){
        j--;
    }

    else {
        swap(arr[i],arr[j]);
    }
   }
   swap(arr[st], arr[j]);
   return j;
}

void quickSort(vector<int>&arr,int st , int end){

    if(st>=end){
        return;
    }

    int p = partion(arr,st,end);

    quickSort(arr, st, p-1); //left check

    quickSort(arr,p+1,end);  //right check


}
int main(){
    vector<int>arr= {2,5,3,624,57,3};
    int n = arr.size()-1;
    quickSort(arr,0,n);

    for (int x : arr)
    cout << x << " ";

    return 0;

}