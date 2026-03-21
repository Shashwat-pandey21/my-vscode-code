#include<bits/stdc++.h>
using namespace std;

int shortestPath(int start, int end, vector<vector<int>>& adj, int n) {
    vector<int> visited(n, 0);
    vector<int> dist(n, -1);

    queue<int> q;

    q.push(start);
    visited[start] = 1;
    dist[start] = 0;

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        for(auto neighbour : adj[node]) {
            if(!visited[neighbour]) {
                visited[neighbour] = 1;
                dist[neighbour] = dist[node] + 1;
                q.push(neighbour);
            }
        }
    }

    return dist[end];
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

    int start, end;
    cin >> start >> end;

    int ans = shortestPath(start, end, adj, n);

    cout << "Shortest distance: " << ans << endl;

    return 0;
}