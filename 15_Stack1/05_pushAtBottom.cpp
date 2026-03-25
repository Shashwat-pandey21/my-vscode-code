#include<bits/stdc++.h>
using namespace std;

void pushAtBottom(stack<int>& st, int val){

    if(st.empty()){
        cout << "Stack is empty cant put at bottom" << endl;
        return;
    }


    stack<int> temp;

    // st -> temp
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }

    // push element at bottom
    st.push(val);

    // temp -> st
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}

int main(){

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    pushAtBottom(st,100);

    // print stack
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}