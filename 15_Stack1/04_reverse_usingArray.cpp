#include<bits/stdc++.h>
using namespace std;

void print(stack<int> &st){

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

    int n = st.size();
    int arr[n];

    // stack -> array
    for(int i = 0; i < n; i++){
        arr[i] = st.top();
        st.pop();
    }

    // print reverse order
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

}