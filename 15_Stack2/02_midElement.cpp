#include<bits/stdc++.h>
using namespace std;

    void findMiddle(stack<int>&s,int totalSize){


        if(s.size() == 0){
            cout << "Stack is empty" << endl;
            return;
        }


        if(s.size() == totalSize/2 + 1){
            cout << "Middle element is: " << s.top() << endl;
            return;
        }

        int temp = s.top();
        s.pop();

        findMiddle(s,totalSize);

        //backtrack
        s.push(temp);


    }


int main(){
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    st.push(90);

    int totalSize = st.size();

    findMiddle(st,totalSize);

}