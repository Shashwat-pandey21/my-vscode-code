#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList;
vector<bool> visited;
vector<int> path;
int v;

// function to add edge
void addEdge(int src, int dest, bool bidirectional = true)
{
    adjList[src].push_back(dest);

    if(bidirectional)
        adjList[dest].push_back(src);
}

// DFS function to check path
bool dfs(int src, int dest)
{
    if(src == dest)
        return true;

    visited[src] = true;

    for(int neighbor : adjList[src])
    {
        if(!visited[neighbor])
        {
            if(dfs(neighbor, dest))
                return true;
        }
    }

    return false;
}

// display adjacency list
void display()
{
    for(int i = 0; i < v; i++)
    {
        cout << i << " -> ";
        for(int x : adjList[i])
            cout << x << " ";
        cout << endl;
    }
}

int main()
{
    cout << "Enter number of vertices: ";
    cin >> v;

    adjList.resize(v);
    visited.resize(v, false);

    int e;
    cout << "Enter number of edges: ";
    cin >> e;

    while(e--)
    {
        int src, dest;
        cin >> src >> dest;

        addEdge(src, dest);
    }

    cout << "\nAdjacency List:\n";
    display();

    int src, dest;
    cout << "\nEnter source and destination to check path: ";
    cin >> src >> dest;

    if(dfs(src, dest))
        cout << "Path exists between " << src << " and " << dest << endl;
    else
        cout << "No path exists\n";
}