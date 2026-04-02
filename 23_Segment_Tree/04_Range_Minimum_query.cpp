#include<bits/stdc++.h>
using namespace std;

vector<int> segmentTree;
vector<int> arr;


void buildSegTree(int i, int l, int r){
    if(l == r){
        segmentTree[i] = arr[l];
        return;
    }

    int mid = (l + r) / 2;

    buildSegTree(2*i+1, l, mid);
    buildSegTree(2*i+2, mid+1, r);

    segmentTree[i] = min(segmentTree[2*i+1], segmentTree[2*i+2]);
}

int querySum(int i, int l, int r,int st , int end){

    if(end < l || r < st) return INT_MAX;

    if(st <= l && r <= end) return segmentTree[i];

    int mid = (l + r) / 2;

    int left = querySum(2*i+1, l, mid, st, end);
    int right = querySum(2*i+2, mid+1, r, st, end);

    return min(left, right);
}

int main(){

    int t;
    cin >> t;

    while(t--){
    int n;
    cin >> n;
    arr.resize(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    segmentTree.resize(4*n);

    buildSegTree(0,0,n-1);


     int q;
     cin >> q;

     while(q--){
     int st, end;
     cin >> st >> end;
     cout << querySum(0, 0, n-1, st, end) << "\n";
     }
     }
     return 0;
}