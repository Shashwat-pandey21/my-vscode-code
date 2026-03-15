#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList;
vector<bool> visited;
vector<int> path;
int v;

void addEdge(int src, int dest, bool bidirectional = true)
{
    adjList[src].push_back(dest);

    if(bidirectional)
        adjList[dest].push_back(src);
}

void dfsAllPaths(int curr, int dest)
{
    visited[curr] = true;
    path.push_back(curr);

    if(curr == dest)
    {
        for(int node : path)
            cout << node << " ";
        cout << endl;
    }
    else
    {
        for(int neighbor : adjList[curr])
        {
            if(!visited[neighbor])
                dfsAllPaths(neighbor, dest);
        }
    }

    // backtracking
    path.pop_back();
    visited[curr] = false;
}

int main()
{
    cin >> v;

    adjList.resize(v);
    visited.resize(v,false);

    int e;
    cin >> e;

    while(e--)
    {
        int src,dest;
        cin >> src >> dest;

        addEdge(src,dest);
    }

    int src,dest;
    cin >> src >> dest;

    cout << "All paths from " << src << " to " << dest << endl;

    dfsAllPaths(src,dest);
}