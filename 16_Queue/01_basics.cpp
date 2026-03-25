#include<bits/stdc++.h>
using namespace std;

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


return 0;
}