#include<bits/stdc++.h>
using namespace std;

vector<int>segmentTree;
vector<int>arr;

void buildSegTree(int i, int l, int r){
    if(l==r){
        segmentTree[i] = arr[l];
        return;
    }

    int mid = (l+r)/2;

    buildSegTree(2*i+1,l,mid);
    buildSegTree(2*i+2,mid+1,r);

    segmentTree[i] = segmentTree[2*i+1] + segmentTree[2*i+2];
 }
 
int main(){

    int n ;
    cout << "Enter the number of input: " << " ";
    cin >> n; 

    arr.resize(n);
    
    cout << "Enter inputs: " << " ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    segmentTree.resize(2*n);

    buildSegTree(0,0,n-1);

    cout <<"Segment tree :" << " ";
    for(int i=0; i<2*n; i++){
        cout << segmentTree[i] << " ";
    }
    cout << endl;

    return 0;
}