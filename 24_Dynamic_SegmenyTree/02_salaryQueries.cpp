#include<bits/stdc++.h>
using namespace std;
vector<int>tree;

void update(int idx, int val, int node, int l, int r){
    if(l == r){
        tree[node] += val;
        return;
    }

    int mid = (l + r) / 2;

    if(idx <= mid) update(idx, val, 2*node, l, mid);
    else update(idx, val, 2*node+1, mid+1, r);

    tree[node] = tree[2*node] + tree[2*node+1];
}


int query(int ql, int qr, int node, int l, int r){
    if(qr < l || r < ql) return 0;
    if(ql <= l && r <= qr) return tree[node];

    int mid = (l + r) / 2;

    return query(ql, qr, 2*node, l, mid) + query(ql, qr, 2*node+1, mid+1, r);
           
}


int main(){

    int n,q;
    cin >> n >> q;

    vector<int>salary(n);
    vector<int>all;

    for(int i=0; i<n; i++){
    cin >> salary[i];
    all.push_back(salary[i]); 
}

    vector<pair<char,pair<int ,int>>> queries(q);

    for(int i=0; i<q; i++){
        char symbol;
        cin >> symbol;

         if(symbol == '!'){
            int k,x;
            cin >> k >> x;

            k--;  //due to 1 based indexing

            queries[i] = {symbol,{k,x}};
            all.push_back(x);
        }
        else{
            int a,b;
            cin >> a >> b;

            queries[i] = {symbol,{a,b}};
            all.push_back(a);
            all.push_back(b);
        }
    }

    //cordinate compression-> first sort then find unique
    sort(all.begin(), all.end());
    all.erase(unique(all.begin(), all.end()), all.end());

    int m = all.size();

    tree.resize(4*m,0);

    for(int i=0; i<n; i++){
        int idx = lower_bound(all.begin(), all.end(), salary[i]) - all.begin() + 1;
        update(idx, 1, 1, 1, m);
    }

    for(int i=0; i<q; i++){

        if(queries[i].first == '!'){
        int k = queries[i].second.first;
        int x = queries[i].second.second;

        // remove old
        int idx = lower_bound(all.begin(), all.end(), salary[k]) - all.begin() + 1;
        update(idx, -1, 1, 1, m);

        // update
        salary[k] = x;

        // add new
        idx = lower_bound(all.begin(), all.end(), salary[k]) - all.begin() + 1;
        update(idx, 1, 1, 1, m);

    }
    else{
        int a = queries[i].second.first;
        int b = queries[i].second.second;

        int l = lower_bound(all.begin(), all.end(), a) - all.begin() + 1;
        int r = upper_bound(all.begin(), all.end(), b) - all.begin();

        if(l>r){
            cout << 0 << endl;
        }
        else{
            cout << query(l, r, 1, 1, m) << endl;
        }
    }
}


    return 0;
}