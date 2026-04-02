#include<bits/stdc++.h>
using namespace std;

#define int long long

vector<pair<int,int>> tree;

// merge function
pair<int,int> merge(pair<int,int> a, pair<int,int> b){
    if(a.first < b.first) return a;
    if(b.first < a.first) return b;
    return {a.first, a.second + b.second};
}

// build
void build(vector<int> &arr, int node, int l, int r){
    if(l == r){
        tree[node] = {arr[l], 1};
        return;
    }

    int mid = (l + r)/2;

    build(arr, 2*node, l, mid);
    build(arr, 2*node+1, mid+1, r);

    tree[node] = merge(tree[2*node], tree[2*node+1]);
}

// update
void update(int idx, int val, int node, int l, int r){
    if(l == r){
        tree[node] = {val, 1};
        return;
    }

    int mid = (l + r)/2;

    if(idx <= mid) update(idx, val, 2*node, l, mid);
    else update(idx, val, 2*node+1, mid+1, r);

    tree[node] = merge(tree[2*node], tree[2*node+1]);
}

// query
pair<int,int> query(int ql, int qr, int node, int l, int r){
    if(qr < l || r < ql) return {LLONG_MAX, 0};

    if(ql <= l && r <= qr) return tree[node];

    int mid = (l + r)/2;

    return merge(
        query(ql, qr, 2*node, l, mid),
        query(ql, qr, 2*node+1, mid+1, r)
    );
}

signed main(){
    
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    tree.resize(4*n);

    build(arr, 1, 0, n-1);

    while(m--){
        int type;
        cin >> type;

        if(type == 1){
            int i, v;
            cin >> i >> v;
            update(i, v, 1, 0, n-1);
        }
        else{
            int l, r;
            cin >> l >> r;

            auto ans = query(l, r-1, 1, 0, n-1);
            cout << ans.first << " " << ans.second << '\n';
        }
    }

    return 0;
}