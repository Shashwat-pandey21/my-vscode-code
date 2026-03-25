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
int main(){

    queue<int>q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout << "Size of queue: "<< q.size() << endl;

    q.pop();

    cout << "Size of queue: "<< q.size() << endl;

    cout <<"Front Element is:" <<q.front()<<endl;

    if(q.empty()){
        cout <<  "Queue is empty" <<endl;
    }
    else{
        cout << "Queue is not empty " << endl;
    }

    display(q);


return 0;
}