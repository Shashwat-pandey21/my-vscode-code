#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>&arr, int st,int end){
    int i = st-1;
    int pivot =arr[end];

    for(int j=st; j<end; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }

    i++;
    swap(arr[end],arr[i]);
    return i ;
    
}
void quickSort(vector<int> &arr, int st, int end) {
    // base case
    if (st >= end) return;

    //p pivot element h jo array ko partion kkrega
    int p = partition(arr, st, end);

    // recursive calls
    quickSort(arr, st, p - 1);   // pivot ke left wala hissa
    quickSort(arr, p + 1, end);  // pivot ke right wala hissa
}
    int main(){

    vector<int> arr = {23, 46, 3, 64, 34, 67};

    quickSort(arr, 0, arr.size() - 1);

    for (int x : arr)
        cout << x << " ";

    return 0;
}

