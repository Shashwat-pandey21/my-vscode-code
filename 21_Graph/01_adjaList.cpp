#include<bits/stdc++.h>
using namespace std;

vector<list<int>> adjList;
int v;

void addEdges(int src, int dest, bool bi_directional = true){

    adjList[src].push_back(dest);

    if(bi_directional)
        adjList[dest].push_back(src);
}

void display(){

    for(int i=0;i<v;i++){

        cout << i << " -> ";

        for(auto el : adjList[i])
            cout << el << " ";

        cout << endl;
    }
}

int main(){

    cin >> v;

    adjList.resize(v);

    int e;
    cin >> e;

    while(e--){

        int src,dest;
        cin >> src >> dest;

        addEdges(src,dest);
    }

    display();
}


// class Solution {
//   public:
  
//     vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
       
//         vector<vector<int>>adjList(V);
        
//         for(auto e : edges){
            
//             int src = e.first;
//             int dest = e.second;
            
//             adjList[src].push_back(dest);
//             adjList[dest].push_back(src);
//         }
        
//         return adjList;
//     }
// };