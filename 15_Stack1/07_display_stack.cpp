#include<bits/stdc++.h>
using namespace std;

void display(stack<int>& st){

    if(st.empty()) return;

    int x = st.top();

    st.pop();

    display(st);

    cout << x << " ";
    
    st.push(x);   
}

int main(){

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    display(st);

}