#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
      void dfs(int node, vector<vector<int>>& rooms, vector<bool>& visited){
    
        visited[node] = true;

        for(int key : rooms[node]){
        
            if(!visited[key])
                dfs(key, rooms, visited);
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        int n = rooms.size();
        vector<bool> visited(n, false);

        dfs(0, rooms, visited);
  
        //finally check visited array if any node is not visited return false otherwise true 
        for(int i = 0; i < n; i++){
        
            if(visited[i] == false)
                return false;
        }
        return true;
    }
};