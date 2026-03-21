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

void pushAtBottom( stack<int> &st, int val){

    if(st.empty()){
        st.push(val);
        return;
    }

    int x = st.top();

    st.pop();

    pushAtBottom(st,val);
    
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
    cout << endl;

    pushAtBottom(st,-10);

    display(st);
    

}