#include<bits/stdc++.h>
using namespace std;

class Stack{      //class
public:
    vector<int>v; //no overflow condition occur 

    Stack(){        //counstructor
    
    }

    void push(int val){
        v.push_back(val);
    }

    void pop(){
        if(v.size() == 0){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        v.pop_back();
    }

    int top(){
        if(v.size() == 0){
         cout<<"Stack Underflow"<<endl;
         return -1;
    }
        return v.size();
    }


    int size(){
        return v.size();
    }
};

int main(){

    
    Stack st;    //object;

    st.pop();
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);

    cout<<"Size:"<<st.size()<<endl;

    cout<<"Top Element : "<<st.top()<<endl;
}