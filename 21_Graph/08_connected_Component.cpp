#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<int>& visited) {
    visited[node] = 1;

    for(auto neighbour : adj[node]) {
        if(!visited[neighbour]) {
            dfs(neighbour, adj, visited);
        }
    }
}

int countComponents(int n, vector<vector<int>>& adj) {
    vector<int> visited(n, 0);
    int components = 0;

    for(int i = 0; i < n; i++) {
        if(!visited[i]) {
            dfs(i, adj, visited);
            components++;
        }
    }

    return components;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "Connected Components: " << countComponents(n, adj);

    return 0;
}