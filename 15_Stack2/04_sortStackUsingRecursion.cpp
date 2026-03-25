#include<bits/stdc++.h>
using namespace std;

void insertAtSortedPosition(stack<int>& st, int value){

   if(st.empty()){
      st.push(value);
      return;
   }

   if(st.top()>=value){
    st.push(value);
    return;
   }

   int topElement = st.top();

   st.pop();

   insertAtSortedPosition( st, value);

   //restore or backtrack
   st.push(topElement);
}



void sortStack(stack<int>&st){
    
    if(st.empty()) return;

    int topElement = st.top();

    st.pop();

    sortStack(st);

    insertAtSortedPosition(st,topElement);

}


int main(){

    stack<int> st;

    st.push(7);
    st.push(11);
    st.push(3);
    st.push(5);
    st.push(9);

    sortStack(st);

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

}