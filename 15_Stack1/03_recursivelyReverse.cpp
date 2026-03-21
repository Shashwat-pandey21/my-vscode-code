#include<bits/stdc++.h>
using namespace std;

void reversePrint(stack<int>& st){

    if(st.empty()) return;

    int x = st.top();

    cout << x << " ";

    st.pop();

    reversePrint(st);
    
    st.push(x);   // stack restore
}

int main(){

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reversePrint(st);

}