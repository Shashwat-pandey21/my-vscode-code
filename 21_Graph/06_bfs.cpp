#include<bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>>& adj, int n) {
    vector<int> visited(n, 0);
    queue<int> q;

    q.push(start);
    visited[start] = 1;

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for(auto neighbour : adj[node]) {
            if(!visited[neighbour]) {
                visited[neighbour] = 1;
                q.push(neighbour);
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<int>> adj(n);

    cout << "Enter edges (u v):\n";
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    cout << "BFS Traversal: ";
    bfs(start, adj, n);

    return 0;
}