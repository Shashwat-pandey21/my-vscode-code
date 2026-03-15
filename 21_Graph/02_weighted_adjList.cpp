#include<bits/stdc++.h>
using namespace std;

vector<list<pair<int,int>>> adjList;
int v;

void helper(int src, int dest, int wt, bool bi_directional = true){

    adjList[src].push_back({dest,wt});

    if(bi_directional)
        adjList[dest].push_back({src,wt});
}

void display(){

    for(int i=0;i<v;i++){

        cout << i << " -> ";

        for(auto el : adjList[i])
            cout << "(" << el.first << "," << el.second << ") ";

        cout << endl;
    }
}

int main(){

    cin >> v;

    adjList.resize(v);

    int e;
    cin >> e;

    while(e--){

        int src,dest,wt;
        cin >> src >> dest >> wt;

        helper(src,dest,wt);
    }

    display();
}