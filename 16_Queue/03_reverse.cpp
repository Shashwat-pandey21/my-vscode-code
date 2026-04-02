#include<bits/stdc++.h>
using namespace std;


void display(queue<int>&q){

    int n  = q.size();

    cout << "Queue:"<<" ";
    for(int i=0; i<n; i++){
        int x = q.front();
        cout << x << " ";
        q.pop();
        q.push(x);
    }
}
void reverse(queue<int> &q){

    stack<int>st;

    while(!q.empty()){
        int x = q.front();
        q.pop();
        st.push(x);
    }

     while(!st.empty()){
        int x = st.top();
        st.pop();
        q.push(x);
    }
    cout << endl;
}


int main(){

    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    

    display(q);
    reverse(q);
    display(q);


return 0;
}