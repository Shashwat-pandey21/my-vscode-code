#include<bits/stdc++.h>
using namespace std;

void insertAtSortedPosition(stack<int>& st, int target){
    
    if(st.empty() || st.top() <= target){
        st.push(target);
        return;
    }

    int topElement = st.top();
    st.pop();

    insertAtSortedPosition(st, target);

    st.push(topElement);
}

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    insertAtSortedPosition(st, 33);

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}