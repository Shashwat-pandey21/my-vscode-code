#include<bits/stdc++.h>
using namespace std;

//display
void display(stack<int>& st){

    if(st.empty()) return;

    int topElement = st.top();

    st.pop();

    display(st);

    cout << topElement << " ";
    
    //backtrack
    st.push(topElement);   
}




//pushAtBottom
void pushAtBottom( stack<int> &st, int val){


    //base case
    if(st.empty()){
        st.push(val);
        return;
    }

    int topElement = st.top();

    st.pop();

    pushAtBottom(st,val);
    
    //backtrack
    st.push(topElement);
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