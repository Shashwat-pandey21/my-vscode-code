#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int>st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

   cout << st.size() << endl;

    stack<int>temp;

    while (st.size()>0){
       cout << st.top() << " ";
       temp.push(st.top());
       st.pop();
    }

    while(temp.size()>0){
        
       st.push(temp.top());
       temp.pop();
    }
    

return 0;
}
