#include<iostream>
using namespace std;
#include <vector>

bool checkSorted(vector<int>& v, int i , int n){
    //base case
    if(i==n-1){
        return true;
    }

    //1 case solve karo baki recursion karega 

    if(v[i+1]<v[i]){
        return false;
    }

    //recursion sambhal lega
    bool ans = checkSorted(v,i+1,n);
    return ans;
}
    //print vector
void printVector(vector<int>&v){
    for(int i=0; i<v.size();i++){
        cout << v[i] << " ";
    }
}

int main(){
    vector<int>v= {4,3,1,2,4,4};
    int n = v.size();
    int i = 0;
    bool isSorted = checkSorted(v,i,n);

    if(isSorted){
        cout << "Array is Sorted:" << endl;
        printVector(v);
    }

    else{
        cout << "Array is not sorted" << endl;
    }

}