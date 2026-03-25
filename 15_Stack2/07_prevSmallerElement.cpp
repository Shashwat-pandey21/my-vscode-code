#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2, 1, 4, 3};
    int n = v.size();

    stack<int>st;
    st.push(-1);


    vector<int>ans(n);

    for(int i=0; i<n; i++){

        int curr = v[i];       


    // jo element curr se bada ya equal hai,wo previous smaller nahi ho sakta
        while(st.top()>=v[i]){  
            st.pop();
        }

        // ab stack ka top previous smaller element hai
        ans[i] = st.top();

       // current element ko future ke liye stack me daal do
        st.push(curr);
    }


    for(int i=0; i<n; i++){
        cout << ans[i] << " ";
    }

    cout <<endl;

    return 0;
}