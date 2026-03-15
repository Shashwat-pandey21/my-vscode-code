#include<bits/stdc++.h>
using namespace std;



void pushAtIndex(stack<int>& st, int val,int idx){

    stack<int> temp;

    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }

    // push element at 3
    st.push(val);

    // temp -> st
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
}

void print(stack<int>&st){

    stack<int>temp;

    while (st.size()>0){  
       temp.push(st.top());
       st.pop();
    }

    while(temp.size()>0){
       cout << temp.top() << " ";
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
    print(st);
    cout << endl;

    pushAtIndex(st,100,3);
    print(st);

    }
