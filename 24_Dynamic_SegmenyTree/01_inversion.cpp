#include<bits/stdc++.h>
using namespace std;

vector<int> segTree;

void update(int i, int l, int r, int pos){
    if(l == r){
        segTree[i] += 1;
        return;
    }

    int mid = (l + r) / 2;

    if(pos <= mid) update(2*i+1, l, mid, pos);
    else update(2*i+2, mid+1, r, pos);

    segTree[i] = segTree[2*i+1] + segTree[2*i+2];
}

int query(int i, int l, int r, int ql, int qr){
    
    if(qr < l || r < ql) return 0;

    if(ql <= l && r <= qr) return segTree[i];

    int mid = (l + r) / 2;

    return query(2*i+1, l, mid, ql, qr) + query(2*i+2, mid+1, r, ql, qr);
}
          

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    segTree.assign(4*n, 0);

    for(int i = 0; i < n; i++){
        int x = arr[i];

        int ans = 0;
        if(x + 1 <= n){
            ans = query(0, 1, n, x+1, n);
        }

        cout << ans << " ";

        update(0, 1, n, x);
    }

    cout << "\n";

    return 0;
}