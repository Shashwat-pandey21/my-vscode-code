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

    segmentTree[i] = segmentTree[2*i+1] + segmentTree[2*i+2];
}

int querySum(int i, int l, int r, int st, int end){
   
    if(r < st || l > end) return 0;

    
    if(l >= st && r <= end) return segmentTree[i];

    int mid = (l + r) / 2;

    return querySum(2*i+1, l, mid, st, end) +
           querySum(2*i+2, mid+1, r, st, end);
}

int main(){

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    arr.resize(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    segmentTree.resize(4*n);

    buildSegTree(0, 0, n-1);

    cout << "Segment Tree: ";
    for(int x : segmentTree){
        cout << x << " ";
    }
    cout << endl;

    int st, end;
    cout << "Enter query range: ";
    cin >> st >> end;

    if(st < 0 || end >= n || st > end){
        cout << "Invalid query\n";
        return 0;
    }

    cout << "Query Sum: " << querySum(0, 0, n-1, st, end) << endl;

    return 0;
}