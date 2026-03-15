#include<bits/stdc++.h>
using namespace std;

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

    stack<int>st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    print(st);

    stack<int>gt;
    stack<int>rt;

    //empty st into gt
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }

    //empty gt into rt
    while (gt.size()>0){
        
        rt.push(gt.top());
        gt.pop();
    }

    //now empty rt into st and print
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }

    cout << endl;

    print(st);
       
return 0;
}
